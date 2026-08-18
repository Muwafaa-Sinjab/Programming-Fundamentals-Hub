# 07 - Big O(n²): Quadratic Time Function

## Overview
This lesson explains Big O(n²), also known as Quadratic Time Function. It shows that an algorithm with O(n²) takes time that grows very fast. If the input doubles, the time becomes four times larger. This usually happens with nested loops.

## Main Topics
### What is Big O(n²)?
Big O(n²) means the algorithm time is tied to the square of the input size. When the input size increases, the time increases much faster. This is called quadratic growth. It usually happens when an algorithm has a loop inside another loop (nested loops).

### Example: Multiplication Sum
This algorithm has two nested `for` loops.

```cpp
int MultiplicationSum(short n)
{
    int Sum = 0;

    for (short i = 1; i <= n; i++)
    {
        for (short j = 1; j <= n; j++)
        {
            Sum = Sum + (i * j);
        }
    }
    return Sum;
}
```

### Step Calculation for O(n²)
We count the steps for the loops.

**Loop 2 (Inside loop - 5 steps):**
- `j <= n`
- `j++`
- `(i * j)`
- `Sum + (i * j)`
- `Sum = Sum + (i * j)`

Result for Loop 2: **5 * n**

**Loop 1 (Outside loop - 3 steps + Loop 2):**
- `i <= n`
- `i++`
- `short j = 1`

Result for Loop 1: **n * (3 + 5n) = 3n + 5n²**

**Outside the loops (4 steps):**
- `Sum = 0`
- `short i = 1`
- `Sum`
- `return Sum`

Total equation: **4 + 3n + 5n²**. In Big O, we keep only the highest power. The result is **O(n²)**.

### Bank Permissions Example
The lesson gives a real-world example from a bank system.

- **Fast way (O(1))**: Use Bitwise AND (`&`) to check permissions. It takes one step.
- **Slow way (O(n²))**: Use two nested loops. Loop 1 goes through Users. Loop 2 goes through Permissions. This is very slow.

## Key Takeaways
- Big O(n²) means Quadratic Time Function.
- Time grows much faster than the input size.
- Nested loops (a loop inside a loop) usually create O(n²).
- O(n) is much faster than O(n²).
- O(1) < O(n) < O(n²).

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)
