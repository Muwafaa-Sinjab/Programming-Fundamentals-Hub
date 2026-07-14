# 25 - Variable Scope - Local vs Global Variables

## Overview
This lesson explains the difference between local and global variables in C++, and how scope determines where a variable can be accessed and how long it stays in memory.

## Local Variables
A local variable is defined inside a function. It can only be accessed within that same function, and it is removed from memory once the function finishes running.

```cpp
void myFunction() {
    int x = 500;
    cout << "x inside myFunction: " << x << endl;
}

int main() {
    int x = 10;
    cout << "x inside main: " << x << endl;
    myFunction();
    return 0;
}
```

Here, two separate variables are both named `x`: one local to `main`, and one local to `myFunction`. There is no conflict, because each one belongs to its own scope.

## Global Variables
A global variable is defined outside all functions, usually near the top of the file. It can be accessed and changed from any function in the program, and it stays in memory for as long as the program runs.

```cpp
int x = 300;   // global variable

void myFunction() {
    cout << "global x inside myFunction: " << ::x << endl;
}

int main() {
    int x = 10;
    cout << "local x inside main: " << x << endl;
    cout << "global x inside main: " << ::x << endl;
    myFunction();
    return 0;
}
```

The `::` symbol is used before the variable name to reach the global variable, when a local variable with the same name exists in the current scope.

## Lifetime of a Variable
- A local variable exists only while its function is running, and disappears once the function ends.
- A global variable exists for the entire time the program is running.

## Key Points
- Scope determines which parts of the code can see or change a variable.
- The same variable name can be used both locally and globally without conflict, since each has its own separate scope.
- Using too many global variables is generally discouraged; local variables are usually easier to maintain and less likely to cause errors.

## Summary
- A local variable is defined inside a function and exists only during that function's execution.
- A global variable is defined outside all functions and exists for the whole program.
- `::variableName` is used to access a global variable when a local variable shares the same name.
- Local variables are generally preferred over global ones for cleaner, more reliable code.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
