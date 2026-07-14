# 34 - Creating References

## Overview

This video explains how to create references in C++. It demonstrates how to give a variable a second name that points to the exact same memory location, rather than creating a separate copy of the data.

## Main Topics

### Creating a Reference

A reference is created by adding the `&` symbol to the data type during declaration. The new variable must be initialized with an existing variable at the moment it is created. This makes the new name an alias for the original variable.

### Shared Memory Address

Unlike a standard assignment (like `int y = x`) which creates a new, independent slot in memory, a reference shares the original slot. Both the original variable and the reference have the exact same memory address. Printing the address using the `&` symbol for both variables confirms they are identical.

### Shared Value

Because the reference and the original variable occupy the same memory location, they also share the same value. If the value is changed through the reference, the original variable changes as well. Similarly, changing the original variable updates the reference.

```cpp
int a = 10;
int& x = a; // x is now a reference to a

x = 20;

cout << a << endl; // Prints 20
cout << x << endl; // Prints 20
```

## Key Takeaways

- A reference acts as an alias for an existing variable.
- Both the reference and the original variable share the exact same memory address.
- Modifying the reference directly modifies the original variable.
- The `&` symbol in the declaration is used to create a reference.

Muwafaa Sinjab @Muwafaa-Sinjab