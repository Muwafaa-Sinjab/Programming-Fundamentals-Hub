# 16 - Function Overloading

## Overview

This video introduces function overloading, a feature that allows multiple functions to share the same name. It explains how the compiler differentiates between these functions, the valid ways to overload them, and how this concept relates to polymorphism.

## Main Topics

### Concept of Function Overloading

Function overloading groups related functions under a single name. Instead of creating separate functions with different names for different data types (such as `PrintInt` or `PrintString`), a single name like `Print` can be used. Unlike variables, repeating a function name in C++ is permitted as long as their parameter signatures are different. This concept is a form of polymorphism, meaning the function takes multiple forms.

### Valid Ways to Differentiate Functions

The compiler distinguishes overloaded functions based on their parameters. There are three valid ways to achieve this:
- Changing the data types of the parameters.
- Changing the total number of parameters.
- Changing the order of the parameter types.

```cpp
void print(int x) { cout << "number: " << x << endl; }
void print(string text) { cout << "text: " << text << endl; }
void print(double x) { cout << "double: " << x << endl; }
```

### Return Type Limitation

Changing only the return type of a function is not a valid way to overload it. If two functions have the exact same name and the exact same parameters, but different return types (such as `int` and `double`), the compiler will produce an error because it cannot determine which function to use.

### Interaction with Default Parameters

Using default parameters can sometimes replace the need to write multiple overloaded functions. For example, a function where all parameters have default values can act as an overload for calls with zero, one, or multiple arguments. However, care must be taken to avoid ambiguity between default parameters and other overloaded versions.

## Key Takeaways

- Function overloading allows multiple functions with the same name to exist based on their parameters.
- Functions must differ in parameter type, number, or order.
- Changing only the return type is not valid and causes a compilation error.
- Default parameters can sometimes be used instead of writing separate overloaded functions.

Muwafaa Sinjab @Muwafaa-Sinjab