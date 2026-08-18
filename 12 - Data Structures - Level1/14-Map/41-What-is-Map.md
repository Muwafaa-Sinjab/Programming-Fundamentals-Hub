```markdown
# 41 - What is Map?

## Overview
This lesson explains the Map data structure in C++. It shows that a Map stores data using keys and values. It also explains how a Map works inside and provides an example using `std::map` from the STL.

## Main Topics
### What is a Map?
A Map is an **associative container**. This means it connects a **Key** to a **Value**. The data is stored in key-value pairs. Every key in a Map must be **unique**. If you add a key that already exists, the Map updates its value. In other languages, a Map is often called a *dictionary*.

### How a Map Works Internally
In C++ (`std::map`), items are sorted by their keys in ascending order. Inside the memory, a Map is usually built as a **Balanced Binary Search Tree** (like a red-black tree). Because it is balanced and sorted, searching is very fast.

### Time Complexity
Because a Map uses a Balanced Binary Search Tree, operations are efficient:
- **Search, Insert, and Delete**: These take **O(log n)** time. This is much faster than O(n) for large datasets.

### Other Features of std::map
- **Dynamic Sizing**: The Map size changes automatically when you add or remove items.
- **Iterator Support**: You can loop through the items in sorted order.

### Code Example
This example uses a Map to store student names (keys) and their grades (values).

```cpp
#include <iostream>
#include <map>

using namespace std;

int main() {
    // Declare a map with string keys and int values
    map<string, int> studentGrades;

    // Inserting grades for three students
    studentGrades["Ali"] = 77;     // Assigning a grade of 77 to the student "Ali"
    studentGrades["Ahmed"] = 85;   // Assigning a grade of 85 to the student "Ahmed"
    studentGrades["Fadi"] = 95;    // Assigning a grade of 95 to the student "Fadi"

    // Printing all map values
    cout << "\nPrinting all map values..\n\n";
    
    // Iterating over the map
    for (const auto& pair : studentGrades) {
        cout << "Student: " << pair.first << ", Grade: " << pair.second << endl;
    }

    // Finding the grade for a specific student
    string studentName = "Fadi";
    if (studentGrades.find(studentName) != studentGrades.end()) {
        cout << studentName << "'s grade: " << studentGrades[studentName] << endl;
    } else {
        cout << "Grade not found for " << studentName << endl;
    }

    return 0;
}
```

**Code Explanation:**
- `map<string, int> studentGrades;` creates a Map where keys are strings and values are integers.
- `studentGrades["Ali"] = 77;` adds a key `"Ali"` with the value `77`.
- The `for` loop goes through all items. `pair.first` is the key, and `pair.second` is the value.
- `studentGrades.find(studentName)` checks if the key exists in the Map.

## Key Takeaways
- A Map stores data in unique key-value pairs.
- Items in a C++ `std::map` are sorted automatically by their keys.
- A Map is implemented using a Balanced Binary Search Tree.
- Searching, inserting, and deleting take O(log n) time.
- You can use `[]` to add or update values, and `.find()` to search for a key.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)