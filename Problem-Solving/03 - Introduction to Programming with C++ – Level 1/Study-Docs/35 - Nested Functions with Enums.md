# 35 - Nested Functions with Enums

## Overview
This lesson combines several ideas from previous lessons: functions that return an enum, and calling one function directly inside another. Together, they help build a program made of small, focused pieces.

## What Are Nested Function Calls?
A nested function call happens when the result of one function is used directly as input to another, instead of storing it in a variable first.

```cpp
cout << GetDayName(ReadDay()) << endl;
```

Here, `ReadDay()` runs first, and its result is passed directly into `GetDayName()`.

## A Function That Returns an Enum
A function can have an enum as its return type, just like it can return an `int` or a `string`.

```cpp
enum Day {
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4,
    THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
};

Day readDay() {
    int number;
    cin >> number;
    return (Day)number;
}
```

## Splitting the Program into Small Functions
Each function is responsible for one clear task: showing a menu, reading input, or converting a value into text.

```cpp
void showMenu() {
    cout << "(1) Sunday" << endl;
    cout << "(2) Monday" << endl;
    cout << "(3) Tuesday" << endl;
    cout << "Enter day number: ";
}

Day readDay() {
    int number;
    cin >> number;
    return (Day)number;
}

string getDayName(Day day) {
    switch (day) {
        case SUNDAY: return "Sunday";
        case MONDAY: return "Monday";
        case TUESDAY: return "Tuesday";
        default: return "Unknown day";
    }
}
```

## Putting It All Together
```cpp
int main() {
    showMenu();
    cout << "Today is " << getDayName(readDay()) << endl;
    return 0;
}
```

Step by step:
1. `showMenu()` displays the options.
2. `readDay()` reads a number and converts it into a `Day` value.
3. `getDayName()` takes that `Day` value and returns its name as text.
4. The result is printed directly, without storing it in an extra variable.

## Why Organize Code This Way
- Each function has a single, clear responsibility.
- Functions like `readDay()` and `getDayName()` can be reused elsewhere in the program.
- The `main` function stays short and easy to follow, since the details are handled inside smaller functions.

## Summary
- Functions can return enum values, not just basic types.
- The result of one function can be passed directly into another, without an extra variable.
- Splitting a program into small functions, each with one job, makes it easier to read, reuse, and maintain.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
