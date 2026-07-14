# 08 - Library: Create Your Own Library

## Overview

This video explains the concept of libraries in programming and demonstrates how to create a custom local library. It covers the purpose of libraries, how to organize functions within them, and the proper way to call them in a project.

## Main Topics

### Purpose of Libraries

Libraries are used to store functions and procedures so they can be reused across different parts of a program or in entirely different projects. This avoids rewriting the same code multiple times. C++ provides standard libraries like `<iostream>` and `<string>`. Using libraries helps organize code, reduce the total number of lines, and save development time.

### Creating a Local Library

In Visual Studio, a local library is created as a Header File (.h). The process involves opening the Solution Explorer, right-clicking the "Header Files" section, selecting "Add", then "New Item", and finally choosing a Header File and assigning it a name.

### Library Structure and Namespaces

Inside the created header file, functions and procedures are grouped under a custom namespace. This groups related functions together logically and prevents them from conflicting with other code.

### Calling a Custom Library

To use the custom library in the main program file, it is included using double quotes (`#include "MyLibrary.h"`). Functions are then called by specifying the namespace name followed by the scope resolution operator (`::`), such as `MyLibrary::MyFunction();`.

### Best Practices for Custom Libraries

It is recommended to avoid using the `using namespace` directive with custom libraries. Keeping the namespace prefix when calling functions prevents naming conflicts if different libraries contain functions with the same name. It also improves code readability by clearly showing which library a specific function belongs to.

## Key Takeaways

- Libraries allow code reuse and help keep projects organized.
- A local library is created as a Header File (.h) in the Solution Explorer.
- Functions inside a custom library should be placed under a specific namespace.
- Local libraries are included using double quotes instead of angle brackets.
- Using the namespace prefix when calling functions is preferred to avoid name conflicts.

Muwafaa Sinjab @Muwafaa-Sinjab