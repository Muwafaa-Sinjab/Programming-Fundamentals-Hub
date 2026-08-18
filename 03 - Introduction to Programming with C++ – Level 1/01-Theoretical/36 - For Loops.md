# 36 - For Loops

## Overview
This lesson introduces the `for` loop, used to repeat a block of code a specific number of times without writing it out manually.

## Basic Structure
```cpp
for (initialization; condition; update) {
    // code to repeat
}
```

- **initialization**: sets the starting value of the counter; it runs only once, at the beginning.
- **condition**: checked before every repetition; the loop continues as long as it is true.
- **update**: changes the counter after each repetition.

## Counting Up
```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << endl;
}
```

Output:
```
1
2
3
4
5
```

## Repeating a Fixed Line
The loop variable does not have to be used inside the loop body.

```cpp
for (int i = 1; i <= 5; i++) {
    cout << "Learning C++" << endl;
}
```

This prints "Learning C++" five times in a row.

## Counting Down
Changing the update step to `i--` makes the loop count backward.

```cpp
for (int i = 5; i >= 1; i--) {
    cout << i << endl;
}
```

Output:
```
5
4
3
2
1
```

## Changing the Step Size
The update step does not have to be 1; it can increase by any amount.

```cpp
// odd numbers from 1 to 9
for (int i = 1; i <= 10; i += 2) {
    cout << i << endl;
}
```

Output:
```
1
3
5
7
9
```

```cpp
// even numbers from 0 to 10
for (int i = 0; i <= 10; i += 2) {
    cout << i << endl;
}
```

Output:
```
0
2
4
6
8
10
```

## How the Loop Works, Step by Step
1. The initialization runs once, setting the starting value.
2. The condition is checked. If true, the loop body runs; if false, the loop ends.
3. After the body runs, the update step changes the counter.
4. The condition is checked again, and the process repeats until it becomes false.

## Summary
- A `for` loop repeats code a set number of times, controlled by initialization, a condition, and an update step.
- The condition is checked before every repetition; the loop stops once it becomes false.
- The update step can increase, decrease, or change by any amount, allowing counting up, counting down, or skipping values.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
