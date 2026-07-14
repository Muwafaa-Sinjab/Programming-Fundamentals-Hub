# 03 - Check Odd or Even

## Problem Statement

Write a program to ask the user to enter a number, then print "ODD" if its odd, or "Even" if its even.

## Steps

**Step 1:** Ask the user to enter a Number.

**Step 2:** Result = Num mod 2

**Step 3:** Check if Result = 0 then its even otherwise it's odd.

**Step 4:** Print "ODD" or "Even" accordingly.

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Read Num/]
    B --> C[Result = Num mod 2]
    C --> D{Result = 0?}
    D -->|Yes| E[/Print "Even"/]
    E --> F([End])
    D -->|No| G[/Print "ODD"/]
    G --> F([End])