# 08 - User Inputs

## Overview
This lesson explains how to read data entered by the user and store it in a variable, using the `cin` object.

## What Is cin?
`cin` is used to read data from the keyboard. It works opposite to `cout`:
- `cout` sends data out to the screen.
- `cin` receives data from the user.

```cpp
int number;
cin >> number;
cout << "You entered: " << number << endl;
```

The arrow `>>` points toward the variable, showing that the value flows into it from the user.

## Reading Different Types of Data
`cin` can read different data types, depending on the variable used.

```cpp
char myChar;
cout << "Enter a character: ";
cin >> myChar;

int myNumber;
cout << "Enter a number: ";
cin >> myNumber;
```

The variable type should match the kind of data expected. Use `int` for whole numbers, `string` for text, and `char` for a single character.

## Reading Multiple Values
More than one variable can be read in a single line by chaining `cin`.

```cpp
char myChar;
int myNumber;

cout << "Enter a character and a number: ";
cin >> myChar >> myNumber;
```

The user can type both values separated by a space, and each one goes into its matching variable.

## A Complete Example
```cpp
int num1, num2, sum;

cout << "Enter first number: ";
cin >> num1;

cout << "Enter second number: ";
cin >> num2;

sum = num1 + num2;
cout << "Sum: " << sum << endl;
```

## Important Practice: Always Prompt the User
Before asking for input, it is good practice to print a message explaining what should be entered. Without it, the user will not know what to type.

```cpp
// clear
cout << "Enter your name: ";
cin >> name;

// unclear, no explanation
cin >> name;
```

## Summary
- `cin` reads data typed by the user and stores it in a variable.
- The basic syntax is `cin >> variableName;`.
- Multiple variables can be read in one line using `cin >> var1 >> var2;`.
- The variable type should match the expected input.
- A `cout` message should be shown before `cin`, so the user knows what to enter.
