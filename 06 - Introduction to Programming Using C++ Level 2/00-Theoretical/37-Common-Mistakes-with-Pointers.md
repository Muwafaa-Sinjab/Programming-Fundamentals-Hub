# 37 - Common Mistakes with Pointers

## Overview

This video highlights the most common mistakes developers make when working with pointers. It focuses on the correct usage of the pointer variable and the dereference operator to avoid compilation errors.

## Main Topics

### Assigning Values to a Pointer

A pointer variable is designed to store memory addresses only. A frequent error is attempting to assign a direct numeric value or a variable's value to the pointer. Writing `p = x` or `p = 50` is incorrect because it tries to store data in a space meant for an address. The correct approach is to assign the memory address of the variable using the ampersand symbol, such as `p = &x`.

### Assigning an Address to a Dereferenced Pointer

Dereferencing a pointer using the asterisk symbol (`*p`) accesses the actual data stored at the memory address. A common mistake is trying to assign an address to the dereferenced pointer, such as `*p = &x`. Because `*p` represents the actual value location, it can only accept a standard value. The correct syntax is `*p = x` or `*p = 50`.

## Key Takeaways

- A pointer must always be assigned a memory address, never a direct value.
- The `&` symbol is required to pass an address to the pointer variable.
- The `*` symbol accesses the stored value, so it cannot receive an address.
- Confusing the rules for `p` and `*p` leads to compilation errors.

Muwafaa Sinjab @Muwafaa-Sinjab