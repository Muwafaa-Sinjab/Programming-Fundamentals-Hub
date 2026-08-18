# 11 - Average and Pass/Fail

## Problem Statement

Write a program to ask the user to enter Mark1, Mark2, and Mark3, then print the average of entered marks, and print "PASS" if average >= 50, otherwise print "FAIL".

## Steps

**Step 1:** Ask the user to enter Mark1, Mark2, Mark3.

**Step 2:** Avg = (Mark1 + Mark2 + Mark3) / 3.

**Step 3:** Print Avg.

**Step 4:** If Avg >= 50 print "PASS", otherwise print "Fail".

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Read Mark1, Mark2, Mark3/]
    B --> C[Avg = Mark1 + Mark2 + Mark3 / 3]
    C --> D[/Print Avg/]
    D --> E{Avg >= 50?}
    E -->|Yes| F[/Print "PASS"/]
    F --> G([End])
    E -->|No| H[/Print "Fail"/]
    H --> G([End])