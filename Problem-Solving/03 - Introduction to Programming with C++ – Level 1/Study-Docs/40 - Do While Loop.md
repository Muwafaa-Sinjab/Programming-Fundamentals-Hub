# 40 - Do While Loop

## Overview
This lesson introduces the `do while` loop, which runs its code at least once before checking the condition, unlike `while`, which checks the condition first.

## Basic Structure
```cpp
do {
    // runs at least once
} while (condition);
```

- The code inside `do { }` always runs the first time, regardless of the condition.
- After that first run, the condition is checked to decide whether to repeat.

## While vs. Do While
```cpp
int i = 6;

// while: condition checked first
while (i <= 5) {
    cout << "Hello" << endl;
    i++;
}
// prints nothing, since 6 <= 5 is false from the start

// do while: code runs first
i = 6;
do {
    cout << "Hello" << endl;
    i++;
} while (i <= 5);
// prints "Hello" once, even though the condition is false
```

This shows the key difference: `while` may never run its body at all, but `do while` always runs it at least once.

## Validating Input with Do While
`do while` is a natural fit for reading input, since the first read must always happen before it can be checked.

```cpp
int readNumberInRange(int from, int to) {
    int number;

    do {
        cout << "Enter a number between " << from << " and " << to << ": ";
        cin >> number;
    } while (number < from || number > to);

    return number;
}
```

Compared to writing the same logic with `while`, this avoids repeating the `cout`/`cin` lines both before and inside the loop.

## How the Loop Works, Step by Step
```cpp
int i = 1;
do {
    cout << "i = " << i << endl;
    i++;
} while (i <= 3);
```

1. Runs with `i = 1`: prints "i = 1", then `i` becomes 2.
2. Checks `2 <= 3`, which is true, so it runs again.
3. Runs with `i = 2`: prints "i = 2", then `i` becomes 3.
4. Checks `3 <= 3`, which is true, so it runs again.
5. Runs with `i = 3`: prints "i = 3", then `i` becomes 4.
6. Checks `4 <= 3`, which is false, so the loop stops.

## Choosing Between the Loop Types
- Use `for` when the number of repetitions is known in advance.
- Use `while` when the loop might not need to run at all, depending on the condition.
- Use `do while` when the code must run at least once, no matter what.

## Summary
- `do while` always executes its body at least once before checking the condition.
- `while` checks its condition first, and may skip its body entirely.
- `do while` is especially useful for reading and validating input, since the first attempt always needs to happen before it can be checked.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
