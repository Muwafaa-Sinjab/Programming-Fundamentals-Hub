# 50 - ATM PIN Validation with 3 Attempts

## Problem Statement

Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the balance to user, otherwise print "Wrong PIN" and ask the user to enter the PIN again. Only allow user to enter the PIN 3 times, if fails, print "Card is locked!". Assume User Balance is 7500.

## Steps

**Step 1:** Set FailedCount = 0.

**Step 2:** Read PIN.

**Step 3:** If FailedCount == 3, print "Card Locked" and end.

**Step 4:** If PIN == 1234, print "Your Balance is: 7500" and end.

**Step 5:** Else, print "Wrong PIN", increment FailedCount by 1, and go to Step 2.

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[FailedCount = 0]
    B --> C[/Read PIN/]
    C --> D{FailedCount == 3?}
    D -->|Yes| E[/Print "Card Locked"/]
    E --> F([End])
    D -->|No| G{PIN == 1234?}
    G -->|Yes| H[Balance = 7500]
    H --> I[/Print "Your Balance is: 7500"/]
    I --> F
    G -->|No| J[/Print "Wrong PIN"/]
    J --> K[FailedCount = FailedCount + 1]
    K --> C