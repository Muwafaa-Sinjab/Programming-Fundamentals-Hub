# 23 - Integer Format (Printf)

## Overview

This video explains how to use the `printf` function to format and display integer variables. It covers the basic placeholder syntax, how to control the minimum width of the output, and how to add leading zeros or align text.

## Main Topics

### Basic Integer Printing

The `printf` function uses the `%d` or `%i` placeholder inside a text string to mark where an integer should appear. When the code runs, the placeholders are replaced by the integer variables listed after the comma. The replacement happens in the exact order the variables are provided.

```cpp
printf("The Result of %d + %d = %d \n", Number1, Number2, Number1 + Number2);
```

### Width Specification

The space an integer occupies in the output can be controlled. Writing a number between the percent sign and the `d` sets a minimum width. For example, `%5d` ensures the output takes at least five characters. If the number is shorter, empty spaces are added to the left.

### Leading Zeros

To fill the empty spaces with zeros instead of blank spaces, a zero is placed immediately after the percent sign, such as `%05d`. The notes also mention a dynamic approach using an asterisk (`%0*d`), where the width and the variable are passed as separate arguments after the string.

```cpp
printf("%05d \n", 42);      // Prints: 00042
printf("%0*d \n", 3, Page); // Prints: 001 (if Page is 1)
```

### Text Alignment

By default, formatted integers are aligned to the right within their specified width. Placing a minus sign before the width number, such as `%-5d`, changes the alignment to the left. The remaining width is filled with spaces after the number.

```cpp
printf("%-5d Is my age", 18); // Prints: 18    Is my age
```

## Key Takeaways

- `printf` uses `%d` or `%i` as placeholders for integer variables.
- Variables replace the placeholders in the exact order they are written.
- Width specification defines the minimum number of characters for the output.
- A leading zero in the format specifier fills empty spaces with zeros.
- A minus sign shifts the number alignment to the left.

Muwafaa Sinjab @Muwafaa-Sinjab