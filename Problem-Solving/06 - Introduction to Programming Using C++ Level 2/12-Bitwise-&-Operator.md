# 12 - Bitwise & Operator

## Overview

This video introduces the Bitwise AND operator. It explains the difference between this operator and the logical AND operator, and demonstrates how numbers are compared at the binary level to produce a result.

## Main Topics

### Bitwise AND vs Logical AND

The Bitwise AND operator uses a single ampersand (`&`), while the logical AND operator uses two (`&&`). The logical operator is used for boolean conditions, whereas the Bitwise operator is used to perform calculations on the actual binary digits of numbers.

### How Bitwise AND Works

When using the Bitwise AND operator, the decimal numbers are first converted to their binary form. The operator then compares each corresponding bit from the two numbers. In binary logic, 1 represents true and 0 represents false. The result of comparing two bits with `&` is 1 only if both bits are 1; otherwise, the result is 0. After the comparison, the resulting binary number is converted back to a decimal value.

### Calculation Example

The video demonstrates the operation using the numbers 12 and 25:

```
  12 = 00001100
  25 = 00011001
  ----------------
  &   = 00001000  (which is 8 in decimal)
```

The result of `12 & 25` is 8.

## Key Takeaways

- The Bitwise AND operator is written with a single `&`, unlike the logical `&&`.
- It operates by comparing the binary representation of numbers bit by bit.
- A bit result is 1 only if both compared bits are 1.
- The final binary result is converted back to a decimal number.

Muwafaa Sinjab @Muwafaa-Sinjab