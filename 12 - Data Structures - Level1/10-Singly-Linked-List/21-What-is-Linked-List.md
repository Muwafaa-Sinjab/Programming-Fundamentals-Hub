# 21 - What is Linked List?

## Overview
This lesson introduces the Linked List data structure. It explains what a Node is and how Nodes connect to each other using pointers. It also explains why Linked Lists are useful.

## Main Topics
### What is a Linked List?
A Linked List is a linear data structure. It is similar to an Array, but it is not an Array. An Array stores items in one continuous block of memory. A Linked List stores items in separate **Nodes** that are connected using pointers. The items can be anywhere in memory.

### Node Parts
A Linked List is made of Nodes. Each Node has two parts:

- **Data**: This stores the actual value. It can be any data type like `int`, `string`, or object.
- **Next (Pointer)**: This stores the memory address of the next Node in the list. It points to the next Node.

### Head and Null
- **Head**: This is a pointer to the first Node in the Linked List. It is the starting point.
- **Null**: The pointer of the last Node points to Null. Null means empty. It shows the end of the Linked List.

### Why Use a Linked List?
A Linked List is a dynamic data structure. You can add and delete items at runtime without knowing the size beforehand. In the C language, there were no Dynamic Arrays. Programmers used Linked Lists to add data dynamically. Linked Lists are also used to build other data structures like Stack and Queue.

## Key Takeaways
- A Linked List is a linear data structure made of connected Nodes.
- Each Node has Data and a Pointer to the next Node.
- The Head points to the first Node.
- The last Node points to Null (end of the list).
- Linked Lists allow you to add and delete data dynamically at runtime.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)