# 10 - Ranged Loop

## Overview

This video introduces the ranged loop, which is used to iterate over collections of elements such as arrays and vectors. It explains the syntax, default behavior, and limitations compared to the traditional `for` loop.

## Main Topics

### Ranged Loop Concept

The ranged loop is not a replacement for the standard `for` loop. It is a different approach designed specifically to work with collections of things, such as arrays or vectors. It automatically starts from the first element and moves through each item until it reaches the end.

### Syntax Structure

The loop requires two main parts: a variable declaration and the collection to iterate over. The variable takes the value of each element in the collection one by one.

```cpp
int Array1[] = { 1, 2, 3, 4 };
for (int n : Array1) {
    cout << n << endl;
}
```

### Read-Only Behavior and References

By default, the loop variable is a copy of the element. This means the original values in the collection cannot be modified inside the loop. To change the actual elements of the array or vector, the reference symbol `&` must be added to the variable declaration.

### Limitations with Functions

A ranged loop cannot be used directly on an array that is passed to a function as a pointer. However, it works correctly when used with vectors passed to functions.

## Key Takeaways

- The ranged loop is used for iterating over collections like arrays and vectors.
- It is not a full replacement for the traditional `for` loop.
- The loop variable is a copy of the element by default, making it read-only.
- The `&` symbol is required to modify the original elements during iteration.
- It does not work with raw array pointers inside functions, but works with vectors.

Muwafaa Sinjab @Muwafaa-Sinjab