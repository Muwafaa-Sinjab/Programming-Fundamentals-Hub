# 19 - Recursion

## Overview

This video introduces the concept of recursion. It explains how a function can call itself, the two required conditions for recursion to work correctly, and how this process interacts with the Call Stack and memory limits.

## Main Topics

### Recursion Concept

Recursion occurs when a function calls itself from within its own code body. Instead of using a loop to repeat a task, the function repeatedly executes by making a new call to itself until a specific condition is met. Each time the function is called, a new space is reserved for it in the Call Stack.

### Base Case and Recursive Call

For recursion to function properly, it must contain two parts:
- **Recursive Call:** The step where the function calls itself to repeat the process.
- **Base Case:** A stopping condition that prevents the function from calling itself infinitely. Without a base case, the function will never stop, leading to a program crash.

```cpp
int factorial(int n) {
    if (n == 1) // base case
        return 1;
    return n * factorial(n - 1); // recursive call
}
```

### Recursion and the Call Stack

Every recursive call is added to the Call Stack. Because the stack has a maximum storage limit, adding too many calls without reaching the base case will exceed this limit. This causes a Stack Overflow error and the program crashes. It is noted that C++ has a larger Call Stack capacity compared to some other languages like Python.

### When to Use Recursion

Recursion should be used carefully. For simple tasks that can be solved with standard loops (`for`, `while`, `do-while`), loops are the preferred choice because they are faster and do not risk filling the Call Stack. Recursion is best suited for complex problems where loops are not sufficient, such as calculating factorials or traversing complex data structures.

## Key Takeaways

- Recursion is a function calling itself to solve a problem by breaking it down.
- A base case is required to stop the recursion and prevent infinite calls.
- Every recursive call consumes memory in the Call Stack.
- Exceeding the stack limit results in a Stack Overflow crash.
- Standard loops are preferred for simple tasks to avoid memory risks.

Muwafaa Sinjab @Muwafaa-Sinjab