# 17 - Vector Data Structure

## Overview
This lesson explains the Vector data structure. It compares Vector to Stack and Array. It shows that Vector is similar to Stack but allows direct access to items like an Array.

## Main Topics
### What is a Vector?
A Vector is a dynamic data structure in C++. It is very similar to a Stack, but it is wider. This means a Vector has more methods and features than a Stack. A Stack is actually built using a Vector in STL.

### Vector vs Stack
The main difference between Vector and Stack is how you access items:

- **Stack**: You can only access the top item. You cannot access items in the middle directly.
- **Vector**: You can access any item directly using an index, just like an Array.

### Vector Acts Like an Array
You can treat a Vector like an Array. You can use brackets `[]` to access items directly by their index.

```cpp
vNumber[2] // Access the 3rd item directly
```

### Example Code
This example shows how to create a Vector, add items, and access an item directly.

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vNumber;

    // Add items to the vector
    vNumber.push_back(10);
    vNumber.push_back(20);
    vNumber.push_back(30);
    vNumber.push_back(40);

    // Access item directly like an array
    cout << "\nElemant 3 = " << vNumber[2] << endl; // print = 30

    return 0;
}
```

We use `push_back()` to add items to the end of the Vector. We use `vNumber[2]` to get the third item directly.

## Key Takeaways
- A Vector is similar to a Stack but has more features.
- You can access items in a Vector directly by index.
- Stack does not allow direct access to items.
- Vector behaves like a Dynamic Array.
- Use `push_back()` to add items to a Vector.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)