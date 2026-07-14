# 07 - Calculate Half of a Number

## Problem Statement

Write a program to ask the user to enter a number, then print the "Half of the <Number> is <???>".

## Steps

**Step 1:** Ask the user to enter Num.

**Step 2:** HalfNumber = Num / 2.

**Step 3:** R = "Half of " + Num + " is " + HalfNumber

**Step 4:** Print R

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Read Num/]
    B --> C[HalfNumber = Num / 2]
    C --> D[R = "Half of " + Num + " is " + HalfNumber]
    D --> E[/Print R/]
    E --> F([End])