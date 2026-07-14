# 01 - Syntax

## Overview
This lesson introduces the fundamental syntax rules of C++ and the essential building blocks required to write a valid, executable program.

## Core Program Structure
A minimal C++ program is composed of a fixed set of elements:

```cpp
#include <iostream>
using namespace std;

int main() {
    return 0;
}
```

- **Header inclusion (`#include`)**: brings in external libraries needed by the program.
- **The `main` function**: the mandatory entry point where program execution begins.
- **Curly braces `{}`**: define the boundaries of a code block or scope.
- **Semicolon `;`**: marks the end of each statement.

## Libraries and Namespaces
- The `<iostream>` header provides the standard input/output functionality (e.g., printing to the screen, reading user input).
- The `using namespace std;` directive allows standard library names (like `cout`) to be used directly, without prefixing them with `std::` each time.

## The `main` Function
The `main` function follows strict conventions:
- Its return type is always `int`.
- Its name must be exactly `main`.
- It requires parentheses `()` even when no parameters are used.
- It must return a numeric value via `return`, conventionally `0` to indicate successful execution.

## Output with `cout`
- The `cout` object, combined with the insertion operator `<<`, is used to send data to the standard output (the screen).
- Text intended for output is enclosed in double quotes.

## Common Syntax Errors
Two frequent mistakes for beginners:
- **Missing semicolon**: every statement must end with `;`; omitting it causes a compilation error.
- **Missing curly braces**: the body of `main` (and other blocks) must be enclosed in `{}`; leaving them out breaks the program's structure.

## Summary
- `#include` is required to bring in libraries.
- `main` is the mandatory entry point and must return `int`.
- `cout` handles output to the screen.
- The semicolon `;` terminates each statement.
- Curly braces `{}` define the scope of code blocks.

Adhering to these syntax rules is essential — even a small omission, such as a missing semicolon or brace, can prevent the entire program from compiling.
