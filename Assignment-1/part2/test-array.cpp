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
    // a2 = [o, o2]
    // a2 should match now
    assert(a->equals(a2));
    Object *o4 = new Object();
    a2->add(o4);            // a2 = [o, o2, o4]
    assert(!a->equals(a2)); // added another object so now it should be false
    // clear both and check
    a->clear();
    a2->clear();
    assert(a2->equals(a));
    // check against a newly initialized empty array
    Array *a3 = new Array();
    assert(a3->equals(a2));

    // checking addAll with adding an empty array
    a->add(o);
    a->add(o2);             // a=[o,o2]
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

void testString()
{
    StrArray *a = new StrArray();
    String *o = new String("Hello");
    String *o1 = new String("World");
    String *o2 = new String("llll");
    String *o3 = new String("ffffffffff");

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

    // removing a string
    assert(a->remove(1)->equals(o1)); // a = [o, o3, o2]
    assert(a->size() == 3);
    // check if remainder of array is correct after removing 1 element
    assert(a->get(1)->equals(o3));
    assert(a->get(2)->equals(o2));

    // check for the index of a string
    assert(a->indexOf(o) == 0);
    assert(a->indexOf(o1) == -1);

    // setting the string at 3 to be the removed string from before
    assert(a->set(o1, 1)->equals(o3)); // a = [o, o1, o2]
    assert(a->size() == 3);
    assert(a->get(0)->equals(o));  // check if string before was changed
    assert(a->get(1)->equals(o1)); // check string was changed
    assert(a->get(2)->equals(o2)); // checking string after is unchanged

    // try setting the same string
    assert(a->set(o1, 1)->equals(o1)); // a = [o, o1, o2]
    assert(a->size() == 3);
    assert(a->get(0)->equals(o));  // check if string before was changed
    assert(a->get(1)->equals(o1)); // check string was changed
    assert(a->get(2)->equals(o2)); // checking string after is unchanged

    // clear array and add string
    a->clear(); // a = []
    assert(a->size() == 0);
    // check if it can still add the string properly
    a->add(o); // a = [o]
    assert(a->size() == 1);
    a->add(o2, 1); // this one is different! should be able to add to the end of the array via specifying index
    // a = [o, o2]
    assert(a->size() == 2);

    // check equals
    StrArray *a2 = new StrArray();
    a2->add(o);
    a2->add(o2);
    // a2 = [o, o2]
    // a2 should match now
    assert(a->equals(a2));
    String *o4 = new String("nmsl");
    a2->add(o4);            // a2 = [o, o2, o4]
    assert(!a->equals(a2)); // added another string so now it should be false
    // clear both and check
    a->clear();
    a2->clear();
    assert(a2->equals(a));
    // check against a newly initialized empty array
    StrArray *a3 = new StrArray();
    assert(a3->equals(a2));

    // checking addAll with adding an empty array
    a->add(o);
    a->add(o2);             // a=[o,o2]
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

void testInt()
{
    IntArray *a = new IntArray();
    int o = 9696;
    int o1 = 1234;
    int o2 = 567;
    int o3 = 6666;

    // adding elements to end
    assert(a->add(o));
    assert(a->add(o1));
    assert(a->add(o2));     // a = [o, o1, o2]
    assert(a->size() == 3); // check size
    // check individual elements
    assert(a->get(0) == 9696);
    assert(a->get(1) == 1234);
    assert(a->get(2) == 567);

    // insert something in the middle and recheck elements
    a->add(o3, 2);          // a = [o, o1, o3, o2]
    assert(a->size() == 4); // check size
    // check individual elements
    assert(a->get(0) == 9696);
    assert(a->get(1) == 1234);
    assert(a->get(2) == 6666);
    assert(a->get(3) == 567);

    // removing int
    assert(a->remove(1) == 1234); // a = [o, o3, o2]
    assert(a->size() == 3);
    // check if remainder of array is correct after removing 1 element
    assert(a->get(1) == 6666);
    assert(a->get(2) == 567);

    // check for the index of int
    assert(a->indexOf(o) == 0);
    assert(a->indexOf(o1) == -1);

    // setting the int at 3 to be the removed int from before
    assert(a->set(o1, 1) == 6666); // a = [o, o1, o2]
    assert(a->size() == 3);
    assert(a->get(0) == 9696); // check if int before was changed
    assert(a->get(1) == 1234); // check int was changed
    assert(a->get(2) == 567);  // checking int after is unchanged

    // try setting the same int
    assert(a->set(o1, 1) == 1234); // a = [o, o1, o2]
    assert(a->size() == 3);
    assert(a->get(0) == 9696); // check if object before was changed
    assert(a->get(1) == 1234); // check object was changed
    assert(a->get(2) == 567);  // checking object after is unchanged

    // clear array and add int
    a->clear(); // a = []
    assert(a->size() == 0);
    // check if it can still add the int properly
    a->add(o); // a = [o]
    assert(a->size() == 1);
    a->add(o2, 1); // this one is different! should be able to add to the end of the array via specifying index
    // a = [o, o2]
    assert(a->size() == 2);

    // check equals
    IntArray *a2 = new IntArray();
    a2->add(o);
    a2->add(o2);
    // a2 = [o, o2]
    // a2 should match now
    assert(a->equals(a2));
    int o4 = 4444;
    a2->add(o4);            // a2 = [o, o2, o4]
    assert(!a->equals(a2)); // added another int so now it should be false
    // clear both and check
    a->clear();
    a2->clear();
    assert(a2->equals(a));
    // check against a newly initialized empty array
    IntArray *a3 = new IntArray();
    assert(a3->equals(a2));

    // checking addAll with adding an empty array
    a->add(o);
    a->add(o2);             // a=[o,o2]
    assert(a->size() == 2); // check size
    assert(a->addAll(a2));  // add an empty array
    // a=[o,o2]
    // check nothing has changed
    assert(a->size() == 2);
    assert(a->get(0) == 9696);
    assert(a->get(1) == 567);
    assert(a->addAll(a2, 0)); // add an empty array
    // check nothing has changed
    assert(a->size() == 2);
    assert(a->get(0) == 9696);
    assert(a->get(1) == 567);

    // checking adding nonempty array to an empty array
    assert(a2->addAll(a));
    // a2=[o,o2]
    assert(a2->size() == 2);

    // checking adding nonempty array to a given index in a nonempty array
    a2->add(o3);      // a2=[o,o2, o3]
    a2->addAll(a, 1); // a2=[o, o, o2, o2, o3]
    assert(a2->size() == 5);
    // checking elements 1 by 1
    assert(a2->get(0) == 9696);
    assert(a2->get(1) == 9696);
    assert(a2->get(2) == 567);
    assert(a2->get(3) == 567);
    assert(a2->get(4) == 6666);

    // checking adding an array to itself
    a->add(o3);      // a=[o,o2, o3]
    a->addAll(a, 1); // a2=[o, o, o2, o3, o2, o3]
    assert(a->size() == 6);
    // check each element individually
    assert(a2->get(0) == 9696);
    assert(a2->get(1) == 9696);
    assert(a2->get(2) == 567);
    assert(a2->get(3) == 6666);
    assert(a2->get(4) == 567);
    assert(a2->get(5) == 6666);

    delete a;
    delete a2;
    delete a3;
}

void testFloat()
{
    FloatArray *a = new FloatArray();
    float o = 9696.6;
    float o1 = 1234.6;
    float o2 = 567.6;
    float o3 = 6666.6;

    // adding elements to end
    assert(a->add(o));
    assert(a->add(o1));
    assert(a->add(o2));     // a = [o, o1, o2]
    assert(a->size() == 3); // check size
    // check individual elements
    assert(a->get(0) == 9696.6);
    assert(a->get(1) == 1234.6);
    assert(a->get(2) == 567.6);

    // insert something in the middle and recheck elements
    a->add(o3, 2);          // a = [o, o1, o3, o2]
    assert(a->size() == 4); // check size
    // check individual elements
    assert(a->get(0) == 9696.6);
    assert(a->get(1) == 1234.6);
    assert(a->get(2) == 6666.6);
    assert(a->get(3) == 567.6);

    // removing a float
    assert(a->remove(1) == 1234.6); // a = [o, o3, o2]
    assert(a->size() == 3);
    // check if remainder of array is correct after removing 1 element
    assert(a->get(1) == 6666.6);
    assert(a->get(2) == 567.6);

    // check for the index of float
    assert(a->indexOf(o) == 0);
    assert(a->indexOf(o1) == -1);

    // setting the float at 3 to be the removed float from before
    assert(a->set(o1, 1) == 6666.6); // a = [o, o1, o2]
    assert(a->size() == 3);
    assert(a->get(0) == 9696.6); // check if float before was changed
    assert(a->get(1) == 1234.6); // check float was changed
    assert(a->get(2) == 567.6);  // checking float after is unchanged

    // try setting the same float
    assert(a->set(o1, 1) == 1234.6); // a = [o, o1, o2]
    assert(a->size() == 3);
    assert(a->get(0) == 9696.6); // check if float before was changed
    assert(a->get(1) == 1234.6); // check float was changed
    assert(a->get(2) == 567.6);  // checking float after is unchanged

    // clear array and add floats
    a->clear(); // a = []
    assert(a->size() == 0);
    // check if it can still add the float properly
    a->add(o); // a = [o]
    assert(a->size() == 1);
    a->add(o2, 1); // this one is different! should be able to add to the end of the array via specifying index
    // a = [o, o2]
    assert(a->size() == 2);

    // check equals
    FloatArray *a2 = new FloatArray();
    a2->add(o);
    a2->add(o2);
    // a2 = [o, o2]
    // a2 should match now
    assert(a->equals(a2));
    float o4 = 4444.4;
    a2->add(o4);            // a2 = [o, o2, o4]
    assert(!a->equals(a2)); // added another float so now it should be false
    // clear both and check
    a->clear();
    a2->clear();
    assert(a2->equals(a));
    // check against a newly initialized empty array
    FloatArray *a3 = new FloatArray();
    assert(a3->equals(a2));

    // checking addAll with adding an empty array
    a->add(o);
    a->add(o2);             // a=[o,o2]
    assert(a->size() == 2); // check size
    assert(a->addAll(a2));  // add an empty array
    // a=[o,o2]
    // check nothing has changed
    assert(a->size() == 2);
    assert(a->get(0) == 9696.6);
    assert(a->get(1) == 567.6);
    assert(a->addAll(a2, 0)); // add an empty array
    // check nothing has changed
    assert(a->size() == 2);
    assert(a->get(0) == 9696.6);
    assert(a->get(1) == 567.6);

    // checking adding nonempty array to an empty array
    assert(a2->addAll(a));
    // a2=[o,o2]
    assert(a2->size() == 2);

    // checking adding nonempty array to a given index in a nonempty array
    a2->add(o3);      // a2=[o,o2, o3]
    a2->addAll(a, 1); // a2=[o, o, o2, o2, o3]
    assert(a2->size() == 5);
    // checking elements 1 by 1
    assert(a2->get(0) == 9696.6);
    assert(a2->get(1) == 9696.6);
    assert(a2->get(2) == 567.6);
    assert(a2->get(3) == 567.6);
    assert(a2->get(4) == 6666.6);

    // checking adding an array to itself
    a->add(o3);      // a=[o,o2, o3]
    a->addAll(a, 1); // a2=[o, o, o2, o3, o2, o3]
    assert(a->size() == 6);
    // check each element individually
    assert(a2->get(0) == 9696.6);
    assert(a2->get(1) == 9696.6);
    assert(a2->get(2) == 567.6);
    assert(a2->get(3) == 6666.6);
    assert(a2->get(4) == 567.6);
    assert(a2->get(5) == 6666.6);

    delete a;
    delete a2;
    delete a3;
}

void testBool()
{
    BoolArray *a = new BoolArray();
    bool o = true;
    bool o1 = true;
    bool o2 = false;
    bool o3 = false;

    // adding elements to end
    assert(a->add(o));
    assert(a->add(o1));
    assert(a->add(o2));     // a = [o, o1, o2]
    assert(a->size() == 3); // check size
    // check individual elements
    assert(a->get(0) == true);
    assert(a->get(1) == true);
    assert(a->get(2) == false);

    // insert something in the middle and recheck elements
    a->add(o3, 2);          // a = [o, o1, o3, o2]
    assert(a->size() == 4); // check size
    // check individual elements
    assert(a->get(0) == true);
    assert(a->get(1) == true);
    assert(a->get(2) == false);
    assert(a->get(3) == false);

    // removing a bool
    assert(a->remove(1) == true); // a = [o, o3, o2]
    assert(a->size() == 3);
    // check if remainder of array is correct after removing 1 element
    assert(a->get(1) == false);
    assert(a->get(2) == false);

    // check for the index of bool
    assert(a->indexOf(o) == 0);
    assert(a->indexOf(o1) == -1);

    // setting the bool at 3 to be the removed bool from before
    assert(a->set(o1, 1) == false); // a = [o, o1, o2]
    assert(a->size() == 3);
    assert(a->get(0) == true);  // check if bool before was changed
    assert(a->get(1) == true);  // check bool was changed
    assert(a->get(2) == false); // checking bool after is unchanged

    // try setting the same bool
    assert(a->set(o1, 1) == true); // a = [o, o1, o2]
    assert(a->size() == 3);
    assert(a->get(0) == true);  // check if bool before was changed
    assert(a->get(1) == true);  // check bool was changed
    assert(a->get(2) == false); // checking bool after is unchanged

    // clear array and add bools
    a->clear(); // a = []
    assert(a->size() == 0);
    // check if it can still add the bool properly
    a->add(o); // a = [o]
    assert(a->size() == 1);
    a->add(o2, 1); // this one is different! should be able to add to the end of the array via specifying index
    // a = [o, o2]
    assert(a->size() == 2);

    // check equals
    BoolArray *a2 = new BoolArray();
    a2->add(o);
    a2->add(o2);
    // a2 = [o, o2]
    // a2 should match now
    assert(a->equals(a2));
    bool o4 = false;
    a2->add(o4);            // a2 = [o, o2, o4]
    assert(!a->equals(a2)); // added another bool so now it should be false
    // clear both and check
    a->clear();
    a2->clear();
    assert(a2->equals(a));
    // check against a newly initialized empty array
    BoolArray *a3 = new BoolArray();
    assert(a3->equals(a2));

    // checking addAll with adding an empty array
    a->add(o);
    a->add(o2);             // a=[o,o2]
    assert(a->size() == 2); // check size
    assert(a->addAll(a2));  // add an empty array
    // a=[o,o2]
    // check nothing has changed
    assert(a->size() == 2);
    assert(a->get(0) == true);
    assert(a->get(1) == false);
    assert(a->addAll(a2, 0)); // add an empty array
    // check nothing has changed
    assert(a->size() == 2);
    assert(a->get(0) == true);
    assert(a->get(1) == false);

    // checking adding nonempty array to an empty array
    assert(a2->addAll(a));
    // a2=[o,o2]
    assert(a2->size() == 2);

    // checking adding nonempty array to a given index in a nonempty array
    a2->add(o3);      // a2=[o,o2, o3]
    a2->addAll(a, 1); // a2=[o, o, o2, o2, o3]
    assert(a2->size() == 5);
    // checking elements 1 by 1
    assert(a2->get(0) == true);
    assert(a2->get(1) == true);
    assert(a2->get(2) == false);
    assert(a2->get(3) == false);
    assert(a2->get(4) == false);

    // checking adding an array to itself
    a->add(o3);      // a=[o,o2, o3]
    a->addAll(a, 1); // a2=[o, o, o2, o3, o2, o3]
    assert(a->size() == 6);
    // check each element individually
    assert(a2->get(0) == true);
    assert(a2->get(1) == true);
    assert(a2->get(2) == false);
    assert(a2->get(3) == false);
    assert(a2->get(4) == false);
    assert(a2->get(5) == false);

    delete a;
    delete a2;
    delete a3;
}

int main()
{
    testObjects();
    testInt();
    testString();
    testFloat();
    return 0;
}