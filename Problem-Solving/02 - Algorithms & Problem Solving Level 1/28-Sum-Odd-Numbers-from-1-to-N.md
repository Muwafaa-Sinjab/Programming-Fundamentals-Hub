# 28 - Sum Odd Numbers from 1 to N

## Problem Statement

Write a program to calculate the sum of all odd numbers from **1** to **N**.

## Steps

**Step 1:** Ask the user to enter (`N`).

**Step 2:** Set `Counter = 0` and `Sum = 0`.

**Step 3:** Increment the counter:

`Counter = Counter + 1`

**Step 4:** Check if the number is odd:

`Counter % 2 != 0`

If the condition is `True`, calculate:

`Sum = Sum + Counter`

**Step 5:** If `Counter == N`, print `Sum` and end the program; otherwise, repeat from **Step 3**.

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Read N/]
    B --> C[Counter = 0, Sum = 0]
    C --> D[Counter = Counter + 1]
    D --> E{Counter Mod 2 != 0?}
    E -->|Yes| F[Sum = Sum + Counter]
    F --> G{Counter == N?}
    E -->|No| G
    G -->|Yes| H([End])
    G -->|No| D