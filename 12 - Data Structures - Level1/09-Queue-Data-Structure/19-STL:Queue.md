# 19 - STL: Queue

## Overview
This lesson explains how to use the Queue in the C++ Standard Template Library (STL). It shows the built-in functions for Queue and gives an example.

## Main Topics
### STL Queue Functions
To use the STL Queue, you must include its library: `#include <queue>`. The STL Queue has several important functions:

- **push(value)**: Adds an item to the back of the Queue.
- **front()**: Returns the first item in the Queue. It does **not** remove it.
- **back()**: Returns the last item in the Queue. It does **not** remove it.
- **pop()**: Removes the first item from the Queue. It does **not** return the value.
- **size()**: Returns the number of items in the Queue.
- **empty()**: Returns `true` if the Queue is empty.

### Example Code
This example creates a Queue, pushes numbers, and prints the front and back items. Then it prints all items.

```cpp
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // Queue container declaration
    queue<int> MyQueue;

    // pushing elements into queue
    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);

    cout << "\nCount: " << MyQueue.size();
    cout << "\nFront: " << MyQueue.front();
    cout << "\nBack: " << MyQueue.back() << endl;

    cout << "\nMyQueue = ";
    while (!MyQueue.empty())
    {
        cout << MyQueue.front() << " ";
        MyQueue.pop();
    }

    return 0;
}
```

### Queue Swap
Like Stack, you can swap two Queues. The `swap()` function exchanges the items of `MyQueue1` and `MyQueue2`.

```cpp
MyQueue1.swap(MyQueue2);
```

## Key Takeaways
- Use `#include <queue>` to use the STL Queue.
- `push()` adds an item to the back of the Queue.
- `front()` gets the first item, and `back()` gets the last item.
- `pop()` removes the first item from the Queue.
- You can use `swap()` to exchange the items of two Queues.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)