# 46 - Access Elements

## Overview

This video explains how to access elements inside a vector using two different methods. It highlights the key differences in how each method behaves when an invalid index is requested.

## Main Topics

### Vectors as Arrays

Vectors can be accessed using indexing techniques similar to standard arrays. There are two primary ways to retrieve an element at a specific position.

### Accessing with at()

The first method uses the `.at(index)` function. This is a safe and controlled way to access data. If an index is provided that is outside the valid range of the vector, the program throws an exception. This stops the execution but makes it possible to catch and handle the error using a `try-catch` block.

### Accessing with the [ ] Operator

The second method uses the standard bracket notation `vector[index]`. While this syntax is shorter, it does not perform bounds checking. If an invalid index is used, the program does not throw an exception. Instead, it results in undefined behavior, which typically outputs useless garbage data or causes a silent failure in the program.

```cpp
vector<int> num{ 1, 2, 3, 4, 5 };

cout << num.at(0); // Prints: 1
cout << num[0];    // Prints: 1

// num.at(5);      // Throws an exception and stops
// num[5];         // Outputs garbage data, no exception
```

## Key Takeaways

- Both `at()` and `[ ]` return the element at a specified index.
- The `at()` function throws a catchable exception when an index is out of bounds.
- The `[ ]` operator leads to undefined behavior and garbage output on invalid indexes.
- Using `at()` is the preferred method when safe access and error handling are required.

Muwafaa Sinjab @Muwafaa-Sinjab