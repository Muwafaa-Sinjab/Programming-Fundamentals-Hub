# 15 - Logical Operators

## Overview
This lesson covers logical operators in C++: AND, OR, and NOT. These operators combine or change the result of true/false expressions, and they are the basis of decision-making in programs.

## The Operators
| Operator | Name | Description |
|---|---|---|
| `&&` | AND | Result is true only if both sides are true |
| `\|\|` | OR | Result is true if at least one side is true |
| `!` | NOT | Reverses a value: true becomes false, and false becomes true |

In C++, `true` is represented as `1` and `false` as `0`.

## Example
```cpp
bool a = 1;  // true
bool b = 0;  // false

cout << (a && b) << endl;  // 0
cout << (a || b) << endl;  // 1
cout << (!a) << endl;      // 0
cout << (!b) << endl;      // 1
```

## Common Mistakes

**Logical AND (`&&`) vs. Bitwise AND (`&`)**
Always use `&&` for logical operations. A single `&` does not cause an error, but it performs a different operation (bitwise AND) and can give unexpected results.

```cpp
// Wrong for logic
cout << (a & b);

// Correct
cout << (a && b);
```

**Equality (`==`) vs. Assignment (`=`)**
`==` compares two values; `=` assigns a value. Using `=` by mistake inside a condition is a common bug.

```cpp
int x = 5;

// Wrong: this assigns 7 to x
if (x = 7) { }

// Correct: this compares x to 7
if (x == 7) { }
```

## Operator Precedence
When an expression combines `!`, `&&`, and `||`, C++ evaluates them in a fixed order:
1. `!` (NOT) first
2. `&&` (AND) second
3. `||` (OR) last

Example:
```cpp
bool result = !(5 > 6) || (7 == 7) && !(1 || 0);
```

Step by step:
- `!(5 > 6)` becomes `!(false)`, which is `true`.
- `(7 == 7)` is `true`.
- `(1 || 0)` is `true`, so `!(1 || 0)` is `false`.
- The expression is now: `true || true && false`.
- `&&` runs before `||`, so `true && false` becomes `false`.
- Finally: `true || false` is `true`.

The final result is `1` (true).

## Summary
- `&&` requires both sides to be true.
- `||` requires at least one side to be true.
- `!` reverses a true/false value.
- Use `&&` and `||`, not `&` or `|`, for logical comparisons.
- `!` is evaluated first, then `&&`, then `||`.
