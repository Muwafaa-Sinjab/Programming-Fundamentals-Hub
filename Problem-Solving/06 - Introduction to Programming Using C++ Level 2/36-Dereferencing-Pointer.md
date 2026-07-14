# 36 - Dereferencing Pointer

## Overview

This video explains how to access and modify the data stored at a pointer's memory address. This process is known as dereferencing.

## Main Topics

### The Dereference Operator

In C++, the asterisk `*` symbol is used both to declare a pointer and to access the data it points to. When used in front of an existing pointer variable during execution, it acts as the dereference operator. It tells the program to look at the memory address stored in the pointer and retrieve the actual value located there, rather than the address itself.

### Accessing the Original Value

Printing a pointer variable directly displays a hexadecimal memory address. To read the actual data stored at that address, the `*` symbol is placed before the pointer name. This provides direct access to the original variable's value.

### Modifying Data Through the Pointer

Dereferencing is also used to change the value of the original variable. By assigning a new value to `*p`, the data in the original variable is updated. The connection works both ways; if the original variable is modified directly, using `*p` will display the new value, because both the variable and the pointer reference the exact same memory location.

```cpp
int a = 10;
int* p = &a;

cout << p << endl;  // Prints the memory address
cout << *p << endl; // Prints 10

*p = 20;            // Modifies the original variable 'a'
cout << a << endl;  // Prints 20
```

## Key Takeaways

- Dereferencing uses the `*` symbol to access the value at a pointer's address.
- Printing the pointer alone shows the address; printing `*p` shows the stored value.
- Modifying `*p` directly changes the value of the original variable.
- The pointer and the original variable always share the same updated value.

Muwafaa Sinjab @Muwafaa-Sinjab