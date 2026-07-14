# 25 - String And Char Format (Printf)

## Overview

This video explains how to format and print strings and single characters using the `printf` function. It highlights the limitations of `printf` with standard C++ strings and shows the correct methods to display text.

## Main Topics

### String Limitation in Printf

The `printf` function does not directly support the standard C++ `string` type. Because `printf` originates from the C language, it expects strings to be handled as arrays of characters rather than string objects.

### The %s Placeholder

To print text, the `%s` placeholder is used inside the format string. For this to work, the text must be stored in a `char` array.

```cpp
char Name[] = "Mohammed Abu-Hadhoud";
printf("Dear %s, How are you ? \n", Name);
```

### Using the .c_str() Method

If a standard `string` variable is already being used in the program, it can still be printed with `printf` by adding the `.c_str()` method. This method converts the string object into a character array format that `printf` can read.

```cpp
string Name = "Abdelrahman";
printf("%s\n", Name.c_str());
```

### Character Formatting (%c)

A single character is printed using the `%c` placeholder. Similar to integers, the width of the character output can be controlled. By using `%*c`, a number can be passed to determine the spacing before the character is printed.

```cpp
char c = 'S';
printf("Setting the width of c :%*c \n", 3, c); // Prints:   S
```

## Key Takeaways

- The `%s` placeholder is used to print strings in `printf`.
- `printf` requires strings to be stored as `char` arrays, not standard `string` objects.
- The `.c_str()` method converts a standard `string` so it can be used with `printf`.
- The `%c` placeholder is used for printing single characters, and `%*c` controls its output width.

Muwafaa Sinjab @Muwafaa-Sinjab