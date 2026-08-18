# 05 - Big O(1): Constant Time Function

## Overview

This lesson explains Big O(1), also known as Constant Time Function. It shows that an algorithm with O(1) takes the same time, no matter how large the input size is. It is the fastest type of Big O.

## Main Topics

### What is Big O(1)?

Big O(1) means the algorithm time is constant. It does not change when the input size changes. If the input is 10 or 10,000, the time is the same. This is the fastest and best performance for an algorithm.

### Example: Get Last Character

There are two ways to get the last character of a string.

**Algorithm 1 (Fast - O(1)):** This algorithm goes directly to the last character. It does not read the whole string.

```cpp
char GetLastCharacter(string S1)

{

return S1[S1.length() - 1];

}
```

**Algorithm 2 (Slow - O(n)):** This algorithm uses a **`for loop`**. It reads every character from the start until the end. The time depends on the string length. This is O(n).

```cpp
char GetLastCharacter2(string S1)

{

int n = S1.length() - 1;

for (int i = 0; i <= n; i++)

    {

if (i == n)

        {

return S1[n];

        }

    }

}
```

### Step Calculation for O(1)

To find Big O, we count the steps of the algorithm. We assume each operation takes 1 step.

For Algorithm 1, the steps are:

1. **`S1.length()`**
2. **`S1.length() - 1`**
3. **`S1[S1.length() - 1]`**
4. **`return S1[S1.length() - 1]`**

The total number of steps is 4. This number is constant. It does not change with the input size. Therefore, the Big O is O(1).

### O(1) Equation

The equation is: **`4 * O(1)`**. In Big O, we remove the constant multiplier (the number 4). So, the result is O(1).

## Key Takeaways

- Big O(1) means Constant Time Function.
- The time does not change when the input size changes.
- O(1) is the fastest Big O notation.
- Accessing an item directly by index is O(1).
- In Big O, constant multipliers are removed.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)