# 13 - Assignment Operators

## Overview
This lesson covers shorthand assignment operators in C++, which combine an arithmetic operation with an assignment in a single step.

## The Operators
| Long Form | Shorthand |
|---|---|
| `A = A + B` | `A += B` |
| `A = A - B` | `A -= B` |
| `A = A * B` | `A *= B` |
| `A = A / B` | `A /= B` |
| `A = A % B` | `A %= B` |

Each shorthand operator takes the current value of the variable, applies the operation with the second value, and stores the result back into the same variable.

## Example
```cpp
int A = 10;
int B = 20;

A += B;   // A = 10 + 20 = 30
A -= B;   // A = 30 - 20 = 10
A *= B;   // A = 10 * 20 = 200
A /= B;   // A = 200 / 20 = 10
A %= B;   // A = 10 % 20 = 10
```

## Another Example
```cpp
int x = 5;
int y = 3;

x += 5;   // x = 10
y *= 2;   // y = 6
x -= y;   // x = 4
y /= 2;   // y = 3
```

## Why Use Shorthand Operators
Shorthand assignment operators make code shorter and easier to read, since the variable name only needs to be written once instead of twice. They are widely used in professional C++ code.

## Summary
- `+=`, `-=`, `*=`, `/=`, and `%=` combine an operation with an assignment.
- Each one updates the variable on the left side of the operator.
- They produce the same result as the longer form, but with shorter, cleaner code.
