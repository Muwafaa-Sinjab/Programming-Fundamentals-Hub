# 44 - Dynamic Arrays: new and delete

## Overview

This video explains how to create dynamic arrays using pointers. It covers the memory limitations of standard arrays, how to allocate an array of a size determined at runtime, and the correct method for releasing this memory.

## Main Topics

### Limitations of Static Arrays

A standard array requires a fixed size at declaration. If the declared size is larger than the number of elements actually used, the unused memory remains occupied. This wasted memory allocation can slow down the program.

### Creating Dynamic Arrays

Using pointers, an array can be created with a size that is determined while the program is running. The `new` keyword is used along with the data type and a variable representing the desired number of elements. The memory address of this block is assigned to a pointer.

```cpp
int Num;
cin >> Num;
float* ptr = new float[Num];
```

### Accessing Dynamic Array Elements

Elements in a dynamic array are not accessed using standard bracket notation in the same way as static arrays in this context. Instead, pointer arithmetic is used. By adding an index to the pointer name and dereferencing it, the program can read or write to the correct memory position.

```cpp
cin >> *(ptr + x);
cout << *(ptr + x);
```

### Freeing Dynamic Array Memory

When a dynamic array is no longer needed, its memory must be released back to the system. Unlike a single variable, freeing an array requires the `delete` keyword followed by empty square brackets `[]`. This tells the program to deallocate the entire block of memory that was reserved for the array.

```cpp
delete[] ptr;
```

## Key Takeaways

- Standard arrays can waste memory if the fixed size is larger than the actual data.
- Dynamic arrays allow the size to be set at runtime using the `new` keyword and a pointer.
- Pointer arithmetic (`*(ptr + index)`) is used to interact with elements in the dynamic array.
- The `delete[]` syntax is required to free the memory of a dynamic array.

Muwafaa Sinjab @Muwafaa-Sinjab