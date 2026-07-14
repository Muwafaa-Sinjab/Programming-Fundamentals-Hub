# 30 - Vector of Structure

## Overview

This video explains how to create a vector that holds custom structures instead of standard data types. It focuses on how copying large structures affects program speed and why using references is necessary when iterating through them.

## Main Topics

### Storing Structures in Vectors

Vectors are not limited to basic types like integers or strings. They can store complex data types defined by the developer using structures. For example, a vector can hold multiple employee records, where each record contains multiple fields such as a first name, last name, and salary.

### Adding Struct Elements

To add data to the vector, a temporary structure variable is created and filled with the required information. This temporary variable is then passed to the `push_back` method to be stored in the vector.

### The Cost of Copying Structs

When a ranged loop is used to print or access the vector without the reference symbol, the program creates a completely new copy of the structure for every single element. Because structures can hold multiple variables, this copying process reserves unnecessary memory and makes the program noticeably slower.

### Using References for Efficiency

Placing the `&` symbol before the loop variable solves this problem. Instead of duplicating the entire structure, the program only copies the memory address. This allows direct access to the original data, saves memory, and keeps the program running fast.

```cpp
for (stEmployee & Employee : vEmployee) {
    cout << Employee.FirstName << endl;
}
```

## Key Takeaways

- Vectors can store user-defined structures just like standard data types.
- A temporary struct variable is used to pass data into the vector.
- Iterating without `&` creates a full copy of the struct for every element, wasting memory.
- Using `&` copies only the memory address, maintaining fast performance.

Muwafaa Sinjab @Muwafaa-Sinjab