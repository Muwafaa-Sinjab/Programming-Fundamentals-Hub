# 09 - Important Question: Work Smart

## Overview
This lesson explains an important interview question. It shows that two algorithms can have the same Big O notation, but one can be faster in real life. It teaches the importance of working smart by exiting loops early.

## Main Topics
### Two Algorithms with Same Big O
Both algorithms search for a number in an array. Both use one `for` loop. Both have a Time Complexity of **O(n)**.

#### Algorithm 1 (Slow)
This algorithm finds the number, but it does not stop. It continues to check the rest of the array until the loop finishes.

```cpp
short FindNumberAlgorithm1(short arr1[10], short Number)
{
    int n = 10;
    short pos = -1;

    for (int i = 0; i <= n; i++)
    {
        if (arr1[i] == Number)
        {
            pos = i;
        }
    }
    return pos;
}
```

#### Algorithm 2 (Fast)
This algorithm stops as soon as it finds the number. It uses `return i;` to exit the function immediately.

```cpp
short FindNumberAlgorithm2(short arr1[10], short Number)
{
    int n = 10;

    for (int i = 0; i <= n; i++)
    {
        if (arr1[i] == Number)
        {
            return i;
        }
    }
    return -1;
}
```

### Do They Have the Same Speed?
No, they do **not** have the same real speed.

- **Algorithm 1** is slow because it always checks every item.
- **Algorithm 2** is fast because it stops early.

If the number you search for is the last item in the array, they will take the same time. But in most cases, Algorithm 2 is much faster.

### Big O vs Actual Time
- Big O tells you the **type** of the algorithm (both are O(n)).
- Big O **does not** tell you the exact running time.
- Big O measures the **worst-case scenario**.

To write good code, you must understand Big O, but you must also **work smart**. Working smart means making your code exit early when possible.

## Key Takeaways
- Two algorithms can have the same Big O but different real speeds.
- You should exit a loop early if you find your answer.
- Big O shows the algorithm type, not the exact time.
- Big O measures the worst-case scenario.
- Working smart means writing code that saves time in real situations.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)