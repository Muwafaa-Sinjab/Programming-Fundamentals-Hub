# 11 - Validate Number

## Overview

This video demonstrates how to validate user input to ensure that only numbers are accepted. It explains how to handle situations where a user enters text instead of a number, which would normally cause the program to behave unexpectedly.

## Main Topics

### The Problem with Invalid Input

The `cin` object is part of object-oriented programming and expects specific data types. If a user enters a character like a letter instead of a number, the input process fails, and the variable does not receive a valid value.

### Checking for Input Errors

The `cin.fail()` function is used to check if the last input operation caused an error. It returns true if the input does not match the expected variable type, such as when a letter is entered for an integer variable.

### Recovering from Input Errors

Once an error is detected, the program cannot ask for new input immediately. Two steps are required to fix the input stream:
- `cin.clear()`: This resets the error state of the stream.
- `cin.ignore(...)`: This removes the invalid characters left in the input buffer, including the newline character, so they do not affect the next input attempt.

### Validation Loop

A `while` loop combined with `cin.fail()` is used to keep asking the user for input until a valid number is provided.

```cpp
int ReadNumber() {
    int Number = 0;
    cout << "Please enter a number ? \n";
    cin >> Number;

    while (cin.fail()) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid Number , Enter a valid one : " << endl;
        cin >> Number;
    }
    return Number;
}
```

## Key Takeaways

- `cin.fail()` detects whether the user entered an invalid data type.
- `cin.clear()` resets the error state of the input stream.
- `cin.ignore()` clears the invalid characters from the input buffer.
- A `while` loop is used to repeatedly prompt the user until a valid number is entered.

Muwafaa Sinjab @Muwafaa-Sinjab