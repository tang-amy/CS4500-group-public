// lang::CwC

#pragma once

#include "object.h"

/**
 * @brief Array class. This is somewhat based off of how ArrayLists are implemented 
 * in Java8 (https://docs.oracle.com/javase/8/docs/api/java/util/ArrayList.html)
 * except that this class does not have the functionality of a list. 
 * 
 */
class Array : public Object
{
    /**
     * @brief add the Object o (if it is the same type as the rest of the list) to the end of the array
     * 
     * @param o 
     * @return true 
     * @return false 
     */
    bool add(Object *o) {}

    /**
     * @brief add the Object o (if it is the same type as the rest of the list) to the given 
     * index of the array (pushes remaining elements down one array)
     * 
     * @param o 
     * @param index 
     */
    void add(Object *o, size_t index) {}

    /**
     * @brief add all elements from Array a to the end of this array
     * 
     * @param a 
     */
    void addAll(Array *a) {}

    /**
     * @brief add all elements from Array a to the given index in this array 
     * (pushes the rest elements down after where Array a's are inserted)
     * 
     * @param a 
     * @param index 
     */
    void addAll(Array *a, size_t index) {}

    /**
     * @brief clears all elements from the array
     * 
     */
    void clear() {}

    /**
     * @brief returns true or false if the object o is in the array
     * 
     * @param o 
     * @return true 
     * @return false 
     */
    bool contains(Object *o) {}

    /**
     * @brief get the size of the array (number of elements)
     * 
     * @param index 
     * @return Object 
     */
    Object get(size_t index) {}

    /**
     * @brief remove the element at index in the array 
     * (if index does not exist, then return an error)
     * 
     * @param index 
     */
    void remove(size_t index) {}

    /**
     * @brief removes the first instance of the Object o found in the array
     * 
     * @param o 
     * @return true if Object o is removed successfully
     * @return false if Object o is not in the array
     */
    bool remove(Object *o) {}

    /**
     * @brief remove a subset of the array specified by Array a 
     * if array a is a subset of this array, then remove that subset/subarray
     * 
     * @param a 
     * @return true 
     * @return false 
     */
    bool removeAll(Array a) {}

    /**
     * @brief 
     * 
     * @param fromIndex 
     * @param toIndex 
     * @return true 
     * @return false 
     */
    bool removeRange(size_t fromIndex, size_t toIndex) {}

    /**
     * @brief return the 
     * 
     * @return size_t 
     */
    size_t size() {}

    /**
     * @brief returns true or false if this array is the same as the object
     * two arrays are considered equal if every element at each index in both arrays are the same/equal
     * 
     * @param o 
     * @return true 
     * @return false 
     */
    virtual bool equals(Object o) {}

    /**
     * @brief returns true or false if the array contains no elements
     * 
     * @return true 
     * @return false 
     */
    bool isEmpty() {}

    /**
     * @brief returns the index of the first instance of Object o in the array if Object o exists
     * if Object o is not in the array, return -1
     * 
     * @param o 
     * @return size_t 
     */
    int indexOf(Object o) {}

    /**
     * @brief returns the index of the last instance of Object o in the array if Object o exists
     * if Object o is not in the array, return -1
     * 
     * @param o 
     * @return int 
     */
    int lastIndexOf(Object o) {}

    /**
     * @brief copy the entire array and returns a new instance of the array
     * 
     * @return Array 
     */
    Array copy() {}

    /**
     * @brief copy the array from fromIndex to toIndex (not including toIndex) 
     * and return a new instance containing just that subsection of the array
     * 
     * @param fromIndex 
     * @param toIndex 
     * @return Array 
     */
    Array subArray(size_t fromIndex, size_t toIndex) {}

    /**
     * @brief calculates and returns the hash for the array
     * 
     * @return size_t 
     */
    virtual size_t hash_me() {}
};