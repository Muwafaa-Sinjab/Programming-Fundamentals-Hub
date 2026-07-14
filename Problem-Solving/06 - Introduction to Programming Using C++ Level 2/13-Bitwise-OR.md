# 13 - Bitwise | Operator

## Overview

This video introduces the Bitwise OR operator. It explains the difference between this operator and the logical OR, and demonstrates how numbers are compared at the binary level to produce a result.

## Main Topics

### Bitwise OR vs Logical OR

The Bitwise OR operator uses a single vertical bar (`|`), while the logical OR operator uses two (`||`). The logical operator is used for boolean conditions, whereas the Bitwise operator performs calculations on the actual binary digits of numbers.

### How Bitwise OR Works

When using the Bitwise OR operator, decimal numbers are first converted to their binary form. The operator then compares each corresponding bit from the two numbers. If at least one of the two bits is 1, the resulting bit is 1. Only if both bits are 0 does the result become 0. After the comparison, the resulting binary number is converted back to a decimal value.

### Calculation Example

The video demonstrates the operation using the numbers 12 and 25:

```text
  12 = 00001100
  25 = 00011001
  ----------------
  |   = 00011101  (which is 29 in decimal)
```

The result of `12 | 25` is 29. This contrasts with the Bitwise AND operator, which resulted in 8 for the same numbers.

## Key Takeaways

- The Bitwise OR operator is written with a single `|`, unlike the logical `||`.
- It operates by comparing the binary representation of numbers bit by bit.
- A bit result is 1 if at least one of the compared bits is 1.
- The final binary result is converted back to a decimal number.

Muwafaa Sinjab @Muwafaa-Sinjab