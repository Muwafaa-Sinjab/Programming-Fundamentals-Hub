# 04 - Hire or Reject Based on Age and License

## Problem Statement

Write a program to ask the user to enter his/her age and driver license, then print "Hired" if his/her age is greater than 21 and s/he has a driver license, otherwise print "Rejected".

## Steps

**Step 1:** Ask the user to enter his/her age.

**Step 2:** Ask the user if s/he has a driver license.

**Step 3:** Result = (Age > 21 and HasDriverLicense=True).

**Step 4:** Check if result = True then Hire otherwise Reject.

**Step 5:** Print "Hired" or "Rejected" accordingly.

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Read Age/]
    B --> C[/Read HasDriverLicense/]
    C --> D[Result = Age > 21 and HasDriverLicense = True]
    D --> E{Result = True?}
    E -->|Yes| F[/Print "Hired"/]
    F --> G([End])
    E -->|No| H[/Print "Rejected"/]
    H --> G([End])