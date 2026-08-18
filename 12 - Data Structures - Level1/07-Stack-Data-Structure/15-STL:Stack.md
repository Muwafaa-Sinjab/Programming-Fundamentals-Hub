# 15 - STL: Stack

## Overview
This lesson explains how to use the Stack in the C++ Standard Template Library (STL). It shows the built-in functions that make using a Stack fast and easy.

## Main Topics
### What is STL?
STL stands for **Standard Template Library**. It is a powerful library in C++. It provides ready-made data structures like `Vector`, `Stack`, and `Queue`. Using STL makes programming faster because you do not write the data structure from scratch.

To use the STL Stack, you must include its library: `#include <stack>`

### STL Stack Functions
The STL Stack has several important functions:

- **push(value)**: Adds an item to the top of the Stack. Time Complexity is **O(1)**.
- **top()**: Returns the top item in the Stack. It does **not** remove it. Time Complexity is **O(1)**.
- **pop()**: Removes the top item from the Stack. It does **not** return the value. Time Complexity is **O(1)**.
- **size()**: Returns the number of items in the Stack. Time Complexity is **O(1)**.
- **empty()**: Returns `true` if the Stack is empty. Returns `false` if it has items.

### Example Code
This example creates a Stack of integers. It pushes numbers and then prints them.

```cpp
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // create a stack of int
    stack <int> stkNumbers;

    // push into stack
    stkNumbers.push(10);
    stkNumbers.push(20);
    stkNumbers.push(30);

    // print count
    cout << "\ncount=" << stkNumbers.size() << endl;

    // print and empty the stack
    while (!stkNumbers.empty())
    {
        // print top element
        cout << stkNumbers.top() << "\n";

        // pop top element from stack
        stkNumbers.pop();
    }
    
    return 0;
}
```

The `while` loop runs `n` times, so printing the whole Stack is **O(n)**.

## Key Takeaways
- STL stands for Standard Template Library.
- Use `#include <stack>` to use the STL Stack.
- `push()` adds an item, and `pop()` removes the top item.
- `top()` gets the top item without removing it.
- STL Stack functions like `push` and `pop` are O(1).

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)