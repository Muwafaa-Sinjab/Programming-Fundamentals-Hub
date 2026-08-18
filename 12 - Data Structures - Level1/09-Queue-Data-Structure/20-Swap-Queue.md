# 20 - Swap Queue

## Overview
This lesson explains the Queue Swap operation. It shows how to exchange the contents of two queues using the `swap()` function in C++ STL.

## Main Topics
### What is Queue Swap?
Queue Swap means exchanging the items of two Queues. Queue1 takes the items of Queue2, and Queue2 takes the items of Queue1. This works exactly like Stack Swap.

### Example Code
This code creates two Queues, fills them with numbers, and then swaps them.

```cpp
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // queue container declaration
    queue<int> MyQueue1;
    queue<int> MyQueue2;

    // pushing elements into first queue
    MyQueue1.push(10);
    MyQueue1.push(20);
    MyQueue1.push(30);
    MyQueue1.push(40);

    // pushing elements into 2nd queue
    MyQueue2.push(50);
    MyQueue2.push(60);
    MyQueue2.push(70);
    MyQueue2.push(80);

    // using swap() function to swap elements of queues
    MyQueue1.swap(MyQueue2);

    // printing the first queue
    cout << "MyQueue1 = ";
    while (!MyQueue1.empty()) {
        cout << MyQueue1.front() << " ";
        MyQueue1.pop();
    }

    // printing the second queue
    cout << endl << "MyQueue2 = ";
    while (!MyQueue2.empty()) {
        cout << MyQueue2.front() << " ";
        MyQueue2.pop();
    }

    return 0;
}
```

After the swap, `MyQueue1` contains the items of `MyQueue2` (50, 60, 70, 80). `MyQueue2` contains the items of `MyQueue1` (10, 20, 30, 40).

## Key Takeaways
- The `swap()` function exchanges the items of two Queues.
- After swap, Queue1 has Queue2's items, and Queue2 has Queue1's items.
- Queue Swap works the same way as Stack Swap.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)