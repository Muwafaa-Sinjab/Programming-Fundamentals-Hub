# 14 - Declaration Vs Definition

## Overview

This video explains the difference between a function declaration and a function definition. It covers why separating these two parts is necessary when calling a function before its actual implementation appears in the code.

## Main Topics

### Function Declaration

A function declaration is a single line of code that serves as a header. It includes the return type, the function name, and the parameters, ending with a semicolon. It acts as a promise to the compiler that a function with this specific name and parameters exists somewhere in the program, but it does not include any execution logic.

### Function Definition

A function definition is the full implementation of the function. It contains the same header as the declaration, followed by the function body enclosed in curly braces. The body holds the actual code and instructions that run when the function is called.

### Purpose of Separation

The compiler reads code from top to bottom. If a function is called inside `main()` but its full definition is written below `main()`, the compiler will not recognize the function name and will produce an error. Writing the declaration above `main()` solves this issue by informing the compiler about the function before it is actually used.

```cpp
// Function declaration
void add(int, int);

int main()
{
    add(10, 20);
}

// Function definition
void add(int a, int b)
{
    cout << a + b << endl;
}
```

## Key Takeaways

- A declaration is the function signature ending with a semicolon, without the function body.
- A definition contains the header along with the actual code inside curly braces.
- Declaring a function above `main()` allows it to be called even if its definition is located below.

Muwafaa Sinjab @Muwafaa-Sinjab