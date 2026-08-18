# 44 - Day of Week with Validation

## Problem Statement

Write a program to ask the user to enter a day number, then print the corresponding day name. If the entered day number is invalid, print **"Wrong Day"** and keep asking until a valid day number is entered.

## Steps

**Step 1:** Ask the user to enter (`Day`).

**Step 2:** Check if:

`(Day >= 1) and (Day <= 7)`

If the condition is `False`, print **"Wrong Day"** and repeat **Step 1**.

**Step 3:** If `Day == 1`, print **"It's Sunday"**.

**Step 4:** Else if `Day == 2`, print **"It's Monday"**.

**Step 5:** Else if `Day == 3`, print **"It's Tuesday"**.

**Step 6:** Else if `Day == 4`, print **"It's Wednesday"**.

**Step 7:** Else if `Day == 5`, print **"It's Thursday"**.

**Step 8:** Else if `Day == 6`, print **"It's Friday"**.

**Step 9:** Else if `Day == 7`, print **"It's Saturday"**.

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Print "Wrong Day"/]
    B --> C[/Read Day/]
    C --> D{"Day >= 1 and Day <= 7?"}
    D -->|No| B
    D -->|Yes| E{Day = 1?}
    E -->|Yes| F[/Print "It's Sunday"/]
    F --> G([End])
    E -->|No| H{Day = 2?}
    H -->|Yes| I[/Print "It's Monday"/]
    I --> G
    H -->|No| J{Day = 3?}
    J -->|Yes| K[/Print "It's Tuesday"/]
    K --> G
    J -->|No| L{Day = 4?}
    L -->|Yes| M[/Print "It's Wednesday"/]
    M --> G
    L -->|No| N{Day = 5?}
    N -->|Yes| O[/Print "It's Thursday"/]
    O --> G
    N -->|No| P{Day = 6?}
    P -->|Yes| Q[/Print "It's Friday"/]
    Q --> G
    P -->|No| R{Day = 7?}
    R -->|Yes| S[/Print "It's Saturday"/]
    S --> G