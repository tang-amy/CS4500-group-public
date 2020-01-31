// adapted from Warmup Exercise 2 test cases/test file layout

#include "object.h"
#include "string.h"
#include "array.h"
#include <stdio.h>
#include <assert.h>

void testObjects()
{
    Array *a = new Array();
    Object *o = new Object();
    Object *o1 = new Object();
    Object *o2 = new Object();
    Object *o3 = new Object();

    // adding elements to end
    assert(a->add(o));
    assert(a->add(o1));
    assert(a->add(o2));     // a = [o, o1, o2]
    assert(a->size() == 3); // check size
    // check individual elements
    assert(a->get(0)->equals(o));
    assert(a->get(1)->equals(o1));
    assert(a->get(2)->equals(o2));

    // insert something in the middle and recheck elements
    a->add(o3, 2);          // a = [o, o1, o3, o2]
    assert(a->size() == 4); // check size
    // check individual elements
    assert(a->get(0)->equals(o));
    assert(a->get(1)->equals(o1));
    assert(a->get(2)->equals(o3));
    assert(a->get(3)->equals(o2));

    // removing an object
    assert(a->remove(1)->equals(o1)); // a = [o, o3, o2]
    assert(a->size() == 3);
    // check if remainder of array is correct after removing 1 element
    assert(a->get(1)->equals(o3));
    assert(a->get(2)->equals(o2));

    // check for the index of an object
    assert(a->indexOf(o) == 0);
    assert(a->indexOf(o1) == -1);

    // setting the object at 3 to be the removed object from before
    assert(a->set(o1, 1)->equals(o3)); // a = [o, o1, o2]
    assert(a->size() == 3);
    assert(a->get(0)->equals(o));  // check if object before was changed
    assert(a->get(1)->equals(o1)); // check object was changed
    assert(a->get(2)->equals(o2)); // checking object after is unchanged

    // try setting the same object
    assert(a->set(o1, 1)->equals(o1)); // a = [o, o1, o2]
    assert(a->size() == 3);
    assert(a->get(0)->equals(o));  // check if object before was changed
    assert(a->get(1)->equals(o1)); // check object was changed
    assert(a->get(2)->equals(o2)); // checking object after is unchanged

    // clear array and add objects
    a->clear(); // a = []
    assert(a->size() == 0);
    // check if it can still add the object properly
    a->add(o); // a = [o]
    assert(a->size() == 1);
    a->add(o2, 1); // this one is different! should be able to add to the end of the array via specifying index
    // a = [o, o2]
    assert(a->size() == 2);

    // check equals
    Array *a2 = new Array();
    a2->add(o);
    a2->add(o2);
    // a2 = [o, ]
    // a2 should match now
    assert(a->equals(a2));
    a2->add(o4);
    assert(!a->equals(a2)); // added another object so now it should be false
    // clear both and check
    a->clear();
    a2->clear();
    assert(a2->equals(a));
    // check against a newly initialized empty array
    Array *a3 = new Array();
    assert(a3->equals(a2));

    // checking addAll with adding an empty array
    a->(o);
    a->(o2);                // a=[o,o2]
    assert(a->size() == 2); // check size
    assert(a->addAll(a2));  // add an empty array
    // a=[o,o2]
    // check nothing has changed
    assert(a->size() == 2);
    assert(a->get(0)->equals(o));
    assert(a->get(1)->equals(o2));
    assert(a->addAll(a2, 0)); // add an empty array
    // check nothing has changed
    assert(a->size() == 2);
    assert(a->get(0)->equals(o));
    assert(a->get(1)->equals(o2));

    // checking adding nonempty array to an empty array
    assert(a2->addAll(a));
    // a2=[o,o2]
    assert(a2->size() == 2);

    // checking adding nonempty array to a given index in a nonempty array
    a2->add(o3);      // a2=[o,o2, o3]
    a2->addAll(a, 1); // a2=[o, o, o2, o2, o3]
    assert(a2->size() == 5);
    // checking elements 1 by 1
    assert(a2->get(0)->equals(o));
    assert(a2->get(1)->equals(o));
    assert(a2->get(2)->equals(o2));
    assert(a2->get(3)->equals(o2));
    assert(a2->get(4)->equals(o3));

    // checking adding an array to itself
    a->add(o3);      // a=[o,o2, o3]
    a->addAll(a, 1); // a2=[o, o, o2, o3, o2, o3]
    assert(a->size() == 6);
    // check each element individually
    assert(a2->get(0)->equals(o));
    assert(a2->get(1)->equals(o));
    assert(a2->get(2)->equals(o2));
    assert(a2->get(3)->equals(o3));
    assert(a2->get(4)->equals(o2));
    assert(a2->get(5)->equals(o3));

    delete a;
    delete a2;
    delete a3;
    delete o;
    delete o1;
    delete o2;
    delete o3;
    delete o4;
}

int main()
{
    testObjects();
    return 0;
}