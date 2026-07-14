# 11 - Increment Decrement Operators: ++, --

## Overview
This lesson introduces the increment operator `++` and the decrement operator `--`, which are shortcuts for increasing or decreasing a variable's value by one.

## Basic Usage
```cpp
int a = 10;
int b = 20;

a++;  // increases a by one, becomes 11
b--;  // decreases b by one, becomes 19
```

## Postfix and Prefix Forms
Both operators can be written before or after the variable name.

```cpp
int x = 5;
int y = 5;

x++;   // postfix form
++y;   // prefix form
```

Both `x++` and `++y` end with the same result: each variable increases by one. When used alone on their own line, the postfix form (`a++`) and the prefix form (`++a`) produce the same outcome. Their behavior only becomes different when they are used inside a larger expression, which is covered in the next lesson.

## Comparison with a Regular Assignment
The increment operator is a shorter way of writing an addition.

```cpp
int x = 5;
x = x + 1;   // regular way, x becomes 6

int y = 5;
y++;         // shortcut, y also becomes 6
```

## A Combined Example
```cpp
int num1 = 10;
int num2 = 20;

num1++;   // num1 becomes 11
num2--;   // num2 becomes 19

++num1;   // num1 becomes 12
--num2;   // num2 becomes 18
```

## Summary
- `++` increases a variable's value by one; `--` decreases it by one.
- `a++` is a shortcut for `a = a + 1`, and `b--` is a shortcut for `b = b - 1`.
- Written on their own line, `a++` and `++a` give the same result.
- The difference between postfix and prefix only matters inside larger expressions.
