# 13 - Matrix Data Structure

## Overview
This lesson explains the Matrix data structure. A Matrix is a Two Dimensional Array. It shows how to access items and explains its Time Complexity.

## Main Topics
### What is a Matrix?
A Matrix is a Two Dimensional Array. It is declared with rows and columns: `arr[Row][Col]`. It is like a table of numbers arranged in rows and columns. You can access any item using two indexes: one for the row and one for the column. Example: `x[1][1] = 6`.

### Time Complexity of Matrix
The Time Complexity depends on how you use the Matrix:

- **Access by Index (O(1))**: If you know the row and column indexes, you can access or update the item very fast. Example: `x[1][0] = 20`. This is **O(1)** Constant Time.
- **Fill or Search using Loops (O(n²))**: If you fill the Matrix or search for an item, you must use two nested `for` loops. One loop is for rows, and one is for columns. This makes the Time Complexity **O(n²)** Quadratic Time.

### Example: Find Number in Matrix
This function searches for a number in a Matrix using two nested loops. The Time Complexity is O(n²).

```cpp
void FindNumberAlgorithmMatrix(short mat[3][4], short Number)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (mat[i][j] == Number)
            {
                cout << "\nIndex " << Number << " is = [" << i << "][" << j << "]\n";
                break;
            }
        }
    }
}
```

## Key Takeaways
- A Matrix is a Two Dimensional Array.
- Items are accessed using row and column indexes.
- Accessing an item by index in a Matrix is O(1).
- Searching in a Matrix needs two nested loops.
- Searching in a Matrix is O(n²) Quadratic Time.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)