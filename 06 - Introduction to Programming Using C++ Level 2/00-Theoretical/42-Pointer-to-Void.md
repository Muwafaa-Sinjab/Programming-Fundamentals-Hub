# 42 - Pointer to Void

## Overview

This video introduces the void pointer, which is a special type of pointer in C++. It explains how a void pointer can store the address of any data type, the limitations that come with this flexibility, and how to correctly access or modify the stored data.

## Main Topics

### Concept of Void Pointer

Standard pointers are strictly tied to a specific data type. For example, an integer pointer can only hold the address of an integer variable. A void pointer removes this restriction. It is a generic pointer that can store the address of any data type, including integers, floats, strings, or structures. This is particularly useful when the exact data type is not known at the time the pointer is created.

### Limitation of Void Pointers

While a void pointer can hold any memory address, it does not know what type of data is stored there. Because the data type is unknown, the compiler cannot determine how much memory to read or how to interpret the value. Therefore, attempting to directly print or modify the value using the standard dereference operator (`*ptr`) causes a compilation error.

### Accessing Data with Static Cast

To read or modify the data at a void pointer's address, the pointer must be temporarily converted back to the correct data type. This is done using the `static_cast` operator. The void pointer is placed inside the cast syntax, specifying the target type, and is then dereferenced.

```cpp
void* ptr;
float f1 = 10.5;
ptr = &f1;

// Directly printing *ptr causes an error
// Correct method:
cout << *(static_cast<float*>(ptr)) << endl;
```

## Key Takeaways

- A void pointer is a generic pointer that can hold the address of any data type.
- The data type of a void pointer can change at runtime by assigning it different variable addresses.
- Directly dereferencing a void pointer is not allowed and causes a compilation error.
- The `static_cast` operator is required to convert the void pointer to the correct type before accessing the value.

Muwafaa Sinjab @Muwafaa-Sinjab