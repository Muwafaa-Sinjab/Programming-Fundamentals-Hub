# 32 - Conditional Else If Statement

## Overview
This lesson introduces `else if`, which allows several conditions to be checked one after another, stopping at the first one that is true.

## Basic Example
```cpp
int time = 15;

if (time < 10) {
    cout << "Good morning" << endl;
} else if (time < 20) {
    cout << "Good day" << endl;
} else {
    cout << "Good evening" << endl;
}
```

With `time = 15`, the output is `Good day`, because the first condition (`time < 10`) is false, but the second one (`time < 20`) is true.

## How It Works Step by Step
1. The first condition is checked. If true, its code runs, and the rest is skipped entirely.
2. If the first condition is false, the next `else if` condition is checked.
3. If none of the conditions are true, the final `else` block runs.

## Why Use else if Instead of Separate if Statements
Using several separate `if` statements checks every condition, even after one has already matched. Using `else if` stops as soon as one condition is true, which is more efficient and avoids unnecessary checks.

```cpp
// Less efficient: both conditions are always checked
if (time < 10) {
    cout << "Good morning" << endl;
}
if (time < 20) {
    cout << "Good day" << endl;
}

// Better: stops at the first true condition
if (time < 10) {
    cout << "Good morning" << endl;
} else if (time < 20) {
    cout << "Good day" << endl;
}
```

## Order Matters
Conditions are checked from top to bottom, so they must be arranged in a logical order.

```cpp
// Wrong order: time < 10 can never be reached
if (time < 20) {
    cout << "Good day" << endl;
} else if (time < 10) {
    cout << "Good morning" << endl;
}

// Correct order
if (time < 10) {
    cout << "Good morning" << endl;
} else if (time < 20) {
    cout << "Good day" << endl;
}
```

## A Grading Example
```cpp
int score;
cout << "Enter score: ";
cin >> score;

if (score >= 90) {
    cout << "A" << endl;
} else if (score >= 80) {
    cout << "B" << endl;
} else if (score >= 70) {
    cout << "C" << endl;
} else {
    cout << "F" << endl;
}
```

## Using else for Unexpected Values
A final `else` is useful for catching values that do not match any expected condition.

```cpp
int time;
cout << "Enter time (0-23): ";
cin >> time;

if (time >= 0 && time < 10) {
    cout << "Good morning" << endl;
} else if (time >= 10 && time < 20) {
    cout << "Good day" << endl;
} else if (time >= 20 && time <= 23) {
    cout << "Good evening" << endl;
} else {
    cout << "Invalid time" << endl;
}
```

## Summary
- `else if` checks additional conditions only when the earlier ones are false.
- Execution stops at the first condition that is true; the rest are skipped.
- Conditions should be ordered logically, since they are checked from top to bottom.
- A final `else` can catch any case not covered by the earlier conditions.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
