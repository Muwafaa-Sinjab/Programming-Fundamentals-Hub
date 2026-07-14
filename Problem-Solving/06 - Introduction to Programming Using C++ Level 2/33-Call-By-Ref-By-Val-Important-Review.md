# 33 - Call By Ref / By Val Important Review

## Overview

This video reviews how variables are stored in memory and compares the concepts of passing arguments by value and by reference. It highlights the differences in memory allocation and how each method affects the original data.

## Main Topics

### Memory Structure of a Variable

Every variable in memory occupies a specific space, often referred to as a slot. This slot contains three distinct pieces of information: the variable name, the stored value, and the memory address. The address is written in hexadecimal format and serves as a reference to the exact location of that variable in memory. The `&` symbol is used to represent this reference.

### Call By Value

When a parameter is passed by value, the function creates a completely new slot in memory. This new variable receives a copy of the original value but has its own separate name, value, and memory address. Because they occupy different memory locations, any changes made to the variable inside the function do not affect the original variable in the calling function.

### Call By Reference

When a parameter is passed by reference using the `&` symbol, the function does not create a new space for the value. Instead, it only copies the memory address of the original variable. The parameter becomes an alias for the original variable, meaning they share the exact same address and value. Any modifications made inside the function directly change the original data.

```cpp
void Function1(int x) { x++; }     // By Value
void Function2(int &x) { x++; }    // By Reference

int a = 10;
Function1(a); // 'a' remains 10
Function2(a); // 'a' becomes 11
```

## Key Takeaways

- A variable in memory consists of a name, a value, and a memory address.
- Passing by value creates a separate copy with a different memory address.
- Passing by reference shares the same memory address as the original variable.
- The `&` symbol is used to pass a variable by reference, allowing functions to modify the original data.

Muwafaa Sinjab @Muwafaa-Sinjab