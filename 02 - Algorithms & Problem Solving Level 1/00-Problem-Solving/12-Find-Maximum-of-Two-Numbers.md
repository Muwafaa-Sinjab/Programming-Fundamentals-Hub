# 12 - Find Maximum of Two Numbers

## Problem Statement

Write a program to ask the user to enter Number1 and Number2, then print the max number.

## Steps

**Step 1:** Ask the user to enter Num1, Num2.

**Step 2:** If Num1 > Num2, then Num1 is Max otherwise Num2 is Max.

**Step 3:** Print Max Accordingly.

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Read Num1, Num2/]
    B --> C{Num1 > Num2?}
    C -->|Yes| D[/Print Num1/]
    D --> E([End])
    C -->|No| F[/Print Num2/]
    F --> E([End])