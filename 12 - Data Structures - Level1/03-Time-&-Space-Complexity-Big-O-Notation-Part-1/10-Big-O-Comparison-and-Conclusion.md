# 10 - Big O Comparison and Conclusion

## Overview
This lesson compares all the Big O types. It shows the order from the best (fastest) to the worst (slowest). It also explains that Big O is a mathematical expression.

## Main Topics
### Big O is a Mathematical Expression
Big O uses algebra to describe the algorithm. It compares the relationship between the **Input Size** and **Time**. It also compares the Input Size and **Space** (memory). It does not give the exact time a program takes.

### Big O Order (Best to Worst)
The best algorithm is the one that takes the least time and space. Here is the order of Big O types from best to worst:

1. **O(1)** - Constant Time  
   *Best performance. Time does not change.*
2. **O(log n)** - Logarithmic Time  
   *Very good performance. Time grows very slowly.*
3. **O(n)** - Linear Time  
   *Good performance. Time grows at the same rate as input.*
4. **O(n²)** - Quadratic Time  
   *Bad performance. Time grows very fast.*

As a developer, you should try to keep your algorithms at **O(1)** or **O(log n)**.

### Space Complexity
Space Complexity is the relationship between Input Size and Memory (RAM). When the input size increases, the program usually needs more memory space. Big O also measures this relationship.

## Key Takeaways
- Big O is a mathematical expression for algorithm efficiency.
- O(1) is the fastest Big O type.
- O(n²) is the slowest Big O type in this list.
- The order is: **O(1) < O(log n) < O(n) < O(n²)**.
- Big O measures both Time and Space.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)