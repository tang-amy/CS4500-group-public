// lang::CwC

#pragma once

#include "object.h"
#include "helper.h"
#include "string.h"

/**
 * @brief Array class. Represents a list of any Object.
 * 
 * @note Included functions inspired by the methods described in the interface for the Java 8 ArrayList class:
 * https://docs.oracle.com/javase/8/docs/api/java/util/ArrayList.html
 */
class Array : public Object
{
    /**
     * @brief Adds a given Object to the end of the Array if that Object is of the same type as the rest of the Objects in the Array
     * 
     * @invariant All Objects in this Array are of the same type
     * 
     * @param o the Object to be added to this Array
     * @return true if the Object was added successfully
     * @return false if the Object was NOT added successfully
     */
    bool add(Object *o) {}

    /**
     * @brief Adds a given Object to the given index of the Array if that Object is of the same type as the rest of the Objects in the Array.
     * 
     * @note Pushes the elements at and after @param index down to the end by one index
     * 
     * @param o the Object to be added to this Array
     * @param index the index at which the given Object is to be added
     * @return true if the Object was added successfully
     * @return false if the Object was NOT added successfully
     */
    void add(Object *o, size_t index) {}

    /**
     * @brief Adds all Objects from a given Array to the end of this Array, if the Objects in that Array are of the same type
     * as the Objects in this Array
     * 
     * @param a the Array whose Objects will be added to this Array
     * @return true if all the Objects in the given Array were added successfully
     * @return false if at least one of the Objects in the given Array were NOT added successfully
     */
    void addAll(Array *a) {}

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
    void addAll(Array *a, size_t index) {}

    /**
     * @brief Removes all Objects from this Array
     * 
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
    size_t hash_me() {}

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
     * @brief Sets the Object at the given index in this Array to the given Object, and returns the reset Object
     * 
     * @param o the Object to be set at the given index in this Array
     * @param index the index at which to set the given Object, and remove the old Object
     * @return Object* the Object that was replaced in this Array; if invalid due to indexing error, will return NULL
     */
    Object *set(Object *o, size_t index) {}

    /**
     * @brief Gets the size (i.e. number of elements) of this Array
     * 
     * @return size_t the number of elements in this Array
     */
    size_t size() {}
};

/**
 * @brief Array class. Represents a list of any String.
 * 
 * @note Included functions inspired by the methods described in the interface for the Java 8 ArrayList class:
 * https://docs.oracle.com/javase/8/docs/api/java/util/ArrayList.html
 */
class StrArray : public Object
{
    /**
     * @brief Adds a given String to the end of the Array if that String is of the same type as the rest of the Strings in the Array
     * 
     * @invariant All Strings in this Array are of the same type
     * 
     * @param o the String to be added to this Array
     * @return true if the String was added successfully
     * @return false if the String was NOT added successfully
     */
    bool add(String *s) {}

    /**
     * @brief Adds a given Object to the given index of the Array if that Object is of the same type as the rest of the Objects in the Array.
     * 
     * @note Pushes the elements at and after @param index down to the end by one index
     * 
     * @param o the Object to be added to this Array
     * @param index the index at which the given Object is to be added
     * @return true if the Object was added successfully
     * @return false if the Object was NOT added successfully
     */
    void add(String *s, size_t index) {}

    /**
     * @brief Adds all Strings from a given Array to the end of this Array, if the Objects in that Array are of the same type
     * as the Strings in this Array
     * 
     * @param a the Array whose Objects will be added to this Array
     * @return true if all the Objects in the given Array were added successfully
     * @return false if at least one of the Objects in the given Array were NOT added successfully
     */
    void addAll(StrArray *a) {}

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
    void addAll(StrArray *a, size_t index) {}

    /**
     * @brief Removes all Objects from this Array
     * 
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
    String *get(size_t index) {}

    /**
     * @brief Calculates the hashcode for this Array
     * 
     * @return size_t the hashcode for this Array
     */
    size_t hash_me() {}

    /**
     * @brief Gets the index of this Array containing the first instance of an Object that is equals()
     *  to the given Object. If the given Object is not equals() to any other Objects in this Array, returns -1
     * 
     * @param o the Object to be compared for equality to Objects in this Array
     * @return int the index in this Array at which an Object that is equals() to the given Object exists, 
     * or -1 if such an Object does not exist in this Array
     */
    int indexOf(String *s) {}

    /**
     * @brief Removes the Object at the given index in this Array and returns it.
     * 
     * @note Pulls the elements at and after @param index up to the front by one index
     * 
     * @param index the index in this Array at which to remove the Object
     * @return Object* the removed Object
     */
    String *remove(size_t index) {}

    /**
     * @brief Sets the Object at the given index in this Array to the given Object, and returns the reset Object
     * 
     * @param o the Object to be set at the given index in this Array
     * @param index the index at which to set the given Object, and remove the old Object
     * @return Object* the Object that was replaced in this Array; if invalid due to indexing error, will return NULL
     */
    String *set(String *s, size_t index) {}

    /**
     * @brief Gets the size (i.e. number of elements) of this Array
     * 
     * @return size_t the number of elements in this Array
     */
    size_t size() {}
};

/**
 * @brief Array class. Represents a list of any String.
 * 
 * @note Included functions inspired by the methods described in the interface for the Java 8 ArrayList class:
 * https://docs.oracle.com/javase/8/docs/api/java/util/ArrayList.html
 */
class FloatArray : public Object
{
    /**
     * @brief Adds a given String to the end of the Array if that String is of the same type as the rest of the Strings in the Array
     * 
     * @invariant All Strings in this Array are of the same type
     * 
     * @param o the String to be added to this Array
     * @return true if the String was added successfully
     * @return false if the String was NOT added successfully
     */
    bool add(float f) {}

    /**
     * @brief Adds a given Object to the given index of the Array if that Object is of the same type as the rest of the Objects in the Array.
     * 
     * @note Pushes the elements at and after @param index down to the end by one index
     * 
     * @param o the Object to be added to this Array
     * @param index the index at which the given Object is to be added
     * @return true if the Object was added successfully
     * @return false if the Object was NOT added successfully
     */
    void add(float f, size_t index) {}

    /**
     * @brief Adds all Strings from a given Array to the end of this Array, if the Objects in that Array are of the same type
     * as the Strings in this Array
     * 
     * @param a the Array whose Objects will be added to this Array
     * @return true if all the Objects in the given Array were added successfully
     * @return false if at least one of the Objects in the given Array were NOT added successfully
     */
    void addAll(FloatArray *a) {}

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
    void addAll(FloatArray *a, size_t index) {}

    /**
     * @brief Removes all Objects from this Array
     * 
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
    float get(size_t index) {}

    /**
     * @brief Calculates the hashcode for this Array
     * 
     * @return size_t the hashcode for this Array
     */
    size_t hash_me() {}

    /**
     * @brief Gets the index of this Array containing the first instance of an Object that is equals()
     *  to the given Object. If the given Object is not equals() to any other Objects in this Array, returns -1
     * 
     * @param o the Object to be compared for equality to Objects in this Array
     * @return int the index in this Array at which an Object that is equals() to the given Object exists, 
     * or -1 if such an Object does not exist in this Array
     */
    int indexOf(float f) {}

    /**
     * @brief Removes the Object at the given index in this Array and returns it.
     * 
     * @note Pulls the elements at and after @param index up to the front by one index
     * 
     * @param index the index in this Array at which to remove the Object
     * @return Object* the removed Object
     */
    float remove(size_t index) {}

    /**
     * @brief Sets the Object at the given index in this Array to the given Object, and returns the reset Object
     * 
     * @param o the Object to be set at the given index in this Array
     * @param index the index at which to set the given Object, and remove the old Object
     * @return Object* the Object that was replaced in this Array; if invalid due to indexing error, will return NULL
     */
    float set(float f, size_t index) {}

    /**
     * @brief Gets the size (i.e. number of elements) of this Array
     * 
     * @return size_t the number of elements in this Array
     */
    size_t size() {}
};

/**
 * @brief Array class. Represents a list of any String.
 * 
 * @note Included functions inspired by the methods described in the interface for the Java 8 ArrayList class:
 * https://docs.oracle.com/javase/8/docs/api/java/util/ArrayList.html
 */
class IntArray : public Object
{
    /**
     * @brief Adds a given String to the end of the Array if that String is of the same type as the rest of the Strings in the Array
     * 
     * @invariant All Strings in this Array are of the same type
     * 
     * @param o the String to be added to this Array
     * @return true if the String was added successfully
     * @return false if the String was NOT added successfully
     */
    bool add(int i) {}

    /**
     * @brief Adds a given Object to the given index of the Array if that Object is of the same type as the rest of the Objects in the Array.
     * 
     * @note Pushes the elements at and after @param index down to the end by one index
     * 
     * @param o the Object to be added to this Array
     * @param index the index at which the given Object is to be added
     * @return true if the Object was added successfully
     * @return false if the Object was NOT added successfully
     */
    void add(int i, size_t index) {}

    /**
     * @brief Adds all Strings from a given Array to the end of this Array, if the Objects in that Array are of the same type
     * as the Strings in this Array
     * 
     * @param a the Array whose Objects will be added to this Array
     * @return true if all the Objects in the given Array were added successfully
     * @return false if at least one of the Objects in the given Array were NOT added successfully
     */
    void addAll(IntArray *a) {}

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
    void addAll(IntArray *a, size_t index) {}

    /**
     * @brief Removes all Objects from this Array
     * 
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
    int get(size_t index) {}

    /**
     * @brief Calculates the hashcode for this Array
     * 
     * @return size_t the hashcode for this Array
     */
    size_t hash_me() {}

    /**
     * @brief Gets the index of this Array containing the first instance of an Object that is equals()
     *  to the given Object. If the given Object is not equals() to any other Objects in this Array, returns -1
     * 
     * @param o the Object to be compared for equality to Objects in this Array
     * @return int the index in this Array at which an Object that is equals() to the given Object exists, 
     * or -1 if such an Object does not exist in this Array
     */
    int indexOf(int i) {}

    /**
     * @brief Removes the Object at the given index in this Array and returns it.
     * 
     * @note Pulls the elements at and after @param index up to the front by one index
     * 
     * @param index the index in this Array at which to remove the Object
     * @return Object* the removed Object
     */
    int remove(size_t index) {}

    /**
     * @brief Sets the Object at the given index in this Array to the given Object, and returns the reset Object
     * 
     * @param o the Object to be set at the given index in this Array
     * @param index the index at which to set the given Object, and remove the old Object
     * @return Object* the Object that was replaced in this Array; if invalid due to indexing error, will return NULL
     */
    int set(int i, size_t index) {}

    /**
     * @brief Gets the size (i.e. number of elements) of this Array
     * 
     * @return size_t the number of elements in this Array
     */
    size_t size() {}
};

/**
 * @brief Array class. Represents a list of any String.
 * 
 * @note Included functions inspired by the methods described in the interface for the Java 8 ArrayList class:
 * https://docs.oracle.com/javase/8/docs/api/java/util/ArrayList.html
 */
class BoolArray : public Object
{
    /**
     * @brief Adds a given String to the end of the Array if that String is of the same type as the rest of the Strings in the Array
     * 
     * @invariant All Strings in this Array are of the same type
     * 
     * @param o the String to be added to this Array
     * @return true if the String was added successfully
     * @return false if the String was NOT added successfully
     */
    bool add(bool b) {}

    /**
     * @brief Adds a given Object to the given index of the Array if that Object is of the same type as the rest of the Objects in the Array.
     * 
     * @note Pushes the elements at and after @param index down to the end by one index
     * 
     * @param o the Object to be added to this Array
     * @param index the index at which the given Object is to be added
     * @return true if the Object was added successfully
     * @return false if the Object was NOT added successfully
     */
    void add(bool b, size_t index) {}

    /**
     * @brief Adds all Strings from a given Array to the end of this Array, if the Objects in that Array are of the same type
     * as the Strings in this Array
     * 
     * @param a the Array whose Objects will be added to this Array
     * @return true if all the Objects in the given Array were added successfully
     * @return false if at least one of the Objects in the given Array were NOT added successfully
     */
    void addAll(BoolArray *a) {}

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
    void addAll(BoolArray *a, size_t index) {}

    /**
     * @brief Removes all Objects from this Array
     * 
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
    bool get(size_t index) {}

    /**
     * @brief Calculates the hashcode for this Array
     * 
     * @return size_t the hashcode for this Array
     */
    size_t hash_me() {}

    /**
     * @brief Gets the index of this Array containing the first instance of an Object that is equals()
     *  to the given Object. If the given Object is not equals() to any other Objects in this Array, returns -1
     * 
     * @param o the Object to be compared for equality to Objects in this Array
     * @return int the index in this Array at which an Object that is equals() to the given Object exists, 
     * or -1 if such an Object does not exist in this Array
     */
    int indexOf(bool b) {}

    /**
     * @brief Removes the Object at the given index in this Array and returns it.
     * 
     * @note Pulls the elements at and after @param index up to the front by one index
     * 
     * @param index the index in this Array at which to remove the Object
     * @return Object* the removed Object
     */
    bool remove(size_t index) {}

    /**
     * @brief Sets the Object at the given index in this Array to the given Object, and returns the reset Object
     * 
     * @param o the Object to be set at the given index in this Array
     * @param index the index at which to set the given Object, and remove the old Object
     * @return Object* the Object that was replaced in this Array; if invalid due to indexing error, will return NULL
     */
    bool set(bool b, size_t index) {}

    /**
     * @brief Gets the size (i.e. number of elements) of this Array
     * 
     * @return size_t the number of elements in this Array
     */
    size_t size() {}
};