# 11 - Binary Data Structure: Real Examples

## Overview
This lesson shows a real-world example of using Binary as a data structure. It uses bank permissions to explain how Binary saves memory space and makes checking permissions very fast.

## Main Topics
### Storing Permissions with Binary
In a bank system, a user can have many permissions (for example, 79 permissions). Instead of storing each permission in a separate variable, you can store all of them in one integer number using Binary. Each bit in the integer represents one permission.

### Space Complexity Example
If you use a separate variable for each permission, you use a lot of memory space. By using one integer with Binary, you store all 79 permissions in one small int. This saves a lot of memory. This is an excellent example of optimizing Space Complexity.

### Time Complexity Example
To check if a user has a specific permission, you use the Bitwise AND operator (`&`).

```cpp
if ((Permission & this->Permissions) == Permission)
    return true;
else
    return false;
```

This operation checks the permission in one step. The Time Complexity is **O(1)**. It is extremely fast.

If you use another way, like a `for` loop to check an array of permissions, the Time Complexity would be O(n). Binary makes the program much faster.

## Key Takeaways
- You can use Binary to store many values in one integer.
- Storing permissions in one integer saves memory space.
- Using Bitwise AND (`&`) to check permissions is O(1).
- Checking permissions with a loop is O(n).
- Binary Data Structure makes programs fast and memory-efficient.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)