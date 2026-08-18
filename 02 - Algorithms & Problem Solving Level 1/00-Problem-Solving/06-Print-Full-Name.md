# 06 - Print Full Name

## Problem Statement

Write a program to ask the user to enter first name and last name, then print full name on screen.

## Steps

**Step 1:** Ask the user to enter a FirstName.

**Step 2:** Ask the user to enter a LastName.

**Step 3:** FullName = FirstName + " " + LastName

**Step 4:** Print FullName

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Read FirstName/]
    B --> C[/Read LastName/]
    C --> D[FullName = FirstName + " " + LastName]
    D --> E[/Print FullName/]
    E --> F([End])