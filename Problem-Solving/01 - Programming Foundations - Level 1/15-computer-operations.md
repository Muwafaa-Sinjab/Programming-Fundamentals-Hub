# Computer Operations: Types and Symbols

## Why This Matters

Every programming language builds on the same small set of core operations. Knowing these well makes reading and writing code far more intuitive later on.

## Three Broad Categories

Computers work with three main families of operations: arithmetic, relational, and logical.

## Arithmetic Operations

| Operation        | Symbol | Example         |
|--------------------|----------|--------------------|
| Addition             | +        | 6.5 + 2.3 = 8.8      |
| Subtraction            | -        | 10 - 3.5 = 6.5         |
| Multiplication            | *        | 4 * 7 = 28               |
| Division                    | /        | 20 / 4 = 5                 |
| Modulus (remainder)            | %        | 11 % 3 = 2                   |
| Exponentiation                    | ^        | 2^4 = 16                       |

## Relational Operators

These compare two values and always produce a true or false result.

| Operator | Meaning              | Example        |
|------------|--------------------------|-------------------|
| ==           | equal to                    | 9 == 6 → false      |
| !=            | not equal to                  | 9 != 6 → true         |
| <              | less than                       | 9 < 6 → false            |
| >               | greater than                       | 9 > 6 → true               |
| <=               | less than or equal to               | 9 <= 6 → false                |
| >=                | greater than or equal to               | 9 >= 6 → true                    |

## True and False as Values

- **True** is commonly represented internally as **1**
- **False** is commonly represented internally as **0**

## Logical Operators

### AND

All conditions must be true for the result to be true.

| A     | B     | A AND B |
|---------|---------|-----------|
| true      | true      | true        |
| true       | false      | false        |
| false       | true        | false          |
| false        | false        | false           |

In symbol form: `1 && 1 = 1`, `1 && 0 = 0`, `0 && 1 = 0`, `0 && 0 = 0`

### OR

At least one condition being true makes the result true.

| A     | B     | A OR B |
|---------|---------|-----------|
| true      | true      | true        |
| true       | false      | true          |
| false       | true        | true            |
| false        | false        | false             |

In symbol form: `1 || 1 = 1`, `1 || 0 = 1`, `0 || 1 = 1`, `0 || 0 = 0`

### NOT

Flips a value to its opposite.

```
NOT true  = false   →  !1 = 0
NOT false = true    →  !0 = 1
```

## Applying This to a Real Scenario

**Scenario: eligibility for a library membership**

- Condition 1: age is 16 or older
- Condition 2: lives within the city

```
AND version: (age ≥ 16) AND (lives in city) → membership approved only if both are true
OR version:  (age ≥ 16) OR (lives in city)  → membership approved if either is true
```

## Practice Checks

1. `15 >= 15` → true
2. `6 == 9` → false
3. `20 < 4` → false
4. `11 == 11` → true
5. `14 > 9` → true

## Key Takeaway

Every language relies on the same three categories of operations — arithmetic for calculation, relational for comparison, and logical for combining true/false conditions. AND demands every condition hold, OR needs just one, and NOT simply inverts a value. These basics come up constantly once real programming begins.

---

**Muwafaa Sinjab**

GitHub: **@Muwafaa-Sinjab**
