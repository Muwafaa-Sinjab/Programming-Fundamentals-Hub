# 07 - Variables

## Overview
This lesson explains variables in C++: what they are, the basic data types used to define them, and the rules for naming them correctly.

## What Is a Variable?
A variable is a place in memory where a program stores data. It can be thought of as a container that holds a value while the program runs.

```cpp
int myAge = 45;
cout << myAge << endl;
```

## Basic Data Types
C++ offers several data types, depending on the kind of value being stored.

**Whole numbers and characters:**
```cpp
int myNumber = 52;     // whole number
char myLetter = 'A';   // single character
```

**Numbers with decimals:**
```cpp
float myFloatNumber = 7.84;    // decimal number
double myDoubleNumber = 21.5;  // decimal number, higher precision
```

**Other types:**
```cpp
bool myBoolean = true;      // true or false only
string myText = "Hello";    // text or a full sentence
```

`double` takes more memory than `float` but stores decimal numbers with more precision. `void` is a special type that represents no value at all.

## Defining a Variable
A variable can be defined in two ways.

Defined and given a value at the same time:
```cpp
int myAge = 45;
```

Defined first, then given a value later:
```cpp
int myAge;
myAge = 45;
```

## Changing a Variable's Value
Once defined, a variable's value can be changed at any point in the program.

```cpp
int myAge = 45;
cout << myAge << endl;  // 45

myAge = 27;
cout << myAge << endl;  // 27
```

Variables can also be used directly in calculations:
```cpp
int x = 4;
int y = 10;
int sum = x + y;   // 14
```

## Naming Rules
A variable name must follow these rules:
- It must start with a letter or an underscore `_` — not a number.
- It cannot contain spaces.
- It is case sensitive, so `age`, `Age`, and `AGE` are three different names.
- It cannot be a reserved word, such as `int` or `for`.
- Each name must be unique within its scope.

Valid names:
```cpp
int studentAge;
string firstName;
```

Invalid names:
```cpp
int 2ndYear;        // starts with a number
float average score; // contains a space
```

## Constants
A constant is a variable whose value cannot be changed after it is set. It is defined using the keyword `const`.

```cpp
const int minutesPerHour = 60;
// minutesPerHour = 70;  // this line would cause an error
```

## Summary
- A variable is a memory location used to store a value.
- Common data types include `int`, `float`, `double`, `char`, `bool`, and `string`.
- A variable can be defined with or without an initial value.
- A variable's value can be changed later in the program, unless it is a constant.
- Variable names must follow specific rules: starting with a letter, no spaces, and being case sensitive.
