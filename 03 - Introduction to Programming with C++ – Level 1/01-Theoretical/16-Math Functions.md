# 16 - Math Functions

## Overview
This lesson covers common mathematical functions available in the `<cmath>` library, used to perform calculations that go beyond the basic arithmetic operators.

## Including the Library
These functions require the `<cmath>` header.

```cpp
#include <cmath>
```

## sqrt
`sqrt()` returns the square root of a number.

```cpp
cout << sqrt(25) << endl;   // 5
```

## pow
`pow(base, exponent)` raises a number to a given power.

```cpp
cout << pow(2, 3) << endl;  // 8, since 2 * 2 * 2 = 8
```

## round
`round()` rounds a decimal number to the nearest whole number.

```cpp
cout << round(4.4) << endl;  // 4
cout << round(4.6) << endl;  // 5
```

## ceil and floor
`ceil()` rounds a number up to the nearest whole number, while `floor()` rounds it down.

```cpp
cout << ceil(4.1) << endl;   // 5
cout << floor(4.9) << endl;  // 4
```

The difference from `round()` is that `ceil()` always rounds up and `floor()` always rounds down, regardless of how close the decimal part is.

## abs
`abs()` returns the absolute value of a number, removing its negative sign if it has one.

```cpp
cout << abs(-7) << endl;   // 7
cout << abs(7) << endl;    // 7
```

## Summary
- `sqrt()` calculates a square root.
- `pow()` raises a number to a power.
- `round()` rounds to the nearest whole number.
- `ceil()` always rounds up; `floor()` always rounds down.
- `abs()` returns a number without its negative sign.
- These functions require including `<cmath>`.
