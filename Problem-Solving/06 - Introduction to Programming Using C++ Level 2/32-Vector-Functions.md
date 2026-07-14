# 32 - Vector Functions

## Overview

This video introduces several built-in functions for managing and inspecting vectors. It explains how to check the number of elements, access specific items, and modify the vector's contents without adding or removing elements one by one.

## Main Topics

### Size and Capacity

The `size()` function returns the current number of elements stored in the vector. The `capacity()` function returns the total amount of memory currently allocated for the vector. The capacity is often larger than the size because vectors allocate extra space in advance to handle future additions efficiently.

### Accessing First and Last Elements

The `front()` function returns the first element, which is equivalent to `v[0]`. The `back()` function returns the last element, equivalent to `v[v.size() - 1]`. If the vector is empty, calling these functions causes an error or exception. Because of this, the vector must be checked for data before using them.

### Checking for Emptiness

The `empty()` function checks whether the vector contains any data. It returns `true` (1) if the vector is empty and `false` (0) if it has elements. Using `!v.empty()` or `v.size() > 0` is the standard way to prevent crashes when accessing vector elements.

### Assigning Values

The `assign()` function is used to fill a vector with a specific value. It takes two arguments: the number of elements to create, and the value to assign to each one. This replaces any existing data in the vector.

```cpp
v.assign(5, 7); // Vector becomes [7, 7, 7, 7, 7]
```

## Key Takeaways

- `size()` returns the actual number of elements, while `capacity()` returns the allocated memory size.
- `front()` and `back()` provide quick access to the first and last elements.
- Accessing elements on an empty vector causes a program crash, making `empty()` an important safety check.
- `assign()` replaces the vector's contents with multiple copies of a specified value.

Muwafaa Sinjab @Muwafaa-Sinjab