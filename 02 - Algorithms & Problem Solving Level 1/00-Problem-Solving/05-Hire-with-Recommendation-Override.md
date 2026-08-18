# 05 - Hire with Recommendation Override

## Problem Statement

Write a program to ask the user to enter his/her age, driver license, and has recommendation. Then print "Hired" if his/her age is greater than 21 and s/he has a driver license, otherwise print "Rejected". Or hire him/her without conditions if s/he has a recommendation.

## Steps

**Step 1:** Ask the user to enter his/her age.

**Step 2:** Ask the user if s/he has a driver license.

**Step 3:** Ask the user if s/he has a recommendation.

**Step 4:** Result = (Age > 21 and HasDriverLicense = True).

**Step 5:** Check if HasRecommendation = True then print "Hired" regardless of conditions.

**Step 6:** If HasRecommendation = False, check if Result = True then print "Hired" otherwise print "Rejected".

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Read Age/]
    B --> C[/Read HasDriverLicense/]
    C --> D[/Read HasRecommendation/]
    D --> E{HasRecommendation = True?}
    E -->|Yes| F[/Print "Hired"/]
    F --> G([End])
    E -->|No| H[Result = Age > 21 and HasDriverLicense = True]
    H --> I{Result = True?}
    I -->|Yes| J[/Print "Hired"/]
    J --> G([End])
    I -->|No| K[/Print "Rejected"/]
    K --> G([End])