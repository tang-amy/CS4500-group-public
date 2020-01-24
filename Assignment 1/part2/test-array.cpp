// adapted from Warmup Exercise 2 test cases/test file layout

#include "object.h"
#include "string.h"
#include "array.h"

// exits code with error code 1
void FAIL() { exit(1); }
// prints the given const char m to keep track of the test cases
void OK(const char *m)
{ /** print m */
}
// checks if p is true
void t_true(bool p)
{
    if (!p)
        FAIL();
}
// checks if p is false
void t_false(bool p)
{
    if (p)
        FAIL();
}

/**
 * @brief creates 3 instances of arrays and checks equals function
 * 1. checks equals against itself
 * 2. checks equals against objects not equal/not the same type
 * 3. checks equals against different array which contains the same elements
 * 
 */
void test1()
{
    Array a = new Array();
    Array b = new Array([ 'b', 'c', 'd' ]);
    Array c = new Array([ 'b', 'c', 'd' ]);
    Object o = new Object();
    String s = new String('hello');
    // check to see if the array is equal to itself
    t_true(a.equals(a));
    t_true(b.equals(c));
    // check to see if the array is not equal to a different array
    t_false(a.equals(b));
    t_false(c.equals(a));
    t_false(a.equals(o));
    t_false(c.equals(o));
    t_false(b.equals(s));
}

int main()
{
    return 0;
}