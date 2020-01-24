//lang::CwC

#pragma once

#include "object.h"
#include <string.h>

/**
 * @brief String class. _Some of_ this code/functions were produced by following along with Prof. Vesely in class on Friday, January 10th, 2019.
 * The rest is original -- including concat(), print(), and compareTo(). 
 */
class String : public Object
{
public:
    /**
     * @brief returns the how many chars are in the string
     * 
     * @return size_t 
     */
    size_t length()
    {
    }

    /**
     * @brief calculates and returns the hash for the string
     * 
     * @return size_t 
     */
    size_t hash_me()
    {
    }

    /**
     * @brief checks if the string and the object are equal
     * two strings are considered equal if they contain all the same chars in the same order 
     * (i.e. "string" is equal to "string"
     * 
     * @param other 
     * @return true 
     * @return false 
     */
    bool equals(Object *other)
    {
    }

    /**
     * @brief concatenates (adds) other onto the end of the string and returns this result as a new string instance
     * 
     * @param other 
     * @return String* 
     */
    String *concat(String *other)
    {
    }

    /**
     * @brief returns what to print in format of const char*
     * 
     * @return const char* 
     */
    const char *print()
    {
    }

    /**
     * @brief Compares this string to the given string alphabetically.
     * 
     * @param other the given string to compare to this
     * @return int -1 if the given string is earlier alphabetically, 0 if the strings are the same, 1 if the given string is later alphabetically than this string.
     */
    int compareTo(String *other)
    {
    }
};