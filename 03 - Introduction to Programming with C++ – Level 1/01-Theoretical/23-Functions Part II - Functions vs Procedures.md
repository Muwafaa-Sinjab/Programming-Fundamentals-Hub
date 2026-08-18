# 23 - Functions Part II - Functions vs Procedures

## Overview
This lesson explains the practical difference between a procedure, which performs an action without returning a value, and a function, which returns a value that can be used afterward.

## Procedure: No Return Value
A procedure is defined with `void` and never sends a value back. It only runs the code inside it.

```cpp
void greet() {
    cout << "This is a procedure, it just runs" << endl;
}

int main() {
    greet();   // runs the code, returns nothing
    return 0;
}
```

## Function: Returns a Value
A function has a specific return type (such as `string`, `int`, or `float`) and uses `return` to send a value back to wherever it was called.

```cpp
string getWelcomeMessage() {
    return "Welcome to the program!";
}

int main() {
    cout << getWelcomeMessage() << endl;   // prints the returned value
    return 0;
}
```

The type written before the function name (`string`, in this case) must match the type of the value returned.

## Using a Returned Value
Since a function produces a value, that value can be stored, printed, or passed into another function.

```cpp
int square(int number) {
    return number * number;
}

int main() {
    int result = square(4);
    cout << result << endl;          // 16
    cout << square(5) << endl;       // 25
    return 0;
}
```

A function's result can also be passed directly into another function, such as `floor(square(4.5))`.

## The Core Difference
- A **procedure** only executes its code; it produces no result to use afterward.
- A **function** executes its code and also returns a value, which can be stored or reused.
- `return` immediately ends the function and sends the value back.

## Summary
- `void` is used for procedures that perform an action without returning anything.
- A function's return type must match the value it returns, using `return`.
- A returned value can be printed, stored in a variable, or passed into another function.
- `return` stops the function immediately once it runs.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
