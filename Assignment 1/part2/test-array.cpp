// adapted from Warmup Exercise 2 test cases/test file layout

#include "object.h"
#include "string.h"
#include "array.h"

void FAIL() { exit(1); }
void OK(const char *m)
{ /** print m */
}
void t_true(bool p)
{
    if (!p)
        FAIL();
}
void t_false(bool p)
{
    if (p)
        FAIL();
}

void test1
{
    Array a = new Array();
    Array b = new Array(['b']);
    t_true(a.equals(a));
    t_false(a.equals(b));
    t_false(b.equals(a));
    a.add('b');
    t_true(a.equals(b));
}

int main()
{
    return 0;
}