# 47 - Calculate Loan Settlement Months

## Problem Statement

Write a program to read a LoanAmount and Monthly Payment and calculate how many months you need to settle the loan.

## Steps

**Step 1:** Read LoanAmount, MonthlyInstallment.

**Step 2:** TotalMonths = LoanAmount / MonthlyInstallment.

**Step 3:** Print TotalMonths + " Months".

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Read LoanAmount, MonthlyInstallment/]
    B --> C["TotalMonths = LoanAmount / MonthlyInstallment"]
    C --> D[/Print TotalMonths + " Months"/]
    D --> E([End])