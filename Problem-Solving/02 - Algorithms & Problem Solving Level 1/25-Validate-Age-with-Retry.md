# 25 - Validate Age with Retry

## Problem Statement

Write a program to ask the user to enter their age. If the age is between 18 and 45 (inclusive), print **"Valid Age"**; otherwise, print **"Invalid Age"** and keep asking the user to enter a valid age until one is provided.

## Steps

**Step 1:** Ask the user to enter their age (`Age`).

**Step 2:** Calculate the result:

`Result = (Age >= 18) and (Age <= 45)`

**Step 3:** Check if `Result` is `True`.

**Step 4:** If `Result` is `True`, print **"Valid Age"**.

**Step 5:** Otherwise, print **"Invalid Age"** and repeat from **Step 1**.

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Read Age/]
    B --> C["Result = (Age >= 18) and (Age <= 45)"]
    C --> D{Result = True?}
    D -->|Yes| E[/Print "Valid Age"/]
    E --> F([End])
    D -->|No| G[/Print "Invalid Age"/]
    G --> B
```