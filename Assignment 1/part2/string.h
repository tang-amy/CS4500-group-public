//lang::CwC

#pragma once

#include "object.h"

/**
 * @brief String class. Represents a sequence of characters.
 * 
 * @note Included functions inspired by methods described in the the Java 7 String class:
 * https://docs.oracle.com/javase/7/docs/api/java/lang/String.html 
 */
class String : public Object
{
    /**
     * @brief returns the char at the given index
     * 
     * @param index the index at which to get the char
     * @return char the char at the given index of the String
     */
    char charAt(int index) {}

    /**
     * @brief Compares this string to the given string alphabetically.
     * 
     * @param other the given String to compare to this
     * @return int the difference in ASCII values of the first differing chars in the two strings.
     * < 0 if the given string is earlier alphabetically, 0 if the strings are the same, 
     * >1 if the given string is later alphabetically than this string.
     */
    int compareTo(String *other) {}

    /**
     * @brief Compares this string to the given string alphabetically, ignore differences in case 
     * (i.e. uppercase vs lowercase) between the two
     * 
     * @param other  the given String to compare to this
     * @return int the difference in ASCII values of the first differing chars in the two string, ignoring
     * differences in case between them. 
     * < 0 if the given string is earlier alphabetically, 0 if the strings are the same, 
     * >1 if the given string is later alphabetically than this string.
     */
    int compareToIgnoreCase(String *other) {}

    /**
     * @brief Concatenates the given String to the end of this String
     * 
     * @param other the given String to be concatenated to the end of this one
     * @return String* a String representing the concatenation of the given @param other String
     * to the end of this String
     */
    String *concat(String *other) {}

    /**
     * @brief Checks if this String contains the unbroken sequence of the given String
     * 
     * @param other the String to be checked for presence in this String
     * @return true if the given String is contained in this String
     * @return false if the given String is NOT contained in this String
     */
    bool contains(String *other) {}

    /**
     * @brief Checks if this String ends with the unbroken sequence of the given String
     * 
     * @param other the String to be checked for presence as the last sequence of this String
     * @return true if this String ends with the given String
     * @return false if this String does NOT end with the given String
     */
    bool endsWith(String *other) {}

    /**
     * @brief Checks if this String and the given String have the same character sequence
     * 
     * @param other the String to be compared to this String for equality
     * @return true if both this String and the given @param other String have the same character sequence
     * @return false if this String and the given @param other String have different character sequences
     */
    bool equals(Object *other) {}

    /**
     * @brief Checks if this String and the given String have the same character sequence, ignoring differences in case (i.e. uppercase vs lowercase)
     * 
     * @param other the String to be compared to this String for equality
     * @return true if both this String and the given @param other String have the same character sequence, ignoring differences in case
     * @return false if both this String and the given @param other String have difference character sequence, despite ignoring differences in case
     */
    bool equalsIgnoreCase(String *other) {}

    /**
     * @brief Calculates the hashcode for this String
     * 
     * @return size_t the hashcode for this String
     */
    size_t hash_me() {}

    /**
     * @brief Gets the index of the first occurance of the given char in this String
     * 
     * @param c the char to be searched for in this String
     * @return int the index of the first occurance of the given char in this String, or -1
     * if the given @param c char does not exist in this String
     */
    int indexOf(char c) {}

    /**
     * @brief Gets the index of the first occurance of the given char in this String, starting from the given index
     * (i.e. excluding all indices strictly before the given index)
     * 
     * @param c the char to be searched for in this String
     * @param fromIndex the (inclusive) index to start the search at 
     * @return int the index of the first occurance of the given char in this String, or -1
     * if the given @param c char does not exist in this String at or after the given @param fromIndex
     */
    int indexOf(char c, size_t fromIndex) {}

    /**
     * @brief Gets the index of the first occurance of the unbroken sequence of the given String in this String
     * 
     * @param other the String to be searched for in this String
     * @return int the index of the first occurance of the given String in this String, or -1
     * if the given @param other String does not exist in this String
     */
    int indexOf(String *other) {}

    /**
     * @brief Gets the index of the first occurance of the unbroken sequence of the given String in this String,
     * starting from the given index (i.e. excluding all indices strictly before the given index)
     * 
     * @param other the String to be searched for in this String
     * @param fromIndex the (inclusive) index to start the search at
     * @return int the index of the first occurance of the given String in this String, or -1
     * if the given @param other String does not exist in this String at or after the given @param fromIndex
     */
    int indexOf(String *other, size_t fromIndex) {}

    /**
     * @brief Checks if this String contains no characters, i.e. if this String is an empty String ("")
     * 
     * @return true if this String contains no characters
     * @return false if this String contains at least 1 character
     */
    bool isEmpty() {}

    /**
     * @brief Gets the index of the last occurance of the given char in this String
     * 
     * @param c the char to be searched for in this String
     * @return int the index of the last occurance of the given char in this String, or -1
     * if the given @param c char does not exist in this String
     */
    int lastIndexOf(char c) {}

    /**
     * @brief Gets the index of the last occurance of the given char in this String, starting backwards
     * from the given index (i.e. excluding all indices strictly after the given index)
     * 
     * @param c the char to be searched for in this String
     * @param fromIndex the (inclusive) index to start the (reverse) search at 
     * @return int the index of the last occurance of the given char in this String, or -1
     * if the given @param c char does not exist in this String at or before the given @param fromIndex
     */
    int indexOf(char c, size_t fromIndex) {}

    /**
     * @brief Gets the index of the last occurance of the unbroken sequence of the given String in this String
     * 
     * @param other the String to be searched for in this String
     * @return int the index of the last occurance of the given String in this String, or -1
     * if the given @param other String does not exist in this String
     */
    int lastIndexOf(String *other) {}

    /**
     * @brief Gets the index of the last occurance of the unbroken sequence of the given String in this String,
     * starting backwards from the given index (i.e. excluding all indices strictly after the given index)
     * 
     * @param other the String to be searched for in this String
     * @param fromIndex the (inclusive) index to start the (reverse) search at
     * @return int the index of the last occurance of the given String in this String, or -1
     * if the given @param other String does not exist in this String at or before the given @param fromIndex
     */
    int lastIndexOf(String *other, size_t fromIndex) {}

    /**
     * @brief Gets the length of this String (i.e. the number of characters in this String)
     * 
     * @return size_t the number of characters in this String
     */
    size_t length() {}

    /**
     * @brief Checks that a region of this String is equal to a region of another String
     * 
     * @param ignoreCase if true, then ignore case differences between the two regions (i.e. uppercase vs lowercase). if false, consider
     * the differences in case when comparing the two regions in this String and the given String
     * @param thisOffSet the index in this String at which to start comparing
     * @param other the given String whose region to compare to this one
     * @param otherOffSet the index in the given @param other String at which to start comparing
     * @param len the length of the region to compare (same length in both this String and the given String)
     * @return true if the regions in both Strings have the same character sequence (ignoring case if @param ignoreCase is true)
     * @return false if the regions in both Strings have different character sequences (regardless of case if @param ignoreCase is true)
     */
    bool regionMatches(bool ignoreCase, size_t thisOffSet, String *other, size_t otherOffSet, size_t len) {}

    /**
     * @brief Checks that a region of this String is equal to a region of another String
     * 
     * * @param thisOffSet the index in this String at which to start comparing
     * @param other the given String whose region to compare to this one
     * @param otherOffSet the index in the given @param other String at which to start comparing
     * @param len the length of the region to compare (same length in both this String and the given String)
     * @return true if the regions in both Strings have the same character sequence
     * @return false if the regions in both Strings have different character sequences
     */
    bool regionMatches(size_t thisOffSet, String *other, size_t otherOffSet, size_t len) {}

    /**
     * @brief Gets a new String with all occurances of one character in this String replaced with the given character
     * 
     * @param oldChar the char in this String to be replaced
     * @param newChar the char to replace @param oldChar occurances in this String with
     * @return String* the String with all the replacements completed
     */
    String *replace(char oldChar, char newChar) {}

    /**
     * @brief Gets a new String with all occurances of one String subset (character sequence) 
     * in this String replaced with the given String subset
     * 
     * @param oldString the String in this String to be replaced
     * @param newString the String to replace @param oldString occurances in this String with
     * @return String* the String with all the replacements completed
     */
    String *replace(String *oldString, String *newString) {}

    /**
     * @brief Gets a new String with the first occurance of one character in this String replaced with the given character
     * 
     * @param oldChar the char in this String to be replaced
     * @param newChar the char to replace the first occurance of @param oldChar in this String with
     * @return String* the String with the replacement completed
     */
    String *replaceFirst(char oldChar, char newChar) {}

    /**
     * @brief Gets a new String with the first occurance of one String subset (character sequence) 
     * in this String replaced with the given String subset
     * 
     * @param oldString the String in this String to be replaced
     * @param newString the String to replace the first occurance of @param oldString in this String with
     * @return String* the String with the replacement completed
     */
    String *replaceFirst(String *oldString, String *newString) {}

    /**
     * @brief Splits this String by removing the given splitter character and putting the subset of 
     * this String before and after the splitter in an array of Strings
     * 
     * @param splitter the char at which to split this String
     * @return String** the array of Strings containing the split subsets of this String
     */
    String **split(char splitter) {}

    /**
     * @brief Splits this String by removing the given splitter String and putting the subset of 
     * this String before and after the splitter in an array of Strings
     * 
     * @param splitter the String at which to split this String
     * @return String** the array of Strings containing the split subsets of this String
     */
    String **split(String *splitter) {}

    /**
     * @brief Splits this String by removing the given splitter character and putting the subset of 
     * this String before and after the splitter in an array of Strings a limited number of times
     * 
     * @param splitter the char at which to split this String
     * @param limit the number of times to perform the splitting operation
     * @return String** the array of Strings containing the split subsets of this String
     */
    String **split(char splitter, size_t limit) {}

    /**
     * @brief Splits this String by removing the given splitter String and putting the subset of 
     * this String before and after the splitter in an array of Strings a limited number of times
     * 
     * @param splitter the String at which to split this String
     * @param limit the number of times to perform the splitting operation
     * @return String** the array of Strings containing the split subsets of this String
     */
    String **split(String *splitter, size_t limit) {}

    /**
     * @brief Checks if this String starts with the unbroken sequence of the given String
     * 
     * @param other the String to be checked for presence as the first sequence of this String
     * @return true if this String starts with the given String
     * @return false if this String does NOT start with the given String
     */
    bool startsWith(String *other) {}

    /**
     * @brief Checks if this String starts with the unbroken sequence of the given String, starting
     * at the given index
     * 
     * @param other the String to be checked for presence as the first sequence of this String
     * @param offset the index in this String at which to start checking for the presence of the given String
     * @return true if this String starts with the given String at the given index
     * @return false if this String does NOT start with the given String at the given index
     */
    bool startsWith(String *other, size_t offset) {}

    /**
     * @brief 
     * 
     * @param beginIndex 
     * @param endIndex 
     * @return String* 
     */
    String *subSequence(size_t beginIndex, size_t endIndex) {}

    /**
     * @brief 
     * 
     * @return size_t 
     */
    size_t length()
    {
    }

    size_t hash_me()
    {
        size_t res = 0;
        for (int i = 0; i < size_; i++)
        {
            res += str_[i];
        }
        return res;
    }

    // returns what to print
    const char *print()
    {
        return str_;
    }

    // appends ONE character to the String
    void append(char other)
    {
        // store the current contents in another array
        char *new_str = new char[size_ + 2];
        strcpy(new_str, str_);
        new_str[size_] = other;
        new_str[size_ + 1] = '\0';

        delete[] str_;
        str_ = new_str;

        // update the size of the current string
        size_++;
    }

    size_t size()
    {
        return size_;
    }
};