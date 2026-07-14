# 24 - Float Format (Printf)

## Overview

This video explains how to use the `printf` function to format and display floating-point numbers. It covers the default printing behavior, how to control the number of decimal places, and how to display numbers in scientific notation.

## Main Topics

### Default Behavior (%f)

When using the `%f` placeholder, `printf` displays floating-point numbers with exactly six digits after the decimal point by default. If the original number has fewer than six decimal places, the remaining spaces are filled with zeros.

### Precision Specification (%.\*f)

The number of decimal places can be controlled by placing a period and a number between the percent sign and the `f`, such as `%.3f`. This limits the output to the specified number of digits. The function automatically rounds the last displayed digit based on the digit that follows it. This formatting works for both `float` and `double` data types and only changes the screen output, not the actual variable value.

```cpp
float PI = 3.14159265;
printf("%.3f \n", PI); // Prints: 3.142
```

### Dynamic Precision

An asterisk can be used instead of a fixed number (`%.*f`). In this case, the number of decimal places is passed as a separate integer argument before the variable. This allows the precision to be decided dynamically while the program is running.

```cpp
printf("%.*f \n", 2, PI); // Prints: 3.14
```

### Scientific Notation (%e)

For very large or very small numbers, the `%e` placeholder is used to display the value in scientific notation. The precision rules (like `%.2e`) can also be applied to control the number of decimal places in the scientific format.

## Key Takeaways

- The `%f` placeholder prints floating-point numbers with six decimal places by default.
- Adding a period and a number (`%.nf`) controls the exact number of decimal places.
- The output is automatically rounded to the specified precision.
- The `%.*f` syntax allows the precision to be set using a variable.
- The `%e` placeholder is used to display numbers in scientific notation.

Muwafaa Sinjab @Muwafaa-Sinjab