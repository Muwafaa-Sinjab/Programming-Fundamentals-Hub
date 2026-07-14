# 41 - Break Statement

## Overview
This lesson introduces the `break` statement, used to exit a loop immediately once a certain condition is met, without waiting for the loop to finish naturally.

## Basic Example
```cpp
for (int i = 1; i <= 10; i++) {
    cout << "Iteration: " << i << endl;

    if (i == 3) {
        break;
    }
}

cout << "Loop finished" << endl;
```

Output:
```
Iteration: 1
Iteration: 2
Iteration: 3
Loop finished
```

Even though the loop was set to run up to 10, `break` stops it as soon as `i` reaches 3.

## Searching an Array Without break
Without `break`, a loop keeps checking every element, even after the target has already been found.

```cpp
int arr[5] = {10, 20, 30, 40, 50};
int target = 20;

for (int i = 0; i < 5; i++) {
    if (arr[i] == target) {
        cout << "Found at position " << i << endl;
    }
}
```

This checks all 5 positions, even though the value was already found at position 1.

## Searching an Array With break
Adding `break` stops the search as soon as the value is found, avoiding unnecessary checks.

```cpp
int arr[5] = {10, 20, 30, 40, 50};
int target = 20;

for (int i = 0; i < 5; i++) {
    if (arr[i] == target) {
        cout << "Found at position " << i << endl;
        break;
    }
}
```

This becomes especially useful with large arrays, where stopping early can save a large number of unnecessary checks.

## How break Works, Step by Step
```cpp
for (int i = 1; i <= 5; i++) {
    cout << "Before: " << i << endl;

    if (i == 3) {
        break;
    }

    cout << "After: " << i << endl;
}
```

Output:
```
Before: 1
After: 1
Before: 2
After: 2
Before: 3
```

When `i` becomes 3, `break` runs immediately after "Before: 3" is printed, so the "After" line never prints for that iteration, and the loop ends completely.

## Summary
- `break` exits a loop immediately, skipping any remaining iterations.
- It is useful for stopping a search as soon as a match is found, avoiding wasted checks.
- Code placed after `break` inside the loop, for that same iteration, never runs.
- `break` works inside `for`, `while`, and `do while` loops.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
