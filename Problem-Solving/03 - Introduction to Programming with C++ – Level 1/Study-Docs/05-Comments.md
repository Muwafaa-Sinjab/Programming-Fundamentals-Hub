# 05 - Comments

## Overview
This lesson introduces comments in C++: text added to the code for explanation, which the compiler ignores and does not run.

## Single-Line Comments
A single-line comment starts with `//`. Everything after it, on the same line, is ignored by the compiler.

```cpp
#include <iostream>
using namespace std;

int main() {
    // print a greeting
    cout << "Hello there" << endl;

    cout << "Second line" << endl;  // comment next to code
    return 0;
}
```

## Multi-Line Comments
A multi-line comment starts with `/*` and ends with `*/`. It can cover several lines, which is useful for longer explanations.

```cpp
/*
This part of the program prints
a short welcome message to the user.
*/
cout << "Welcome" << endl;
```

## Common Uses of Comments
- Explaining what a part of the code does.
- Temporarily disabling a line of code during testing.
- Leaving notes for other developers who read the code.
- Reminding the programmer of details for later.

Example of disabling a line for testing:

```cpp
cout << "Step one" << endl;
// cout << "Step two - disabled for testing" << endl;
cout << "Step three" << endl;
```

## Good and Bad Comment Practice
Comments should not simply repeat what the code already shows. It is often better to use a clear variable name than to add an unnecessary comment.

Less clear:
```cpp
int a;  // this will hold the student's grade
```

Better:
```cpp
int studentGrade;  // the name already explains its purpose
```

Comments are most useful when they explain something that is not obvious from the code itself, such as complex logic.

## Comment Shortcuts in Visual Studio
Some editors, like Visual Studio, offer shortcuts to comment code faster:
- `Ctrl + K`, `Ctrl + C` adds a comment.
- `Ctrl + K`, `Ctrl + U` removes a comment.
- Multiple lines can be selected and commented out together.

## Summary
- `//` is used for single-line comments.
- `/* */` is used for multi-line comments.
- Comments can explain code or temporarily disable a line.
- Clear naming is often better than excessive commenting.
- Comments are most useful for explaining logic that is not obvious.
