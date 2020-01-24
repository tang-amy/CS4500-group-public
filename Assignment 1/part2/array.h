// lang::CwC

#pragma once

#include "object.h"

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
     * @brief Copies this Array by initializing a new Array and copying all the elements from this Array
     * into a new Array
     * 
     * @return Object* a copy of this Array
     */
    Object *clone() {}

    /**
     * @brief Checks if this Array contains the given Object
     * 
     * @param o the Object to check for equality to at least one Object contained in this Array
     * @return true if the given Object is equals() to at least one Object contained in this Array
     * @return false if the given Object is NOT equals() to ANY Objects contained in this Array
     */
    bool contains(Object *o) {}

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
     * @brief Checks if this Array has no Objects
     * 
     * @return true if this Array has no Objects
     * @return false if this Array has at least one Object
     */
    bool isEmpty() {}

    /**
     * @brief Returns the index of the last occurance of an Object in this Array that equals() 
     * the given Object if such an Object exists in this Array. Otherwise, returns -1
     * 
     * @param o the Object to be checked for equality to all Objects in this Array
     * @return int the index of an Object in this Array that equals() the given Object, 
     * or -1 if such an Object does not exist
     */
    int lastIndexOf(Object *o) {}

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
     * @brief Removes the first instance of the Object in this Array that equals() the given 
     * Object, if such an Object exists in this Array
     * 
     * @note Pulls the elements at and after the index at which the equivalent Object in this Array
     * to the given Object exists up to the front by one index
     * 
     * @param o the Object to be compared to all other Objects in this Array for equality
     * @return true if Object o is removed successfully
     * @return false if Object o is NOT removed successfully
     */
    bool remove(Object *o) {}

    /**
     * @brief Removes the first instance of each Object in this Array that equals() an Object 
     * in the given Array, if all such Objects exist in this Array
     * 
     * @note Pulls the elements at and after the index at which each equivalent Object in this Array
     * to each of the Objects in the given Array exist up to the front by one index as each Object in
     * this Array is removed
     * 
     * @param a the Array whose Objects will be compared to all Objects in this Array for equality
     * @return true if all Objects in the given Array have an equivalent Object in this Array and 
     * these equivalent Objects are all removed from this Array successfully
     * @return false if NOT all Objects in the given Array have an equivalent Object in this Array,
     * OR NOT all the equivalent Objects in this Array are removed successfully
     */
    bool removeAll(Array *a) {}

    /**
     * @brief 
     * 
     * @param fromIndex 
     * @param toIndex 
     * @return Array*
     */
    Array *removeRange(size_t fromIndex, size_t toIndex) {}

    /**
     * @brief 
     * 
     * @param size 
     */
    void resize(size_t size) {}

    /**
     * @brief 
     * 
     * @param a 
     * @return true 
     * @return false 
     */
    bool retainAll(Array *a) {}

    /**
     * @brief 
     * 
     * @param o 
     * @param index 
     * @return Object* 
     */
    Object *set(Object *o, size_t index) {}

    /**
     * @brief return the 
     * 
     * @return size_t 
     */
    size_t size() {}

    /**
     * @brief 
     * 
     * @param beginIndex 
     * @param endIndex 
     * @return Array* 
     */
    Array *subset(size_t beginIndex, size_t endIndex) {}

    /**
     * @brief 
     * 
     */
    void trimToSize() {}

    /**
     * @brief returns true or false if this array is the same as the object
     * two arrays are considered equal if every element at each index in both arrays are the same/equal
     * 
     * @param o 
     * @return true 
     * @return false 
     */
    bool equals(Object o) {}

    /**
     * @brief copy the array from fromIndex to toIndex (not including toIndex) 
     * and return a new instance containing just that subsection of the array
     * 
     * @param fromIndex 
     * @param toIndex 
     * @return Array 
     */
    Array subArray(size_t fromIndex, size_t toIndex) {}
};