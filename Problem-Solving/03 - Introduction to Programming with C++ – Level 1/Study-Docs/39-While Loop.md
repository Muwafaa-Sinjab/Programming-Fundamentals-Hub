# 39 - While Loop

## Overview
This lesson introduces the `while` loop, used when the number of repetitions is not known in advance, unlike a `for` loop, which is used when the count is already known.

## Basic Structure
```cpp
while (condition) {
    // code runs as long as the condition is true
}
```

The condition is checked before every repetition. Something inside the loop must eventually make the condition false, or the loop will repeat forever.

## Comparing For and While
The same result can be produced with either loop.

```cpp
// using for
for (int i = 1; i <= 5; i++) {
    cout << i << endl;
}

// using while
int i = 1;
while (i <= 5) {
    cout << i << endl;
    i++;
}
```

`for` is generally used when the number of repetitions is already known, while `while` is preferred when the loop should continue until some condition is met.

## Validating User Input
A common use of `while` is checking that the user has entered acceptable input, and asking again if not.

```cpp
int number;
cout << "Enter a positive number: ";
cin >> number;

while (number < 0) {
    cout << "Invalid. Enter a positive number: ";
    cin >> number;
}

cout << "You entered: " << number << endl;
```

Here, the loop keeps asking for input until a valid, non-negative number is entered.

## Validating a Range
The same idea can check that a number falls within a specific range.

```cpp
int readNumberInRange(int from, int to) {
    int number;
    cout << "Enter a number between " << from << " and " << to << ": ";
    cin >> number;

    while (number < from || number > to) {
        cout << "Invalid. Enter a number between " << from << " and " << to << ": ";
        cin >> number;
    }

    return number;
}
```

## How the Loop Works, Step by Step
```cpp
int i = 1;
while (i <= 3) {
    cout << "i = " << i << endl;
    i++;
}
```

1. `i = 1`: condition `1 <= 3` is true, so it prints, then `i` becomes 2.
2. `i = 2`: condition `2 <= 3` is true, so it prints, then `i` becomes 3.
3. `i = 3`: condition `3 <= 3` is true, so it prints, then `i` becomes 4.
4. `i = 4`: condition `4 <= 3` is false, so the loop stops.

## Summary
- A `while` loop repeats its code as long as its condition remains true.
- It is especially useful when the number of repetitions is not known in advance, such as validating user input.
- The loop body must eventually change something that affects the condition, to avoid an infinite loop.
- `for` is typically chosen when the repeat count is known; `while` is chosen when the stopping point depends on a condition.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
