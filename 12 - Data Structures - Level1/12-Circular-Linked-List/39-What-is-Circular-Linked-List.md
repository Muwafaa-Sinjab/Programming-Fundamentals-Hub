# 39 - What is Circular Linked List?

## Overview
This lesson introduces the Circular Linked List. It explains the main difference between a standard Linked List and a Circular Linked List.

## Main Topics
### What is a Circular Linked List?
A Circular Linked List is a variation of a Linked List. In a standard Singly or Doubly Linked List, the last Node points to **NULL**. This marks the end of the list.

In a Circular Linked List, the last Node does **not** point to NULL. Instead, it points back to the **first Node** (the head). This forms a continuous circle of Nodes.

### Advantages of a Circular Linked List
Because the list forms a circle, you can start traversing from any Node and visit all the Nodes in the list. You will eventually return to the starting Node. This is useful for applications that need to loop continuously, like a round-robin scheduler or a carousel.

## Key Takeaways
- In a Circular Linked List, the last Node points to the first Node.
- The list does not end with NULL.
- The Nodes form a continuous circle.
- You can traverse the list from any point and return to the start.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)