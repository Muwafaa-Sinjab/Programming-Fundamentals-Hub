# 14 - Relational Operators

## Overview
This lesson covers relational operators in C++, used to compare two values and produce a true or false result.

## The Operators
| Operator | Meaning | Example (A=10, B=20) | Result |
|---|---|---|---|
| `==` | equal to | `A == B` | false (0) |
| `!=` | not equal to | `A != B` | true (1) |
| `>` | greater than | `A > B` | false (0) |
| `<` | less than | `A < B` | true (1) |
| `>=` | greater than or equal to | `A >= B` | false (0) |
| `<=` | less than or equal to | `A <= B` | true (1) |

In C++, a comparison result is shown as `1` for true and `0` for false.

## Example
```cpp
int A = 10;
int B = 20;

cout << (A == B) << endl;  // 0
cout << (A != B) << endl;  // 1
cout << (A > B) << endl;   // 0
cout << (A < B) << endl;   // 1
```

With equal values, the results change accordingly:
```cpp
int A = 20;
int B = 20;

cout << (A == B) << endl;  // 1
cout << (A >= B) << endl;  // 1
cout << (A <= B) << endl;  // 1
```

## A Common Mistake: = vs ==
`=` is the assignment operator; it stores a value in a variable. `==` is the comparison operator; it checks whether two values are equal. Confusing them is a common error.

```cpp
// Wrong: this assigns B's value to A, not a comparison
if (A = B) {
    cout << "A equals B" << endl;
}

// Correct: this compares A and B
if (A == B) {
    cout << "A equals B" << endl;
}
```

## Summary
- Relational operators compare two values and return `1` (true) or `0` (false).
- The available operators are `==`, `!=`, `>`, `<`, `>=`, and `<=`.
- `=` assigns a value, while `==` compares two values — these should never be confused.
