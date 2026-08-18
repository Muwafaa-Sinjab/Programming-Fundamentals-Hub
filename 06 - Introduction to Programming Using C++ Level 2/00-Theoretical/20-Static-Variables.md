# 20 - Static Variables

## Overview

This video explains the difference between normal local variables and static variables inside a function. It covers how static variables retain their value across multiple function calls, where they are stored in memory, and why they are useful.

## Main Topics

### Normal Local Variables

A normal local variable is created when a function starts and is automatically destroyed when the function ends. Because of this, every time the function is called again, the variable is reinitialized to its original starting value.

### Static Variables Lifecycle

A static variable is declared using the `static` keyword. Unlike normal variables, it is initialized only once during the very first function call. When the function ends, the static variable is not destroyed. It retains its last value, and the next time the function is called, execution continues using that saved value.

```cpp
void MyFunctionStatic() {
    static int Number = 1; // Initialized only once
    cout << Number << endl;
    Number++;
}
```

### Memory Allocation

Normal local variables are stored in the Stack memory. Static variables, however, are stored in a different area called the Data Segment. This is why their value persists throughout the entire life of the program. While they behave like global variables in terms of lifespan, their scope remains limited to the inside of the function.

### Practical Use Case

A common use for static variables is tracking how many times a function has been called. This approach is preferred over using global variables. Global variables can be accessed and modified from anywhere in the program, which can cause unexpected bugs and make debugging difficult. A static variable restricts access, keeping the data safe and manageable.

## Key Takeaways

- Normal local variables are destroyed and reset every time a function ends.
- Static variables are initialized only once and retain their value between calls.
- Static variables are stored in the Data Segment, not the Stack.
- They offer a safer alternative to global variables for tracking function-level data.

Muwafaa Sinjab @Muwafaa-Sinjab