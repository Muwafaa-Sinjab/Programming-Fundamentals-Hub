# 24 - Function Parameters

## Overview
This lesson explains parameters: a way to send data into a function from the outside, making the function more flexible and reusable.

## Why Use Parameters
Instead of a function working with fixed, unchanging values, parameters let it work with different data every time it is called.

```cpp
int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    cout << sum(10, 20) << endl;   // 30
    cout << sum(5, 7) << endl;     // 12
    cout << sum(3, 4) << endl;     // 7
    return 0;
}
```

The same function is reused multiple times, each time with different values passed in.

## Reading Input Outside the Function
For a function that returns a value, it is better practice to read input in `main` and pass the result in as a parameter, rather than using `cin` inside the function itself.

```cpp
int sum(int n1, int n2) {
    return n1 + n2;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << sum(a, b) << endl;
    return 0;
}
```

This keeps the function focused only on its calculation, while input and output stay in `main`.

## How Parameters Work
- A function can accept any number of parameters, separated by commas.
- When calling the function, the values must be passed in the same order as the parameters were declared.
- Parameters behave the same way as the built-in math functions used earlier, such as `sqrt()`: a value goes in, and a result comes out.

## Key Points
- Parameters allow a function to handle different data each time it runs.
- A function focused on calculation should avoid `cin`/`cout` inside it; reading and printing should happen in `main`.
- Moving repeated logic into a parameterized function keeps code organized and reusable.
- Each function should be responsible for one clear task.

## Summary
- Parameters are values passed into a function so it can work with different data on each call.
- The order of values passed when calling a function must match the order of its declared parameters.
- Value-returning functions are best kept focused on calculation only, with input and output handled outside them.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
