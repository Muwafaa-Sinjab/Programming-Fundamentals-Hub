# 12 - Array is One of the Most Important Data Structures

## Overview
This lesson explains the Array data structure. It describes its properties, how to access items, and its Time Complexity. Arrays are one of the most used data structures in programming.

## Main Topics
### What is an Array?
An Array is a series of variables of the **same type**. The type can be `int`, `string`, `char`, `struct`, or `Object`. Because all items have the same type, an Array is a **homogeneous** data structure.

You access items in an Array using an **Index**. In C++, the index starts at `0`. Each item in the Array has a specific address in memory.

### Array Size
The size of an Array depends on the programming language.

- **In C**, an Array has a fixed size. You cannot change the size at runtime. This is a **Static Data Structure**.
- **In C++**, you can use a **Dynamic Array**. Its size can change at runtime.

### Time Complexity of Array
The Time Complexity depends on how you use the Array:

- **Access by Index (O(1))**: If you know the index, you can access the item very fast. Example: `x[5] = 10`. This is **O(1)** Constant Time.
- **Fill or Search using Loop (O(n))**: If you fill the Array or search for an item using a `for` loop, you must check each item. This is **O(n)** Linear Time.

```cpp
// Filling array is O(n)
int arr[10];
for (int i = 0; i < 10; i++)
{
    cin << arr[i];
}
```

Arrays are very important because they are simple and fast to access. Many other data structures are built using Arrays.

## Key Takeaways
- An Array stores items of the same type (homogeneous).
- Array index starts at 0 in C++.
- Accessing an item by index is O(1), very fast.
- Searching in an Array using a loop is O(n).
- Arrays can be Static (fixed size) or Dynamic (changeable size).

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)