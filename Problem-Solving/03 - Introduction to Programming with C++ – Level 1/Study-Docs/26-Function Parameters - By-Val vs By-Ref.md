# 26 - Function Parameters - By-Val vs By-Ref

## Overview
This lesson explains two ways to pass a variable into a function: by value, which sends a copy, and by reference, which sends the original variable itself.

## Passing By Value (Default)
By default, a variable passed into a function is copied. Any change made to it inside the function does not affect the original variable.

```cpp
void changeNumber(int number1) {
    number1 = 7000;
    cout << "inside function: " << number1 << endl;
}

int main() {
    int number1 = 1000;
    changeNumber(number1);
    cout << "after function call: " << number1 << endl;
    return 0;
}
```

Output:
```
inside function: 7000
after function call: 1000
```

The original `number1` in `main` stays 1000, because only a copy was changed inside the function.

## Passing By Reference
Adding `&` after the parameter type makes the function work directly with the original variable, instead of a copy.

```cpp
void changeNumber(int &number1) {
    number1 = 7000;
    cout << "inside function: " << number1 << endl;
}

int main() {
    int number1 = 1000;
    changeNumber(number1);
    cout << "after function call: " << number1 << endl;
    return 0;
}
```

Output:
```
inside function: 7000
after function call: 7000
```

This time, the original `number1` is changed, because the function was given direct access to it, not a separate copy.

## Comparison
| Method | Does the original value change? |
|---|---|
| By Value | No |
| By Reference (`&`) | Yes |

## When to Use Each
- Use by value when the original variable should stay protected from changes.
- Use by reference when the function needs to update the original variable, such as in a function that swaps two values.

## Summary
- By value sends a copy of a variable; changes inside the function do not affect the original.
- By reference (using `&`) gives the function direct access to the original variable, so changes persist after the function call.
- The choice depends on whether the original data should be protected or updated.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
