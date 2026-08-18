# 48 - Vector Iterators

## Overview

This video introduces iterators as a method for traversing vector elements. It explains how to declare an iterator, move through the vector, and access values using a pointer-like approach.

## Main Topics

### Iterator Concept

An iterator acts as a pointer used to visit each element in a vector one by one. It provides a standard way to navigate through the collection without using a standard index-based loop.

### Type Matching

The data type of the iterator must exactly match the data type of the vector it is traversing. For example, a vector of integers requires an integer iterator.

### Begin and End Functions

The `.begin()` function returns an iterator pointing to the first element in the vector. The `.end()` function returns an iterator pointing to the position after the last element, which is used as the stopping condition for the loop.

### Loop Implementation

A `for` loop is used to move the iterator from the beginning to the end. The iterator is incremented using the `++` operator to move to the next element. The value at the current iterator position is accessed using the dereference operator `*`.

```cpp
vector <int> num{ 1, 2, 3, 4, 5 };
vector <int> ::iterator iter;

for (iter = num.begin(); iter != num.end(); iter++) {
    cout << *iter << " ";
}
```

## Key Takeaways

- An iterator is a pointer-like object used to navigate through a vector.
- The iterator data type must match the vector data type.
- `.begin()` points to the first element, and `.end()` marks the end of the vector.
- The `*` operator is used to read the value at the iterator's current position.

Muwafaa Sinjab @Muwafaa-Sinjab