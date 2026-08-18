# 14 - Swap Two Numbers

## Problem Statement

Write a program to ask the user to enter Number1 and Number2, then print the two numbers, then swap the two numbers and print them.

## Steps

**Step 1:** Ask the user to enter Num1, Num2.

**Step 2:** Print Num1.

**Step 3:** Print Num2.

**Step 4:** Temp = Num1.

**Step 5:** Num1 = Num2.

**Step 6:** Num2 = Temp.

**Step 7:** Print Num1.

**Step 8:** Print Num2.

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Read Num1, Num2/]
    B --> C[/Print Num1/]
    C --> D[/Print Num2/]
    D --> E[Temp = Num1]
    E --> F[Num1 = Num2]
    F --> G[Num2 = Temp]
    G --> H[/Print Num1/]
    H --> I[/Print Num2/]
    I --> J([End])