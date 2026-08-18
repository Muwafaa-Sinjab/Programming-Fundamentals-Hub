# 43 - Memory Management: new and delete

## Overview

This video introduces dynamic memory management in C++. It explains how to allocate memory for variables at runtime using the `new` keyword, how to interact with this memory using pointers, and the critical importance of releasing it using the `delete` keyword.

## Main Topics

### Dynamic Memory Allocation

Normal variables are created in the Stack and are automatically destroyed when the function ends. To create a variable only when needed at runtime, or to keep it alive beyond the function scope, memory is allocated dynamically. The `new` keyword requests a space in memory and returns its address. This address can also be used to initialize the value directly, such as `int* p = new int(10);`.

### Accessing and Modifying Data

Because the `new` keyword returns a memory address, a pointer is required to store and interact with this data. The standard dereference operator `*` is used to read or assign values to the dynamically allocated memory space.

### Memory Deallocation

Unlike Stack memory, dynamic memory is not freed automatically when a function ends. If it is not manually released, the memory remains occupied until the program closes, which wastes system resources. The `delete` keyword is used to release the allocated memory back to the system. It is important to note that `delete` frees the memory space but does not destroy the pointer variable itself.

```cpp
int* ptrX;
ptrX = new int;    // Allocate memory at runtime
*ptrX = 45;        // Assign a value

// ... use the variable ...

delete ptrX;       // Free the allocated memory
```

## Key Takeaways

- The `new` keyword allocates memory dynamically during program execution.
- Dynamic memory must be accessed and modified using pointers.
- Dynamic memory is not destroyed automatically like normal local variables.
- The `delete` keyword is required to free the memory and prevent resource waste.
- Every `new` operation must have a matching `delete` operation.

Muwafaa Sinjab @Muwafaa-Sinjab