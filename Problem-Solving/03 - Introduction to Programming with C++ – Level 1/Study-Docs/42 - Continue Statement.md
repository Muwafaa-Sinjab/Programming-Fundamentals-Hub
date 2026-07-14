# 42 - Continue Statement

## Overview
This lesson introduces the `continue` statement, used to skip the rest of the current loop iteration and move directly to the next one.

## Continue vs. Break
- `break` exits the loop completely.
- `continue` skips only the current repetition and moves on to the next one; the loop itself keeps running.

```cpp
// continue: skips i == 3, but keeps looping
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        continue;
    }
    cout << "i = " << i << endl;
}
// output: 1, 2, 4, 5

// break: stops completely at i == 3
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        break;
    }
    cout << "i = " << i << endl;
}
// output: 1, 2
```

## Example: Printing Only Even Numbers
```cpp
for (int i = 1; i <= 10; i++) {
    if (i % 2 != 0) {
        continue;   // skip odd numbers
    }
    cout << i << " ";
}
```

Output:
```
2 4 6 8 10
```

## Example: Skipping Values Above a Limit
```cpp
int sum = 0;
int number;

for (int i = 1; i <= 5; i++) {
    cout << "Enter number " << i << ": ";
    cin >> number;

    if (number > 50) {
        cout << "Skipped, number is above 50" << endl;
        continue;
    }

    sum = sum + number;
    cout << "Current sum: " << sum << endl;
}

cout << "Final sum: " << sum << endl;
```

Any number entered above 50 is skipped, and the addition line never runs for that value.

## How continue Works, Step by Step
```cpp
for (int i = 1; i <= 4; i++) {
    cout << "Before: " << i << endl;

    if (i == 2) {
        continue;
    }

    cout << "After: " << i << endl;
}
```

Output:
```
Before: 1
After: 1
Before: 2
Before: 3
After: 3
Before: 4
After: 4
```

When `i` equals 2, `continue` runs right after "Before: 2" is printed, so "After: 2" is skipped, and the loop moves on to `i = 3`.

## Summary
- `continue` skips the remaining code in the current iteration and moves to the next one.
- Unlike `break`, `continue` does not stop the loop; it only skips the current repetition.
- It is useful for filtering out values that should not be processed, while still continuing to check the rest.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
