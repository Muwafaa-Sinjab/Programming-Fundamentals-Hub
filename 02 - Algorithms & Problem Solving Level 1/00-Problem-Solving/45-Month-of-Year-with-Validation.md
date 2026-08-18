# 45 - Month of Year with Validation

## Problem Statement

Write a program to ask the user to enter a month number, then print the corresponding month name. If the month is invalid, print "Wrong Month" and ask the user to enter the month again.

## Steps

**Step 1:** Print "Wrong Month" if invalid.

**Step 2:** Read M.

**Step 3:** If M < 1 or M > 12, go back to Step 1.

**Step 4:** If M = 1, print "January".

**Step 5:** Else if M = 2, print "February".

**Step 6:** Else if M = 3, print "March".

**Step 7:** Else if M = 4, print "April".

**Step 8:** Else if M = 5, print "May".

**Step 9:** Else if M = 6, print "June".

**Step 10:** Else if M = 7, print "July".

**Step 11:** Else if M = 8, print "August".

**Step 12:** Else if M = 9, print "September".

**Step 13:** Else if M = 10, print "October".

**Step 14:** Else if M = 11, print "November".

**Step 15:** Else if M = 12, print "December".

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Print "Wrong Month"/]
    B --> C[/Read M/]
    C --> D{"M >= 1 and M <= 12?"}
    D -->|No| B
    D -->|Yes| E{M = 1?}
    E -->|Yes| F[/Print "January"/]
    F --> G([End])
    E -->|No| H{M = 2?}
    H -->|Yes| I[/Print "February"/]
    I --> G
    H -->|No| J{M = 3?}
    J -->|Yes| K[/Print "March"/]
    K --> G
    J -->|No| L{M = 4?}
    L -->|Yes| M[/Print "April"/]
    M --> G
    L -->|No| N{M = 5?}
    N -->|Yes| O[/Print "May"/]
    O --> G
    N -->|No| P{M = 6?}
    P -->|Yes| Q[/Print "June"/]
    Q --> G
    P -->|No| R{M = 7?}
    R -->|Yes| S[/Print "July"/]
    S --> G
    R -->|No| T{M = 8?}
    T -->|Yes| U[/Print "August"/]
    U --> G
    T -->|No| V{M = 9?}
    V -->|Yes| W[/Print "September"/]
    W --> G
    V -->|No| X{M = 10?}
    X -->|Yes| Y[/Print "October"/]
    Y --> G
    X -->|No| Z{M = 11?}
    Z -->|Yes| AA[/Print "November"/]
    AA --> G
    Z -->|No| AB{M = 12?}
    AB -->|Yes| AC[/Print "December"/]
    AC --> G