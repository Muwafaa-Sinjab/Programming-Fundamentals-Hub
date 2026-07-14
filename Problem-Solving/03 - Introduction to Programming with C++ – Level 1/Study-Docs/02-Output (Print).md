# 02 - Output (Print)

## Overview
This lesson explains how to print text and values to the screen in C++ using the `cout` command.

## The cout Command
`cout` is the standard tool used to display output in a C++ program.

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Learning C++ step by step";
    return 0;
}
```

Basic rules for `cout`:
- The text to print is written between double quotes.
- The symbol `<<` sends the text to the output.
- The statement must end with a semicolon `;`.
- The command must be written in lowercase (`cout`, not `COUT`).

## Creating New Lines
There are two common ways to move output to a new line:

```cpp
cout << "First line\n";
cout << "Second line" << endl;
```

- `\n` simply starts a new line.
- `endl` starts a new line and also clears the output buffer.

In most everyday programs, both produce the same visible result, but `\n` is generally lighter and more commonly used.

## Printing Multiple Values
Several pieces of text or values can be printed in one statement by chaining `<<`.

```cpp
cout << "Score: " << 90 << " points";
```

This prints text and a number together in the same line. Extra spaces can be added inside the quotes to keep the output readable.

## Printing Calculations
An expression can be placed inside a `cout` statement, and the result will be printed directly.

```cpp
cout << "Total: " << (20 + 5);
```

This prints `Total: 25`.

## Common Mistakes
- Forgetting the semicolon at the end of the statement.
- Forgetting the double quotes around text.
- Writing `cout` with uppercase letters.

## Summary
- `cout` is used for printing output to the screen.
- `<<` connects text, numbers, and expressions to the output.
- `\n` and `endl` both move output to a new line.
- Each statement must end with a semicolon.
