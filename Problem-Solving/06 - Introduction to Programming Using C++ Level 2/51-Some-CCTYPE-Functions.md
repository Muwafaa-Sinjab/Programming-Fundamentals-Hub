# 51 - Some CCTYPE Functions

## Overview

This video introduces the `<cctype>` library, which contains functions for checking and converting individual characters. It explains how to determine the type of a character and how to change its case.

## Main Topics

### The cctype Library

To use character checking and conversion functions, the `<cctype>` library must be included. These functions are designed to work on single characters, not entire strings.

### Character Conversion

The `toupper()` function converts a lowercase letter to uppercase. The `tolower()` function converts an uppercase letter to lowercase. When these functions are used directly in an output statement, they display the ASCII numeric value of the character. To print the actual letter, the result must be stored in a `char` variable first.

### Character Checking Functions

Several functions start with the prefix `is` to check the type of a character. Common examples include:
- `isupper()`: Checks if a character is uppercase.
- `islower()`: Checks if a character is lowercase.
- `isdigit()`: Checks if a character is a number from 0 to 9.
- `ispunct()`: Checks if a character is a punctuation mark.

### Return Values for Checking Functions

All the checking functions follow the same return logic. If the character does not match the condition, the function returns `0` (which represents false). If the character does match, the function returns any non-zero number (which represents true).

```cpp
// Returns 0 because ';' is not a digit
cout << isdigit(';') << endl; 

// Returns a non-zero number because 'A' is uppercase
cout << isupper('A') << endl; 
```

## Key Takeaways

- The `<cctype>` library provides tools for working with single characters.
- `toupper()` and `tolower()` are used to change the case of a letter.
- Conversion functions return an ASCII number unless the result is assigned to a `char` variable.
- Checking functions return `0` for false and a non-zero number for true.

Muwafaa Sinjab @Muwafaa-Sinjab