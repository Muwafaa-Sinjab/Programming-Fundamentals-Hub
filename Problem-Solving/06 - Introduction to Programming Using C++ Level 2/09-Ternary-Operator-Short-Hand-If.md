# 09 - Ternary Operator: Short Hand If

## Overview

This video introduces the ternary operator as a shorthand way to write conditional `if-else` statements. It explains the syntax, demonstrates how it can return values or execute actions, and shows how it can be nested for multiple conditions.

## Main Topics

### Basic Syntax

The ternary operator uses the `?` and `:` symbols to evaluate a condition in a single line. It consists of three parts: the condition to check, the result if the condition is true, and the result if the condition is false. Not every `if-else` statement can be replaced by this operator; it is mainly used for simple conditions that produce a direct result.

### Practical Usage

The operator is commonly used to assign values to variables based on a condition. Besides returning values like strings or numbers, it can also be used to call functions or procedures depending on whether the condition is met.

### Nesting Ternary Operators

The ternary operator can be nested inside the false section to check additional conditions. This works similarly to an `if - else if - else` chain, allowing the program to evaluate a second condition if the first one fails.

```cpp
int Mark = 90;
string Result;

Result = (Mark >= 50) ? "PASS" : "FAIL";
```

## Key Takeaways

- The ternary operator is a concise alternative to simple `if-else` statements.
- It uses the syntax `Condition ? TrueResult : FalseResult`.
- It can return values or trigger function calls.
- Multiple conditions can be handled by nesting the operator.

Muwafaa Sinjab @Muwafaa-Sinjab