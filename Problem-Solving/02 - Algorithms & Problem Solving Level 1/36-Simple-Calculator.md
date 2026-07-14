# 36 - Simple Calculator

## Problem Statement

Write a program to ask the user to enter two numbers and an operation type, then perform the selected arithmetic operation and print the result.

## Steps

**Step 1:** Ask the user to enter (`Num1`), (`Num2`), and (`OpType`).

**Step 2:** If `OpType == "+"`, print:

`Num1 + Num2`

**Step 3:** Else if `OpType == "-"`, print:

`Num1 - Num2`

**Step 4:** Else if `OpType == "*"`, print:

`Num1 * Num2`

**Step 5:** Else if `OpType == "/"`, print:

`Num1 / Num2`

**Step 6:** Otherwise, print **"Wrong Operation"**.

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Read Num1, Num2, OpType/]
    B --> C{OpType == "+"?}
    C -->|Yes| D[/Print Num1 + Num2/]
    D --> E([End])

    C -->|No| F{OpType == "-"?}
    F -->|Yes| G[/Print Num1 - Num2/]
    G --> E

    F -->|No| H{OpType == "*"?}
    H -->|Yes| I[/Print Num1 * Num2/]
    I --> E

    H -->|No| J{OpType == "/"?}
    J -->|Yes| K[/Print Num1 / Num2/]
    K --> E

    J -->|No| L[/Print "Wrong Operation"/]
    L --> E
```