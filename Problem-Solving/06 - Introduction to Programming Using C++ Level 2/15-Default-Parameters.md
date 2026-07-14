# 15 - Default Parameters

## Overview

This video explains how to use default parameters in functions. It covers how to assign default values to arguments, making them optional when the function is called, and the rules for placing them in the parameter list.

## Main Topics

### Concept of Default Parameters

A default parameter is an argument that has a predefined value in the function signature. If the function is called without providing a value for this argument, the function automatically uses the default value. This makes the parameter optional for the caller.

### Syntax and Usage

The default value is assigned directly in the function declaration or definition using the equals sign. When the function is called, arguments can be omitted from right to left.

```cpp
int MySum(int a, int b, int c = 0, int d = 0)
{
    return (a + b + c + d);
}

// MySum(10, 20) returns 30
// MySum(10, 20, 30) returns 60
// MySum(10, 20, 30, 40) returns 100
```

### Parameter Placement Rules

Default parameters must always be placed at the end of the parameter list, after all the required (non-default) parameters. Defining a default parameter before a required one causes a compilation error. For example, `int MySum(int a = 0, int b, int c)` is invalid because the compiler would not know how to handle a call with only one argument.

## Key Takeaways

- Default parameters allow function arguments to be optional.
- A default value is assigned using the equals sign in the function signature.
- They must be placed at the very end of the parameter list.
- Using default parameters can reduce the need to write multiple overloaded functions.

Muwafaa Sinjab @Muwafaa-Sinjab