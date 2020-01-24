//lang::CwC

#pragma once // indicates that this file is to be included only once

#include <stdio.h>

/**
 * @brief Object class. _Some of_ this code/functions were produced by following along with Prof. Vesely in class on Friday, January 10th, 2019.
 * The rest is original -- including print(). 
 */
class Object
{
public:
    /**
     * @brief returns if two Objects are equal to each other defines equals as location of the objects
     * virtual is to indicate that this method may be overridden
     * 
     * @param other 
     * @return true 
     * @return false 
     */
    virtual bool equals(Object *other)
    {
    }

    /**
     * @brief returns the hash code value for this object
     * 
     * @return size_t 
     */
    size_t hash()
    {
    }

    /**
     * @brief calculates the hash code value 
     * virtual is to indicate that this method may be overridden
     * 
     * @return size_t 
     */
    virtual size_t hash_me()
    {
        return reinterpret_cast<size_t>(this);
    }

    /**
     * @brief returns what to print
     * virtual is to indicate that this method may be overridden
     * 
     * @return size_t 
     */
    virtual const char *print()
    {
    }
};