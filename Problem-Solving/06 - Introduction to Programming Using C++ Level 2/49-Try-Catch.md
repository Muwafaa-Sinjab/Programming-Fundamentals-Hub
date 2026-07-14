# 49 - Try Catch

## Overview

This video introduces exception handling using the `try-catch` structure. It explains how to prevent a program from crashing suddenly when a runtime error occurs, ensuring the program can handle the error and continue running.

## Main Topics

### Runtime Errors and Crashes

A runtime error, such as accessing an invalid index in a vector, normally causes the program to stop immediately. Without intervention, this sudden crash prevents the rest of the code from executing and closes the application unexpectedly.

### The Try-Catch Structure

The `try-catch` block is used to handle these errors gracefully. Risky code is placed inside the `try` block. If an error happens inside this block, the program does not crash. Instead, it skips the remaining code in the `try` block and jumps directly to the `catch` block to execute alternative handling code.

```cpp
try {
    cout << num.at(5);
}
catch (...) {
    cout << "out of bound \n";
}
```

### Performance Considerations

Exception handling should be used carefully and only when necessary. Wrapping code in a `try-catch` block slows down program execution. It is best reserved for situations where errors are unpredictable and standard conditional checks (like using `if` statements to validate an index) are not possible.

## Key Takeaways

- `try-catch` prevents runtime errors from crashing the entire program.
- Code that might cause an error is placed inside the `try` block.
- The `catch` block executes only if an exception occurs in the `try` block.
- Exception handling adds processing overhead and should be avoided when a simple condition can prevent the error.

Muwafaa Sinjab @Muwafaa-Sinjab