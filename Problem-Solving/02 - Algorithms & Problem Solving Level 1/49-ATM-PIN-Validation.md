# 49 - ATM PIN Validation

## Problem Statement

Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the balance to user, otherwise print "Wrong PIN" and ask the user to enter the PIN again. Assume User Balance is 7500.

## Steps

**Step 1:** Read PIN.

**Step 2:** If PIN == 1234, print "Your Balance is: 7500" and end.

**Step 3:** Else, print "Wrong PIN" and go back to Step 1.

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Read PIN/]
    B --> C{PIN == 1234?}
    C -->|Yes| D[/Print "Your Balance is: 7500"/]
    D --> E([End])
    C -->|No| F[/Print "Wrong PIN"/]
    F --> B