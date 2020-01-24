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
    OK('equals');
}

/**
 * @brief tests trimToSize
 * creates an instance of the same array
 * 1. check the size of the array against the number of objects it has
 * 2. after removal of some instances of objects, check the size of the array against number of objects it has
 * 3. resize and then check the size of the array again against the number of objects it has
 * 
 */
void testResize()
{
    Array a = new Array([ 'b', 'c', 'd' ]);
    // let data be the structure where memory is allocated toward for holding items in the array
    t_true(a.size() == a->data.capacity());
    a.remove('b');
    a.remove('c');
    t_false(a.size() == a->data.capacity());
    a.resize();
    t_true(a.size() == a->data.capacity());
    OK('resize');
}

/**
 * @brief tests Subset
 * creates two instances of an array and also a subset from the first array a
 * 1. checks that the subsetted array is the expected subset
 * 2. checks that we can subset the whole array (essentially copy it)
 * 
 */
void testSubset()
{
    Array a = new Array([ 'b', 'c', 'd', 'e' ]);
    Array b = new Array([ 'b', 'c' ]);
    Array c = a.subset(0, 2);
    Array d = a.subset(0, 4);
    t_false(a.equals(b)); // shows arrays a and b are different
    t_true(c.equals(b));  // showing that the subsetted array from a is equal to be
    t_false(a.equals(c)); // that a and c should not be equal because c does not have all the same elements as a
    OK('subset case 1');
    t_true(a.equals(d)); // d and a should be equal because d should all of a's elements but no extra
    OK('subset case 2');
}

/**
 * @brief checks if returning the size of the array gives the expected result
 * size should be the number of elements in the array
 * tests 3 different sizes 
 * 
 */
void testSize()
{
    Array a = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    Array b = new Array([ 'b', 'c' ]);
    Array c = new Array();
    t_true(a.size() == 4);
    t_true(b.size() == 2);
    t_true(c.size() == 0);
    OK('size');
}

/**
 * @brief checks the set function
 * creates three instances of arrays (2 which are equal and one different)
 * 1. sets one of the objects in the array and checks that it is different we get the expected object returned
 * 2. checks that the array, now changed, is equivalent to the third array
 * 3. tries to set the array at an invalid index; expect no change and return of NULL
 * 
 */
void testSet()
{
    Array a = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    Array b = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    Array c = new Array([ 'b', 'c', 'Z', 'e', 'f', 'g', 'h' ]);
    t_true(a.equals(b));
    t_false(a.equals(c));
    t_true(a.set('Z', 2) == 'Z');
    t_false(a.equals(b));             // a is changed, should no longer be equal to b
    t_true(a.equals(c));              // a should now be equal to c
    t_true(a.set('G', 1999) == NULL); // return NULL because we are not allowed use index thats not in array
    t_true(a.equals(c));              // nothing should change since that set is invalid
}

/**
 * @brief checks the retainAll function
 * 1. testing that the correct elements are retained
 * 2. testing that the correct elements are retained in the right order
 * 3. testing empty array passed in (should retain nothing)
 * 4. testing the array with no common elements passed in (should retain nothing)
 * 5. testing the array passed in with some common and some not in common elements (retain common ones)
 * 6. testing when nonempty array is passed to an empty array
 * 
 */
void testRetainAll()
{
    Array a = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    Array b = new Array([ 'b', 'd', 'e', 'f' ]);
    Array c = new Array();
    Array d = new Array([ '5', '6', '3', '9' ]);
    Array e = new Array([ 'b', 'd', '1', 'e', 'f' ]);
    Array f = new Array([ 'd', 'b' ]);
    Array g = new Array([ 'b', 'd' ]);
    // case 1
    t_false(a.equals(b));
    a.retainAll(b);
    t_true(a.equals(b));
    OK('retainAll case 1');
    //case 2, resetting a first then testing
    delete[] a;
    Array a = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    t_false(a.equals(g));
    a.retainAll(f);
    t_true(a.equals(g));  // order should remain the same
    t_false(a.equals(f)); // a and f have different orders therefore not equal
    OK('retainAll case 2');
    //case 3, resetting a first then testing
    delete[] a;
    Array a = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    t_false(a.equals(c));
    a.retainAll(c);
    t_true(a.equals(c));
    OK('retainAll case 3');
    //case 4, resetting a first then testing
    delete[] a;
    Array a = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    t_false(a.equals(d));
    a.retainAll(d);
    t_true(a.equals(c)); // a should be empty
    OK('retainAll case 4');
    //case 5, resetting a first then testing
    delete[] a;
    Array a = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    t_false(a.equals(e));
    t_false(a.equals(b));
    a.retainAll(e);
    t_true(a.equals(b));  // a should be the same as b now
    t_false(a.equals(e)); // a is still not equivalent with e because it shouldn't add a 1 to itself
    OK('retainAll case 5');
    //case 6
    Array empty = new Array();
    t_true(c.equals(empty));
    c.retainsAll(a);
    t_true(c.equals(empty));
    OK('retainAll case 6');
}

/**
 * @brief testing the resizing function
 * checks to see that more memory is allocated for the array (even if the array does not have that many elements)
 * 1. resizes an empty array
 * 2. resizes an nonempty array
 * 
 */
void testResize()
{
    Array b = new Array([ 'b', 'd', 'e', 'f' ]);
    Array c = new Array();
    c.resize(0);
    t_true(c->data.capacity() == 0);
    c.resize(50);
    t_true(c->data.capacity() == 50);
    OK('resize case 1')
    t_true(b->data.capacity() == 4);
    b.resize(40);
    t_true(b->data.capacity() == 40);
    OK('resize case 2');
}

/**
 * @brief checks the retainAll function
 * 1. testing that the correct elements are removed
 * 2. testing that the correct elements are removed and array remains in the right order
 * 3. testing empty array passed in (should remove nothing)
 * 4. testing the array with no common elements passed in (should remove nothing)
 * 5. testing the array passed in with some common and some not in common elements (remove common ones)
 * 6. testing when nonempty array is passed to an empty array
 * 
 */
void testRemoveAll()
{
    Array a = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    Array ar = new Array([ 'c', 'g', 'h' ]);
    Array b = new Array([ 'b', 'd', 'e', 'f' ]);
    Array c = new Array();
    Array d = new Array([ '5', '6', '3', '9' ]);
    Array e = new Array([ 'b', 'd', '1', 'e', 'f' ]);
    Array f = new Array([ 'd', 'b' ]);
    Array fr = new Array([ 'c', 'e', 'f', 'g', 'h' ]);
    // case 1
    t_false(a.equals(ar));
    t.true(a.removeAll(b));
    t_true(a.equals(ar));
    OK('removeAll case 1');
    //case 2, resetting a first then testing
    delete[] a;
    Array a = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    t_false(a.equals(fr));
    t.true(a.removeAll(f));
    t_true(a.equals(fr)); // order should remain the same
    OK('removeAll case 2');
    //case 3, resetting a first then testing
    delete[] a;
    Array a = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    Array copy = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    t_true(a.removeAll(c));
    t_true(a.equals(copy));
    OK('removeAll case 3');
    //case 4, resetting a first then testing
    delete[] a;
    Array a = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    Array copy = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    t_false(a.removeAll(d));
    t_true(a.equals(copy));
    OK('removeAll case 4');
    //case 5, resetting a first then testing
    delete[] a;
    Array a = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    t_false(a.equals(ar));
    t.false(a.removeAll(e));
    t_true(a.equals(ar));
    OK('removeAll case 5');
    //case 6
    Array empty = new Array();
    t_true(c.equals(empty));
    t_false(c.removeAll(a));
    t_true(c.equals(empty));
    OK('removeAll case 6');
}

/**
 * @brief testing by taking the new array generated by removing elements and comparing to what the expected outcome is
 * 
 */
void testRemoveRange()
{
    Array a = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    Array b = new Array([ 'b', 'c', 'g', 'h' ]);
    Array c = a.removeRange(2, 5);
    t_false(a.equals(c));
    t_true(c.equals(b));
}

void testRemove()
{
    Array a = new Array([ 'b', 'c', 'd', 'e', 'f', 'g', 'h' ]);
    Array b = new Array([ 'b', 'c', 'g', 'h' ]);
}

int main()
{
    test1();
    testResize();
    testRetainAll();
    testSize();
    testSubset();
    testRemoveRange();
    testRemoveAll)();
    return 0;
}