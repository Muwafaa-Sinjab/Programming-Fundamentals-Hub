# 10 - Arithmetic Operators

## Overview
This lesson covers the basic arithmetic operators in C++, used to perform calculations with numbers.

## The Operators
| Operator | Meaning | Example (A=10, B=20) | Result |
|---|---|---|---|
| `+` | addition | `A + B` | 30 |
| `-` | subtraction | `A - B` | -10 |
| `*` | multiplication | `A * B` | 200 |
| `/` | division | `A / B` | 0 |
| `%` | remainder of division | `A % B` | 10 |

## Example
```cpp
int A = 10;
int B = 20;

cout << "A + B = " << A + B << endl;
cout << "A - B = " << A - B << endl;
cout << "A * B = " << A * B << endl;
cout << "A / B = " << A / B << endl;
cout << "A % B = " << A % B << endl;
```

Output:
```
A + B = 30
A - B = -10
A * B = 200
A / B = 0
A % B = 10
```

## Understanding Integer Division
The result `A / B = 0` may look strange at first. Mathematically, `10 / 20` equals `0.5`, but both `A` and `B` are integers (`int`), so C++ performs integer division and drops the decimal part. The result is rounded down to `0`, not to the nearest whole number.

## Understanding the Remainder Operator
The `%` operator returns what is left over after dividing one integer by another. For `A % B`, C++ divides `10` by `20`; since `10` fits zero full times into `20`, the entire `10` remains, so the result is `10`.

## Summary
- `+`, `-`, `*` work as expected for addition, subtraction, and multiplication.
- `/` performs integer division when both operands are integers, dropping any decimal part.
- `%` returns the remainder of a division between two integers.
