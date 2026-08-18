# 16 - Stack Swap

## Overview
This lesson explains the Stack Swap operation. It shows how to exchange the contents of two stacks using the `swap()` function in C++ STL.

## Main Topics
### What is Stack Swap?
Stack Swap means exchanging the items of two Stacks. Stack1 takes the items of Stack2, and Stack2 takes the items of Stack1. This is done using the `swap()` function.

### Example Code
This code creates two Stacks, fills them with numbers, and then swaps them.

```cpp
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // stack container declaration
    stack<int> MyStack1;
    stack<int> MyStack2;

    // pushing elements into first stack
    MyStack1.push(10);
    MyStack1.push(20);
    MyStack1.push(30);
    MyStack1.push(40);

    // pushing elements into 2nd stack
    MyStack2.push(50);
    MyStack2.push(60);
    MyStack2.push(70);
    MyStack2.push(80);

    // using swap() function to swap elements of stacks
    MyStack1.swap(MyStack2);

    // printing the first stack
    cout << "MyStack1 = ";
    while (!MyStack1.empty()) {
        cout << MyStack1.top() << " ";
        MyStack1.pop();
    }

    // printing the second stack
    cout << endl << "MyStack2 = ";
    while (!MyStack2.empty()) {
        cout << MyStack2.top() << " ";
        MyStack2.pop();
    }

    return 0;
}
```

After the swap, `MyStack1` contains the items of `MyStack2` (80, 70, 60, 50), and `MyStack2` contains the items of `MyStack1` (40, 30, 20, 10).

## Key Takeaways
- The `swap()` function exchanges the items of two Stacks.
- After swap, Stack1 has Stack2's items, and Stack2 has Stack1's items.
- `swap()` is a member function of the STL Stack.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)