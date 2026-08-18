# 47 - Change Elements

## Overview

This video explains how to modify elements stored in a vector. It covers how to change values during iteration using a ranged loop and how to update specific elements directly by their index.

## Main Topics

### Modifying Elements in a Ranged Loop

When using a ranged loop to read a vector, it is best practice to use `const int&`. This ensures the elements cannot be modified and keeps the loop fast by avoiding unnecessary copies. To change the values, the `const` keyword is removed, leaving just `int&`. This creates a reference to the original elements, allowing their values to be overwritten directly inside the loop.

### Direct Assignment Using Indexes

Elements can also be changed individually without looping through the entire vector. By targeting a specific index position, a new value can be assigned. Both the bracket notation `[]` and the `.at()` method can be used for direct assignment.

```cpp
vector<int> num{ 1, 2, 3, 4, 5 };

// Changing all elements using a ranged loop
for (int& i : num) {
    i = 20;
}

// Changing specific elements by index
num[1] = 40;
num.at(2) = 80;
```

## Key Takeaways

- Using `const int&` in a ranged loop safely prevents accidental modification.
- Using `int&` in a ranged loop allows the original vector elements to be changed.
- Specific elements can be updated directly using either `[]` or `.at()`.

Muwafaa Sinjab @Muwafaa-Sinjab