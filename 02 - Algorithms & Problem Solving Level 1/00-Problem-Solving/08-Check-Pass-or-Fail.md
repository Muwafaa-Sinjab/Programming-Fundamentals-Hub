# 08 - Check Pass or Fail

## Problem Statement

Write a program to ask the user to enter a mark, then print "PASS" if mark >= 50, otherwise print "Fail".

## Steps

**Step 1:** Ask the user to enter Mark.

**Step 2:** If Mark >= 50, PASS, otherwise Fail.

**Step 3:** Print PASS or Fail Accordingly.

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Read Mark/]
    B --> C{Mark >= 50?}
    C -->|Yes| D[/Print "PASS"/]
    D --> E([End])
    C -->|No| F[/Print "Fail"/]
    F --> E([End])