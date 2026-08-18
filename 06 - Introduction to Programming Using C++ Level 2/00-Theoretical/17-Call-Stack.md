# 17 - Call Stack / Call Hierarchy

## Overview

This video explains the Call Stack, also known as Call Hierarchy. It covers how programs manage the order of function calls in memory, how the active function is tracked, and how to view this hierarchy in the development environment.

## Main Topics

### Call Stack and Call Hierarchy

Call Stack and Call Hierarchy are two names for the same concept. They describe the chain of function calls that occur when one function calls another, continuing until the final function in the sequence is reached. This chain helps track the path the program takes during execution.

### Active Frame

When a function is called, a space is reserved for it in memory. The function that is currently executing and holding the program's focus is called the Active Frame. There can only be one Active Frame at any given moment in the stack.

### Stack Behavior (LIFO)

The Call Stack operates on a First In, Last Out (LIFO) structure. The `main()` function is always the first to enter the stack and the last to leave. When a new function is called, it is added to the top of the stack (Push) and becomes the Active Frame. Once that function finishes executing, it is removed from the stack (Pop), and the previous function becomes the Active Frame again.

### Viewing the Call Hierarchy Window

In Visual Studio, the Call Hierarchy window can be opened to inspect function relationships. By right-clicking a function name and selecting "Call Hierarchy", a window appears showing which functions call the selected function, as well as the functions that it calls.

## Key Takeaways

- Call Stack and Call Hierarchy refer to the sequence of function calls in a program.
- The Active Frame is the single function currently running in memory.
- The stack follows a First In, Last Out (LIFO) order.
- The `main()` function is the first to enter the stack and the last to exit.

Muwafaa Sinjab @Muwafaa-Sinjab