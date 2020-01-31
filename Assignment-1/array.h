// lang::CwC

#pragma once

#include "object.h"
#include "string.h"

/**
 * @brief Array class. Represents a list of Objects.
 */
class Array : public Object
{
public:
    /**
     * @brief Construct a new Array object
     * 
     */
    Array() : Object() {}

    /**
     * @brief Destroy the Array object
     * 
     */
    ~Array() {}

    /** @brief Adds a given Object to the end of the Array
     * 
     * @param o the Object to be added to this Array
     * @return true if the Object was added successfully
     * @return false if the Object was NOT added successfully 
     */
    bool add(Object *o) {}

    /**
     * @brief Adds a given Object to the given index of the Array
     * 
     * @note Pushes the elements at and after @param index down to the end by one index
     * 
     * @param o the Object to be added to this Array
     * @param index the index at which the given Object is to be added
     * @return true if the Object was added successfully
     * @return false if the Object was NOT added successfully
     */
    bool add(Object *o, size_t index) {}

    /**
     * @brief Adds all Objects from a given Array to the end of this Array
     * 
     * @param a the Array whose Objects will be added to this Array
     * @return true if ALL the Objects in the given Array were added successfully
     * @return false if at least one of the Objects in the given Array were NOT added successfully
     */
    bool addAll(Array *a) {}

    /**
     * @brief Adds all Objects from a given Array at the given index in this Array, if the Objects in that Array are of the same type
     * as the Objects in this Array 
     * 
     * @note Pushes the elements at and after @param index down to the end by one index
     * 
     * @param a the Array whose Objects will be added to this Array
     * @param index the index at which the Objects in the given Array are to be added
     * @return true if all the Objects in the given Array were added successfully
     * @return false if at least one of the Objects in the given Array were NOT added successfully
     */
    bool addAll(Array *a, size_t index) {}

    /**
     * @brief Removes all Objects from this Array
     */
    void clear() {}

    /**
     * @brief Checks that the given Object is equal to this Array, meaning the given Object is an Array, and that
     * Array has the same number of Objects as this Array and those Objects are equivalent to the Objects in this
     * Array and are in the same order as this Array
     * 
     * @param o the Object to be checked for equality
     * @return true if:
     *      1. The given Object is an Array
     *      2. That Array has the same number of Objects as this Array
     *      3. All the Objects in the given Array are the same as the ones in this Array, and
     *      4. Are in the same order as the Objects in this Array
     * @return false if any of the above conditions are not satisfied
     */
    bool equals(Object *o) {}

    /**
     * @brief Gets the Object at the given index of this Array
     * 
     * @param index the index in this Array from which to get the Object
     * @return Object* the Object at the given index in this Array
     */
    Object *get(size_t index) {}

    /**
     * @brief Calculates the hashcode for this Array
     * 
     * @return size_t the hashcode for this Array
     */
    size_t hash() {}

    /**
     * @brief Gets the index of this Array containing the first instance of an Object that is equals()
     *  to the given Object. If the given Object is not equals() to any other Objects in this Array, returns -1
     * 
     * @param o the Object to be compared for equality to Objects in this Array
     * @return int the index in this Array at which an Object that is equals() to the given Object exists, 
     * or -1 if such an Object does not exist in this Array
     */
    int indexOf(Object *o) {}

    /**
     * @brief Removes the Object at the given index in this Array and returns it.
     * 
     * @note Pulls the elements at and after @param index up to the front by one index
     * 
     * @param index the index in this Array at which to remove the Object
     * @return Object* the removed Object
     */
    Object *remove(size_t index) {}

    /**
     * @brief Sets the pointer at the given index in this Array to the given Object, and returns the reset Object
     * 
     * @param o the Object to be set at the given index in this Array
     * @param index the index at which to set the given Object, and remove the old Object
     * @return Object* the Object that was replaced in this Array. If there was no Object at the given index,
     * returns nullptr
     */
    Object *set(Object *o, size_t index) {}

    /**
     * @brief Gets the number of elements in this Array
     * 
     * @return size_t the number of elements in this Array
     */
    size_t size() {}
};

/**
 * @brief StrArray class. Represents a list of String Objects.
 */
class StrArray : public Object
{
public:
    /**
    * @brief Construct a new Str Array object
    * 
    */
    StrArray() : Object() {}

    /**
     * @brief Destroy the Str Array object
     * 
     */
    ~StrArray() {}

    /**
     * @brief Adds a given String to the end of the StrArray
     * 
     * @param s the String to be added to this StrArray
     * @return true if the String was added successfully
     * @return false if the String was NOT added successfully
     */
    bool add(String *s) {}

    /**
     * @brief Adds a given String to the given index of the StrArray
     * 
     * @note Pushes the elements at and after @param index down to the end by one index
     * 
     * @param s the String to be added to this StrArray
     * @param index the index at which the given String is to be added
     * @return true if the String was added successfully
     * @return false if the String was NOT added successfully
     */
    bool add(String *s, size_t index) {}

    /**
     * @brief Adds all Strings from a given Array to the end of this StrArray
     * 
     * @param a the StrArray whose Strings will be added to this StrArray
     * @return true if all the Strings in the given StrArray were added successfully
     * @return false if at least one of the Strings in the given StrArray were NOT added successfully
     */
    bool addAll(StrArray *a) {}

    /**
     * @brief Adds all Strings from a given StrArray at the given index in this StrArray
     * 
     * @note Pushes the elements at and after @param index down to the end by one index
     * 
     * @param a the StrArray whose Strings will be added to this StrArray
     * @param index the index at which the Strings in the given StrArray are to be added
     * @return true if all the Strings in the given StrArray were added successfully
     * @return false if at least one of the Strings in the given StrArray were NOT added successfully
     */
    bool addAll(StrArray *a, size_t index) {}

    /**
     * @brief Removes all Strings from this StrArray
     * 
     */
    void clear() {}

    /**
     * @brief Checks that the given Object is equal to this StrArray, meaning the given Object is a StrArray, and that
     * StrArray has the same number of Strings as this StrArray and those Strings are equivalent to the Strings in this
     * StrArray and are in the same order as this StrArray
     * 
     * @param o the Object to be checked for equality
     * @return true if:
     *      1. The given Object is a StrArray
     *      2. That StrArray has the same number of Strings as this StrArray
     *      3. All the Strings in the given StrArray are the same as the ones in this StrArray, and
     *      4. Are in the same order as the Strings in this StrArray
     * @return false if any of the above conditions are not satisfied
     */
    bool equals(Object *o) {}

    /**
     * @brief Gets the String at the given index of this StrArray
     * 
     * @param index the index in this StrArray from which to get the String
     * @return String* the String at the given index in this StrArray
     */
    String *get(size_t index) {}

    /**
     * @brief Calculates the hashcode for this StrArray
     * 
     * @return size_t the hashcode for this StrArray
     */
    size_t hash() {}

    /**
     * @brief Gets the index of this StrArray containing the first instance of a String that is equals()
     *  to the given String. If the given String is not equals() to any other Strings in this StrArray, returns -1
     * 
     * @param s the String to be compared for equality to Strings in this StrArray
     * @return int the index in this StrArray at which an String that is equals() to the given String exists, 
     * or -1 if such an String does not exist in this Array
     */
    int indexOf(String *s) {}

    /**
     * @brief Removes the String at the given index in this StrArray and returns it.
     * 
     * @note Pulls the elements at and after @param index up to the front by one index
     * 
     * @param index the index in this StrArray at which to remove the String
     * @return String* the removed String
     */
    String *remove(size_t index) {}

    /**
     * @brief Sets the String at the given index in this StrArray to the given String, and returns the reset String
     * 
     * @param s the String to be set at the given index in this StrArray
     * @param index the index at which to set the given String, and remove the old String
     * @return String* the String that was replaced in this StrArray. If there was no String at the given index,
     * returns nullptr
     */
    String *set(String *s, size_t index) {}

    /**
     * @brief Gets the number of elements of this StrArray
     * 
     * @return size_t the number of elements in this StrArray
     */
    size_t size() {}
};

/**
 * @brief FloatArray class. Represents a list of floats.
 */
class FloatArray : public Object
{
public:
    /**
     * @brief Construct a new Float Array object
     * 
     */
    FloatArray() : Object() {}

    /**
     * @brief Destroy the Float Array object
     * 
     */
    ~FloatArray() {}

    /**
     * @brief Adds a given float to the end of the FloatArray
     * 
     * @param f the float to be added to this FloatArray
     * @return true if the float was added successfully
     * @return false if the float was NOT added successfully
     */
    bool add(float f) {}

    /**
     * @brief Adds a given float to the given index of the FloatArray
     * 
     * @note Pushes the elements at and after @param index down to the end by one index
     * 
     * @param o the float to be added to this FloatArray
     * @param index the index at which the given float is to be added
     * @return true if the float was added successfully
     * @return false if the float was NOT added successfully
     */
    bool add(float f, size_t index) {}

    /**
     * @brief Adds all floats from a given FloatArray to the end of this FloatArray, if the floats in that Array are of the same type
     * as the floats in this Array
     * 
     * @param a the FloatArray whose floats will be added to this FloatArray
     * @return true if all the floats in the given FloatArray were added successfully
     * @return false if at least one of the floats in the given FloatArray were NOT added successfully
     */
    bool addAll(FloatArray *a) {}

    /**
     * @brief Adds all floats from a given FloatArray at the given index in this FloatArray, if the floats in that FloatArray are of the same type
     * as the floats in this Array 
     * 
     * @note Pushes the elements at and after @param index down to the end by one index
     * 
     * @param a the FloatArray whose floats will be added to this FloatArray
     * @param index the index at which the floats in the given FloatArray are to be added
     * @return true if all the floats in the given FloatArray were added successfully
     * @return false if at least one of the floats in the given FloatArray were NOT added successfully
     */
    bool addAll(FloatArray *a, size_t index) {}

    /**
     * @brief Removes all floats from this Array
     * 
     */
    void clear() {}

    /**
     * @brief Checks that the given Object is equal to this FloatArray, meaning the given Object is an FloatArray, and that
     * FloatArray has the same number of floats as this FloatArray and those floats are equivalent to the floats in this
     * FloatArray and are in the same order as this FloatArray
     * 
     * @param o the Object to be checked for equality
     * @return true if:
     *      1. The given Object is a FloatArray
     *      2. That FloatArray has the same number of floats as this FloatArray
     *      3. All the floats in the given FloatArray are the same as the ones in this FloatArray, and
     *      4. Are in the same order as the floats in this FloatArray
     * @return false if any of the above conditions are not satisfied
     */
    bool equals(Object *o) {}

    /**
     * @brief Gets the float at the given index of this FloatArray
     * 
     * @param index the index in this FloatArray from which to get the float
     * @return float the float at the given index in this FloatArray
     */
    float get(size_t index) {}

    /**
     * @brief Calculates the hashcode for this FloatArray
     * 
     * @return size_t the hashcode for this FloatArray
     */
    size_t hash() {}

    /**
     * @brief Gets the index of this FloatArray containing the first instance of a float that is equal
     *  to the given float. If the given float is not equal to any other floats in this FloatArray, returns -1
     * 
     * @param o the Float to be compared for equality to floats in this Array
     * @return int the index in this FloatArray at which a float that is equal to the given float exists, 
     * or -1 if such a float does not exist in this Array
     */
    int indexOf(float f) {}

    /**
     * @brief Removes the float at the given index in this FloatArray and returns it.
     * 
     * @note Pulls the elements at and after @param index up to the front by one index
     * 
     * @param index the index in this FloatArray at which to remove the float
     * @return float the removed float
     */
    float remove(size_t index) {}

    /**
     * @brief Sets the float at the given index in this FloatArray to the given float, and returns the reset float
     * 
     * @param o the float to be set at the given index in this FloatArray
     * @param index the index at which to set the given float, and remove the old float
     * @return float the float that was replaced in this FloatArray. If there is no float at the given index,
     * returns NULL
     */
    float set(float f, size_t index) {}

    /**
     * @brief Gets the number of elements in this FloatArray
     * 
     * @return size_t the number of elements in this FloatArray
     */
    size_t size() {}
};

/**
 * @brief IntArray class. Represents a list of ints.
 */
class IntArray : public Object
{
public:
    /**
     * @brief Construct a new Int Array object
     * 
     */
    IntArray() : Object() {}

    /**
     * @brief Destroy the Int Array object
     * 
     */
    ~IntArray() {}

    /**
     * @brief Adds a given int to the end of the IntArray 
     * 
     * @param i the int to be added to this IntArray
     * @return true if the int was added successfully
     * @return false if the int was NOT added successfully
     */
    bool add(int i) {}

    /**
     * @brief Adds a given int to the given index of the IntArray
     * 
     * @note Pushes the elements at and after @param index down to the end by one index
     * 
     * @param o the int to be added to this IntArray
     * @param index the index at which the given int is to be added
     * @return true if the int was added successfully
     * @return false if the int was NOT added successfully
     */
    bool add(int i, size_t index) {}

    /**
     * @brief Adds all Strings from a given Array to the end of this IntArray
     * 
     * @param a the IntArray whose ints will be added to this IntArray
     * @return true if all the ints in the given IntArray were added successfully
     * @return false if at least one of the ints in the given IntArray were NOT added successfully
     */
    bool addAll(IntArray *a) {}

    /**
     * @brief Adds all ints from a given IntArray at the given index in this IntArray, if the ints in that IntArray are of the same type
     * as the ints in this IntArray 
     * 
     * @note Pushes the elements at and after @param index down to the end by one index
     * 
     * @param a the IntArray whose ints will be added to this IntArray
     * @param index the index at which the ints in the given IntArray are to be added
     * @return true if all the ints in the given IntArray were added successfully
     * @return false if at least one of the ints in the given IntArray were NOT added successfully
     */
    bool addAll(IntArray *a, size_t index) {}

    /**
     * @brief Removes all ints from this Array
     * 
     */
    void clear() {}

    /**
     * @brief Checks that the given Object is equal to this IntArray, meaning the given Object is an IntArray, and that
     * IntArray has the same number of ints as this IntArray and those ints are equivalent to the ints in this
     * IntArray and are in the same order as this IntArray
     * 
     * @param o the Object to be checked for equality
     * @return true if:
     *      1. The given Object is an IntArray
     *      2. That IntArray has the same number of ints as this IntArray
     *      3. All the ints in the given IntArray are the same as the ones in this IntArray, and
     *      4. Are in the same order as the ints in this IntArray
     * @return false if any of the above conditions are not satisfied
     */
    bool equals(Object *o) {}

    /**
     * @brief Gets the int at the given index of this IntArray
     * 
     * @param index the index in this IntArray from which to get the int
     * @return int the int at the given index in this IntArray
     */
    int get(size_t index) {}

    /**
     * @brief Calculates the hashcode for this IntArray
     * 
     * @return size_t the hashcode for this IntArray
     */
    size_t hash() {}

    /**
     * @brief Gets the index of this IntArray containing the first instance of an int that is equal
     *  to the given int. If the given int is not equal to any other int in this IntArray, returns -1
     * 
     * @param i the int to be compared for equality to ints in this IntArray
     * @return int the index in this IntArray at which an int that is equal to the given int exists, 
     * or -1 if such an int does not exist in this IntArray
     */
    int indexOf(int i) {}

    /**
     * @brief Removes the int at the given index in this IntArray and returns it.
     * 
     * @note Pulls the elements at and after @param index up to the front by one index
     * 
     * @param index the index in this IntArray at which to remove the int
     * @return int the removed int
     */
    int remove(size_t index) {}

    /**
     * @brief Sets the pointer at the given index in this IntArray to the given int, and returns the reset int
     * 
     * @param i the int to be set at the given index in this IntArray
     * @param index the index at which to set the given int, and remove the old int
     * @return int the int that was replaced in this IntArray. If there was no int at the given index,
     * returns NULL
     */
    int set(int i, size_t index) {}

    /**
     * @brief Gets the number of elements in this IntArray
     * 
     * @return size_t the number of elements in this IntArray
     */
    size_t size() {}
};

/**
 * @brief BoolArray class. Represents a list of bool.
 */
class BoolArray : public Object
{
public:
    /**
     * @brief Construct a new Bool Array object
     * 
     */
    BoolArray() : Object() {}

    /**
     * @brief Destroy the Bool Array object
     * 
     */
    ~BoolArray() {}

    /**
     * @brief Adds a given bool to the end of the BoolArray
     * 
     * @param b the bool to be added to this BoolArray
     * @return true if the bool was added successfully
     * @return false if the bool was NOT added successfully
     */
    bool add(bool b) {}

    /**
     * @brief Adds a given bool to the given index of the BoolArray
     * 
     * @note Pushes the elements at and after @param index down to the end by one index
     * 
     * @param b the bool to be added to this BoolArray
     * @param index the index at which the given bool is to be added
     * @return true if the bool was added successfully
     * @return false if the bool was NOT added successfully
     */
    bool add(bool b, size_t index) {}

    /**
     * @brief Adds all bools from a given BoolArray to the end of this BoolArray
     * 
     * @param a the BoolArray whose bools will be added to this BoolArray
     * @return true if all the bools in the given BoolArray were added successfully
     * @return false if at least one of the bools in the given BoolArray were NOT added successfully
     */
    bool addAll(BoolArray *a) {}

    /**
     * @brief Adds all bools from a given BoolArray at the given index in this BoolArray
     * 
     * @note Pushes the elements at and after @param index down to the end by one index
     * 
     * @param a the BoolArray whose bools will be added to this BoolArray
     * @param index the index at which the bools in the given BoolArray are to be added
     * @return true if all the bools in the given BoolArray were added successfully
     * @return false if at least one of the bools in the given BoolArray were NOT added successfully
     */
    bool addAll(BoolArray *a, size_t index) {}

    /**
     * @brief Removes all bools from this BoolArray
     * 
     */
    void clear() {}

    /**
     * @brief Checks that the given Object is equal to this BoolArray, meaning the given Object is a BoolArray, and that
     * BoolArray has the same number of bools as this BoolArray and those bools are equivalent to the bools in this
     * BoolArray and are in the same order as this BoolArray
     * 
     * @param o the Object to be checked for equality
     * @return true if:
     *      1. The given Object is a BoolArray
     *      2. That BoolArray has the same number of bools as this BoolArray
     *      3. All the bools in the given BoolArray are the same as the ones in this BoolArray, and
     *      4. Are in the same order as the bools in this BoolArray
     * @return false if any of the above conditions are not satisfied
     */
    bool equals(Object *o) {}

    /**
     * @brief Gets the bool at the given index of this BoolArray
     * 
     * @param index the index in this BoolArray from which to get the bool
     * @return bool the bool at the given index in this BoolArray
     */
    bool get(size_t index) {}

    /**
     * @brief Calculates the hashcode for this BoolArray
     * 
     * @return size_t the hashcode for this BoolArray
     */
    size_t hash() {}

    /**
     * @brief Gets the index of this BoolArray containing the first instance of a bool that is equal
     *  to the given bool. If the given bool is not equal to any other bools in this BoolArray, returns -1
     * 
     * @param b the bool to be compared for equality to bools in this BoolArray
     * @return int the index in this BoolArray at which a bool that is equal to the given bool exists, 
     * or -1 if such a bool does not exist in this BoolArray
     */
    int indexOf(bool b) {}

    /**
     * @brief Removes the bool at the given index in this BoolArray and returns it.
     * 
     * @note Pulls the elements at and after @param index up to the front by one index
     * 
     * @param index the index in this BoolArray at which to remove the bool
     * @return bool the removed bool
     */
    bool remove(size_t index) {}

    /**
     * @brief Sets the bool at the given index in this BoolArray to the given bool, and returns the reset bool
     * 
     * @param b the bool to be set at the given index in this BoolArray
     * @param index the index at which to set the given bool, and remove the old bool
     * @return bool the bool that was replaced in this BoolArray. If there was no bool at the given index,
     * returns NULL
     */
    bool set(bool b, size_t index) {}

    /**
     * @brief Gets the number of elements in this BoolArray
     * 
     * @return size_t the number of elements in this BoolArray
     */
    size_t size() {}
};