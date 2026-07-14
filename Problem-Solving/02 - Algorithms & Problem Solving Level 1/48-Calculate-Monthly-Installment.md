# 48 - Calculate Monthly Installment

## Problem Statement

Write a program to read a LoanAmount and ask you how many months you need to settle the loan, then calculate the monthly installment amount.

## Steps

**Step 1:** Read LoanAmount, HowManyMonths.

**Step 2:** MonthlyInstallment = LoanAmount / HowManyMonths.

**Step 3:** Print MonthlyInstallment.

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[/Read LoanAmount, HowManyMonths/]
    B --> C["MonthlyInstallment = LoanAmount / HowManyMonths"]
    C --> D[/Print MonthlyInstallment/]
    D --> E([End])