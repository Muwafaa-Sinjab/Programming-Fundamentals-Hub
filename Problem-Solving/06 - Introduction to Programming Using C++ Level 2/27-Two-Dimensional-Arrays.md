# 27 - Two Dimensional Arrays

## Overview

This video introduces two-dimensional arrays, which are structured like a grid or matrix. It explains how to declare, initialize, and access data organized in rows and columns.

## Main Topics

### Concept and Syntax

A two-dimensional array is defined by specifying the number of rows and the number of columns. The first bracket in the declaration represents the rows, and the second bracket represents the columns. During initialization, data is grouped inside nested curly braces, where each inner brace represents a single row.

```cpp
int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
```

### Accessing Elements

To read or modify an element, two indexes are required. The first index specifies the row number, and the second index specifies the column number. For example, `arr[1][2]` accesses the element located in the second row and the third column.

### Iterating and Printing

Because the data is organized in two dimensions, printing the entire array requires nested loops. The outer loop iterates through each row, while the inner loop iterates through each column within that row. Formatting tools like `setw` can be used inside the loops to align the output into a clean table structure.

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
```

## Key Takeaways

- Two-dimensional arrays store data in a grid format consisting of rows and columns.
- The syntax requires two brackets: `arrayName[rows][columns]`.
- Accessing an element requires both a row index and a column index.
- Nested loops are necessary to traverse, print, or process 2D arrays.

Muwafaa Sinjab @Muwafaa-Sinjab