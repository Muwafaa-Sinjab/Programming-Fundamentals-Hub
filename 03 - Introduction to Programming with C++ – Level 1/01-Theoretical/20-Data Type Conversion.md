# 20 - Data Type Conversion

## Overview
This lesson explains data type conversion (also called casting): changing a value from one data type to another.

## Implicit vs Explicit Conversion
- **Implicit conversion** happens automatically, without the programmer writing anything special.
- **Explicit conversion** is done manually by the programmer, using a cast.

```cpp
double num2 = 18.99;
int num1;

num1 = num2;          // implicit conversion, num1 becomes 18
num1 = (int)num2;     // explicit conversion, C-style
num1 = int(num2);     // explicit conversion, function style
```

Both explicit forms above give the same result as the implicit one, but they make it clear that a conversion is intended.

## Type Size and Data Loss
Data types can be ranked from larger to smaller, roughly: `long double`, `double`, `float`, `long`, `int`, `short`, `char`. Converting from a larger type to a smaller one can lose information, such as the decimal part of a number. Converting from a smaller type to a larger one is safe and does not lose data.

## Converting Between String and Numbers
Special functions handle conversion between `string` and numeric types.

Converting a string to a number:
```cpp
string str = "123.456";

int numInt = stoi(str);       // 123
float numFloat = stof(str);   // 123.456
double numDouble = stod(str); // 123.456
```

Converting a number to a string:
```cpp
int num1 = 123;
string str1 = to_string(num1);   // "123"
```

## A Common Mistake
A string cannot be used directly in arithmetic. It must first be converted to a number.

```cpp
string str = "123";

// Wrong
int result = str + 5;

// Correct
int num = stoi(str);
int result = num + 5;   // 128
```

Relying only on implicit conversion, without being aware of it, can also cause unexpected results when converting decimals to whole numbers, since the decimal part is simply dropped.

```cpp
double num = 13.6;
int result = num;       // becomes 13, not rounded
```

## Summary
- Implicit conversion happens automatically; explicit conversion is written manually with a cast.
- Converting from a larger type to a smaller one can lose data, such as decimal digits.
- `stoi()`, `stof()`, and `stod()` convert a string to a number; `to_string()` converts a number to a string.
- Arithmetic cannot be performed directly on a string; it must be converted to a number first.
