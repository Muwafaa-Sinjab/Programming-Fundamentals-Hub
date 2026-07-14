# 22 - Functions Part I

## Overview
This lesson introduces functions in C++: named blocks of code that run only when they are called, and that form the basic building blocks of any program.

## What Is a Function?
A function is a small, named piece of code designed to do one specific job. It does not run automatically; it only runs when it is called from somewhere in the program, such as inside `main`.

## A Simple Function
```cpp
void greet() {
    cout << "Hello, this is my first function" << endl;
}

int main() {
    greet();   // calling the function
    return 0;
}
```

If `greet()` is never called inside `main`, the code inside it will never run, no matter how it is written.

## Calling a Function Multiple Times
A function can be called as many times as needed. Each call runs its code again from the start.

```cpp
int main() {
    greet();
    greet();
    greet();
    return 0;
}
```

## Using Several Functions Together
A program can define multiple functions, each responsible for one small task.

```cpp
void printLine() {
    cout << "-----" << endl;
}

void printMessage() {
    cout << "I enjoy learning C++" << endl;
}

int main() {
    greet();
    printLine();
    printMessage();
    return 0;
}
```

## Functions Without a Return Value
When a function only performs an action and does not send back a result, it is defined using `void` as its type, as shown in the examples above. Functions that return a value are covered in a later lesson.

## Key Points
- A function only runs when it is explicitly called.
- Parentheses `()` are required when calling a function, even if it takes no input.
- Breaking a program into small, focused functions makes the code easier to read and maintain.
- Each function should have a clear name that describes what it does.

## Summary
- A function is a reusable, named block of code.
- It must be called to run; defining it is not enough on its own.
- `void` is used for functions that perform an action without returning a value.
- A program is usually organized as several small functions rather than one large block of code.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
