# 13 - Find Maximum of Three Numbers

## Problem Statement

Write a program to ask the user to enter 3 numbers: A, B, and C, then print max number.

## Steps

**Step 1:** Ask the user to enter A, B, C.

**Step 2:** Check if A > B.

**Step 3:** Check if B > C.

**Step 4:** Check if A > C.

**Step 5:** Print the maximum accordingly.

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Read A, B, C/]
    B --> C{A > B?}
    C -->|Yes| D{A > C?}
    D -->|Yes| E[/Print A/]
    E --> F([End])
    D -->|No| G[/Print C/]
    G --> F([End])
    C -->|No| H{B > C?}
    H -->|Yes| I[/Print B/]
    I --> F([End])
    H -->|No| J[/Print C/]
    J --> F([End])