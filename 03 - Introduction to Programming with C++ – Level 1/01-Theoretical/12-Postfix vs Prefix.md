# 12 - Postfix vs Prefix: A++ vs ++A

## Overview
This lesson explains the difference between the postfix form (`A++`) and the prefix form (`++A`) when the increment or decrement operator is used inside an assignment.

## Postfix Form
In the postfix form, the operator comes after the variable. The current value is used first, and the variable is updated afterward.

```cpp
int A = 10;
int B = A++;

cout << "A = " << A << endl;  // 11
cout << "B = " << B << endl;  // 10
```

Steps:
1. The current value of `A` (10) is copied into `B`.
2. `A` is then increased by one, becoming 11.

## Prefix Form
In the prefix form, the operator comes before the variable. The variable is updated first, and the new value is used afterward.

```cpp
int A = 10;
int B = ++A;

cout << "A = " << A << endl;  // 11
cout << "B = " << B << endl;  // 11
```

Steps:
1. `A` is increased by one first, becoming 11.
2. The new value of `A` (11) is then copied into `B`.

## Side-by-Side Comparison
```cpp
int x = 5, y = 5;

int a = x++;   // a = 5, x = 6  (postfix: old value used first)
int b = ++y;   // b = 6, y = 6  (prefix: new value used first)
```

The same idea applies to the decrement operator:

```cpp
int m = 8, n = 8;

int p = m--;   // p = 8, m = 7
int q = --n;   // q = 7, n = 7
```

## When the Difference Matters
Both `A++` and `++A` change `A` by exactly one either way. The difference only matters when the result is used immediately, such as in an assignment. On their own separate line, both forms behave the same way.

## Summary
- Postfix (`A++`): the current value is used first, then the variable is updated.
- Prefix (`++A`): the variable is updated first, then the new value is used.
- Both forms change the variable by one in the end.
- The difference only shows up when the operator's result is used directly, such as when assigning it to another variable.
