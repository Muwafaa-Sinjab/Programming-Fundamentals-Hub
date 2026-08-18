# 09 - Datatypes Sizes & Ranges

## Overview
This lesson explains that each data type in C++ has a fixed size in memory and a limited range of values it can store. Choosing the right type avoids wasting memory and prevents unexpected errors.

## Basic Types and Their Sizes
Common data types and approximate size in memory:

| Type | Description | Typical Size |
|---|---|---|
| `int` | whole number | 4 bytes |
| `float` | decimal number | 4 bytes |
| `double` | decimal number, higher precision | 8 bytes |
| `char` | single character | 1 byte |
| `bool` | true or false | 1 byte |

Each type also has a maximum and minimum value it can hold. For example, a standard `int` can usually store values roughly between -2,147,483,648 and 2,147,483,647.

## Type Modifiers
Modifiers change the size or range of a type:
- `signed` allows both negative and positive values (this is the default).
- `unsigned` allows only positive values, which increases the maximum positive range.
- `short` reduces the size and range of a type.
- `long` increases the size and range of a type.

```cpp
int age = 25;                     // signed by default
unsigned int positiveNumber = 100;
short int smallNumber = 3000;
long int largeNumber = 2000000;
```

## Choosing the Right Size
Picking a type that matches the actual need avoids wasting memory. For example, a person's age never needs a huge range, so a `short` is enough; using a much larger type like `long long` for it would waste memory without any real benefit.

## Signed vs Unsigned
`signed` allows negative numbers, while `unsigned` does not.

```cpp
int x = -10;              // allowed, int is signed by default
unsigned int y = -10;     // not allowed, unsigned cannot hold negative values
```

## Overflow
Overflow happens when a value goes beyond what a type can store. This produces an unexpected result instead of an error message.

```cpp
short smallVar = 32767;   // the largest value a short can hold
smallVar = smallVar + 1;  // overflow
cout << smallVar << endl; // prints -32768, not 32768
```

## Checking Size and Range in Code
The size of a type can be checked using `sizeof()`.

```cpp
cout << "Size of int: " << sizeof(int) << " bytes" << endl;
cout << "Size of double: " << sizeof(double) << " bytes" << endl;
```

The `<limits>` library can be used to check the exact minimum and maximum values a type supports.

```cpp
#include <limits>
cout << "int range: " << numeric_limits<int>::min()
     << " to " << numeric_limits<int>::max() << endl;
```

## Summary
- Every data type has a fixed size and a limited range of values.
- Modifiers such as `signed`, `unsigned`, `short`, and `long` adjust size and range.
- `unsigned` types cannot store negative numbers.
- Overflow occurs when a value exceeds the range of its type, producing an unexpected result.
- `sizeof()` and `numeric_limits` can be used to check a type's size and range in code.
- The type chosen for a variable should match the actual range of values it needs to store.
