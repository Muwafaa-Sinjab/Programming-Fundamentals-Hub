# 30 - What is Doubly Linked List?

## Overview
This lesson introduces the Doubly Linked List. It explains the difference between Singly and Doubly Linked Lists. It shows that a Doubly Linked List has an extra pointer to the previous Node.

## Main Topics
### Singly vs Doubly Linked List
- **Singly Linked List**: Each Node has two parts: Data and a Next Pointer. The Next Pointer points to the next Node. You can only move forward in the list.
- **Doubly Linked List**: Each Node has **three** parts: Data, a Next Pointer, and a Previous Pointer. The Next Pointer points to the next Node. The Previous Pointer points to the previous Node.

### Node Parts in Doubly Linked List
A Node in a Doubly Linked List has three parts:

1. **Data**: Stores the value (like `int`, `string`).
2. **Next Pointer**: Stores the memory address of the next Node. If it is the last Node, it points to `NULL`.
3. **Previous Pointer**: Stores the memory address of the previous Node. If it is the first Node, it points to `NULL`.

### Two-Way Traversal
Because of the Previous Pointer, you can move in both directions in a Doubly Linked List. You can go forward from the Head to the end. You can also go backward from the end to the Head. This is the main advantage over a Singly Linked List.

## Key Takeaways
- A Doubly Linked List Node has Data, a Next Pointer, and a Previous Pointer.
- The Previous Pointer points to the Node before the current one.
- You can traverse (move) forward and backward in a Doubly Linked List.
- A Doubly Linked List needs more memory than a Singly Linked List because of the extra pointer.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)