# 45 - Stack vs Heap

## Overview

This video explains how memory is organized in a C++ program. It breaks down RAM into four distinct sections, focusing on the differences between the Stack and the Heap, including how they store data and their speed limitations.

## Main Topics

### Source Code / Instructions

This section of memory stores the compiled instructions of the program. It takes up a very small amount of space and is the fastest to access because the processor reads instructions directly from here.

### Static / Global Variables

This area stores variables that are declared globally or with the `static` keyword. These variables remain in memory for the entire life of the program. They occupy a fixed, small space and can be accessed from any function.

### Stack Memory

The Operating System assigns a fixed, limited size for the Stack before the program runs. It stores local variables, function calls, and pointer variables. The Stack is very fast because memory is accessed in a strict order. However, because its size is fixed, it can fill up quickly. If too many function calls occur, such as in deep recursion, the Stack exceeds its limit and causes a Stack Overflow crash.

### Heap Memory

The Heap is the remaining space in RAM that is not used by the other sections. Developers access the Heap dynamically using pointers. It is used to store dynamic variables, objects, and arrays created with the `new` keyword. While accessing the Heap is slower than accessing the Stack, it is highly flexible. The program can request as much memory as needed at runtime, limited only by the physical RAM available on the machine.

## Key Takeaways

- Program memory (RAM) is divided into four parts: Source Code, Static/Global, Stack, and Heap.
- The Stack is fast and stores local variables and function data, but has a strict size limit.
- The Heap is slower but flexible, storing dynamically allocated data accessed via pointers.
- Exceeding the Stack's fixed size results in a Stack Overflow error.
- Dynamic memory created with `new` is stored in the Heap, while the pointer pointing to it is stored in the Stack.

Muwafaa Sinjab @Muwafaa-Sinjab