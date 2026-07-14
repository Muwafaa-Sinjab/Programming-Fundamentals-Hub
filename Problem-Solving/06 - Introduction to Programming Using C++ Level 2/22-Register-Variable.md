# 22 - Register Variable

## Overview

This video explains the concept of register variables and how they relate to memory access speeds. It covers the original purpose of the `register` keyword, the memory hierarchy from the CPU to the hard disk, and why this feature is no longer needed in modern C++.

## Main Topics

### Memory Access Hierarchy

In programming, memory refers to RAM, but data is accessed at different speeds depending on its physical location. The speed hierarchy from fastest to slowest is:

1. **Registers:** The fastest storage unit, located directly inside the CPU. Data here is available instantly.
2. **Cache Memory:** Slightly slower than registers, but provides fast access to frequently used data.
3. **Primary Memory (RAM):** Slower than cache, used for standard variable storage during program execution.
4. **Hard Disk:** The slowest access speed, used for permanent data storage.

### Original Purpose of Register Variables

Normally, variables are stored in RAM. In the past, developers used the `register` keyword to request that the compiler store a specific variable directly in a CPU register instead of RAM. This was done to achieve extremely high execution speeds, particularly for variables used in fast and repetitive operations like loop counters.

### Current Status in C++

Starting with C++11 and newer versions, the `register` keyword has been deprecated and is essentially removed from the language. Modern compilers are highly advanced and automatically optimize the code. They decide on their own which variables should be stored in CPU registers to maximize speed. Therefore, manually using the `register` keyword is no longer necessary or supported.

## Key Takeaways

- Data access speed depends on the physical hardware, with CPU registers being the fastest.
- The `register` keyword was historically used to store variables in the CPU for faster execution.
- Modern C++ compilers handle this optimization automatically.
- The `register` keyword is deprecated in C++11 and later versions.

Muwafaa Sinjab @Muwafaa-Sinjab