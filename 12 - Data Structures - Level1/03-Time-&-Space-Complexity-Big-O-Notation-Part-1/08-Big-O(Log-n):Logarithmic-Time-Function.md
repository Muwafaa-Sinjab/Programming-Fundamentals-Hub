# 08 - Big O(Log n): Logarithmic Time Function

## Overview

This lesson explains Big O(log n), also known as Logarithmic Time Function. It shows that an algorithm with O(log n) is very fast. The input size is cut in half each time, so the number of steps is much less than the input size.

## Main Topics

### What is Big O(log n)?

Big O(log n) means the algorithm time grows very slowly. The number of loop iterations is always less than the input size **`n`**. This happens because the algorithm cuts the data in half on each step. This is called logarithmic growth.

### Example: Divide by Two

This algorithm divides **`x`** by 2 in every loop step.

```cpp
void fun1(short n)
{
    short x = n;

    while (n > 0)
    {
        x = x / 2;
        cout << x << endl;
    }
}
```

### Step Calculation for O(log n)

**Inside the while loop (7 steps):**

1. **`(n > 0)`**
2. **`x / 2`**
3. **`x = x / 2`**
4. **`x`**
5. **`cout << x`**
6. **`endl`**
7. **`cout << endl`**

**Outside the while loop (1 step):**

1. **`short x = n`**

The number of loop iterations is **`log n`** because the value is halved each time. The equation is **`1 + 7 * log n`**. In Big O, the result is O(log n).

### Binary Search Example

Binary Search is a practical example of O(log n). If you want to find the number 5 in a sorted array of 100 items:

1. You divide the array by 2. You search in the half where 5 can be (50 items left).
2. You divide by 2 again (25 items left).
3. You divide by 2 again (12 items left).
4. You divide by 2 again (6 items left).
5. You find the number quickly.

This is much faster than checking every number one by one O(n).

## Key Takeaways

- Big O(log n) means Logarithmic Time Function.
- The loop iterations are always less than the input size.
- The data is cut in half on each step.
- O(log n) is much faster than O(n).
- Binary Search is an example of O(log n).

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)