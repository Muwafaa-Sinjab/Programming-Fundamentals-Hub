# 38 - Nested For Loops

## Overview
This lesson introduces nested loops: a `for` loop placed inside another `for` loop, used to build patterns or repeat an action multiple times for every step of an outer loop.

## Basic Structure
```cpp
for (int i = 1; i <= 2; i++) {
    for (int j = 1; j <= 3; j++) {
        cout << "i=" << i << ", j=" << j << endl;
    }
}
```

Output:
```
i=1, j=1
i=1, j=2
i=1, j=3
i=2, j=1
i=2, j=2
i=2, j=3
```

For every single value of `i`, the entire inner loop runs completely from start to finish before `i` moves to its next value.

## Example: A Multiplication Table
```cpp
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        cout << i << " x " << j << " = " << (i * j) << endl;
    }
    cout << "----" << endl;
}
```

Output:
```
1 x 1 = 1
1 x 2 = 2
1 x 3 = 3
----
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
----
3 x 1 = 3
3 x 2 = 6
3 x 3 = 9
----
```

## Example: A Square of Stars
A fixed number of rows and columns produces a simple rectangle of stars.

```cpp
for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= 4; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

Output:
```
* * * *
* * * *
* * * *
* * * *
```

## Example: A Triangle of Stars
Making the inner loop's limit depend on the outer loop's current value creates a growing pattern.

```cpp
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

Output:
```
*
* *
* * *
* * * *
* * * * *
```

Here, the inner loop runs `i` times, so it prints one more star on each new row.

## Summary
- A nested loop is a `for` loop placed inside another `for` loop.
- For each single step of the outer loop, the inner loop runs completely.
- Fixed inner loop limits create rectangular patterns; using the outer loop's variable as the inner loop's limit creates growing patterns, such as a triangle.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
