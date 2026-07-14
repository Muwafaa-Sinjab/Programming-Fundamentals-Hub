# 31 - Remove Elements

## Overview

This video explains how to remove elements from a vector. It focuses on the Stack behavior of vectors, demonstrates the methods used to remove single or all elements, and highlights the importance of checking for empty vectors to prevent program crashes.

## Main Topics

### Vector as a Stack

Vectors handle their data using a data structure concept known as a Stack. In a Stack, the last element added is the first one to be removed, following the Last In, First Out (LIFO) principle. Adding an element is called "Push", and removing it is called "Pop".

### Removing the Last Element (pop_back)

The `pop_back()` method is used to remove the last element that was added to the vector. The `size()` method can be used to check the current number of elements before and after the removal process.

### Preventing Crashes on Empty Vectors

If `pop_back()` is called on a vector that contains no elements, the program will crash. To prevent this error, the vector must be checked before attempting a removal. There are two common ways to perform this check:
- Using `size() > 0` to ensure there is at least one element.
- Using the `empty()` method, which returns `true` (1) if the vector is empty and `false` (0) if it contains data. Using the logical NOT operator (`!vNumbers.empty()`) ensures the code only runs if the vector is not empty.

### Clearing All Elements (clear)

To remove all elements from a vector at once without using a loop, the `clear()` method is used. This empties the entire vector immediately.

## Key Takeaways

- Vectors follow the Last In, First Out (LIFO) rule when adding and removing elements.
- `pop_back()` removes the most recently added element.
- Calling `pop_back()` on an empty vector causes the program to crash.
- `empty()` and `size()` are used to check if a vector is safe to modify.
- `clear()` removes all elements from the vector at once.

Muwafaa Sinjab @Muwafaa-Sinjab