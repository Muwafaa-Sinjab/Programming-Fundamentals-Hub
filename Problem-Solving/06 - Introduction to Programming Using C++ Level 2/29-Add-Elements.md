# 29 - Add Elements

## Overview

This video explains how to add elements to a vector using the `push_back` method. It also introduces the concept of vectors as a Stack data structure and highlights the critical importance of passing vectors by reference when using them in functions.

## Main Topics

### The push_back Method

The `push_back` method is used to add new elements to the end of a vector. When an empty vector is declared, memory is not allocated until `push_back` is called. Each time this method is used, the vector automatically expands its memory to accommodate the new item.

```cpp
vector <int> vNumbers;
vNumbers.push_back(10);
vNumbers.push_back(20);
```

### Vectors as a Stack

Vectors operate using a data structure concept known as a Stack. In a Stack, data follows the Last In, First Out (LIFO) principle. This means the last element added to the vector will be the first one to be removed. The process of adding an element is called "Push", and the process of removing it is called "Pop".

### Passing Vectors to Functions

Unlike standard arrays which are passed by reference by default, vectors are passed by value. If a vector is passed to a function without the reference symbol `&`, the program creates a completely separate copy of the vector. This wastes memory, slows down the program, and prevents any changes made inside the function from affecting the original vector. Therefore, it is highly recommended to always use `&` in vector function parameters.

```cpp
void ReadNumber(vector <int>& vNumbers) {
    // Modifying vNumbers here changes the original vector
    vNumbers.push_back(Number);
}
```

### Ranged Loops and References

Because vectors are passed by value, using a ranged loop without the `&` symbol causes the program to copy every single element into a new temporary variable during iteration. Adding `&` ensures the loop accesses the original memory locations directly, keeping the code fast and efficient.

## Key Takeaways

- `push_back` is the standard method to add elements to the end of a vector.
- Vectors function as a Stack, following the Last In, First Out (LIFO) rule.
- Vectors are passed by value by default, meaning they are copied if not handled carefully.
- The `&` symbol is essential in function parameters to modify the original vector and avoid performance issues.
- Using `&` in ranged loops prevents unnecessary copying of elements.

Muwafaa Sinjab @Muwafaa-Sinjab