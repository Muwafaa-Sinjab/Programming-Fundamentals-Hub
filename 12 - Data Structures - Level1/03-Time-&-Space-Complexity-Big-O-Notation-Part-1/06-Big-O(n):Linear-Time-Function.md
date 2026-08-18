# 06 - Big O(n): Linear Time Function

## Overview

This lesson explains Big O(n), also known as Linear Time Function. It shows that an algorithm with O(n) takes time that grows directly with the input size. If the input doubles, the time doubles.

## Main Topics

### What is Big O(n)?

Big O(n) means the algorithm time is tied to the input size. If the input size increases, the time increases in the same way. This is called linear growth. It usually happens when an algorithm uses one **`for loop`** to go through all the data.

### Example: Loop Through String

This is the second algorithm from the previous lesson. It uses a **`for loop`** to find the last character.

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

The time depends on the number of characters in the string. This is O(n).

### Step Calculation for O(n)

We count the steps inside and outside the loop.

**Outside the loop (4 steps):**

1. **`S1.length()`**
2. **`S1.length() - 1`**
3. **`int n = S1.length() - 1`**
4. **`int i = 0`**

**Inside the loop (6 steps):**

1. **`i <= n`**
2. **`i++`**
3. **`i == n`**
4. **`[n]`**
5. **`S1[n]`**
6. **`return S1[n]`**

### O(n) Equation

The equation combines inside and outside steps: **`Inside Loop Steps * n + Outside Loop Steps`** **`6 * n + 4`**

In Big O, we remove the constants (6 and 4). We only keep the part that changes with **`n`**. The result is O(n).

## Key Takeaways

- Big O(n) means Linear Time Function.
- The time grows at the same rate as the input size.
- O(n) is slower than O(1).
- An algorithm with one **`for loop`** is usually O(n).
- In Big O, we remove constant numbers and keep the variable part.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)