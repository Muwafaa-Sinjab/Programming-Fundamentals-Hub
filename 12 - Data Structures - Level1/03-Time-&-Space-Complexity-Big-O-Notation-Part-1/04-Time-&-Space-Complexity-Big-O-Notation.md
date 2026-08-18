# 04 - Time & Space Complexity - Big O Notation

## Overview

This lesson introduces Big O Notation. It explains how to measure Time and Space Complexity. It shows the common types of Big O and what they mean.

## Main Topics

### What is Big O Notation?

Big O Notation measures the worst-case scenario of an algorithm. It shows the relationship between the Input Size and Time or Space. It does not depend on hardware. Big O tells you how the algorithm behaves when the input is very large. It does not give the exact running time.

- **O** stands for "Order Of".
- **(n)** stands for the Input Size.

### Time Complexity

Time Complexity is the relationship between Time and Input Size. It is written as O(n). It shows how the time grows when the input size grows.

### Space Complexity

Space Complexity is the relationship between Space (Memory) and Input Size. It is also written as O(n). It shows how the memory usage grows when the input size grows.

### Common Big O Types

There are four common types of Big O:

1. **O(1) - Constant Time:** The time does not change. It is always the same, no matter the input size.
2. **O(log n) - Logarithmic Time:** The time grows very slowly. The number of loop iterations is less than the input size.
3. **O(n) - Linear Time:** The time grows at the same rate as the input size. If input doubles, time doubles.
4. **O(n^2) - Quadratic Time:** The time grows very fast. If input doubles, time becomes four times larger.

## Key Takeaways

- Big O Notation measures the worst-case scenario.
- Big O shows the relationship between Input Size and Time or Space.
- Big O does not give the exact running time.
- Time Complexity is Time vs Input.
- Space Complexity is Space vs Input.
- O(1) is the fastest, and O(n^2) is the slowest of the common types.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)