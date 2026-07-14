# Order of Operations in Programming

## Why It Matters

Computers evaluate expressions in a strict, predictable order. Skipping over this order is one of the most common sources of unexpected results in code, so it's worth internalizing early.

## The Priority Sequence

```
1. Parentheses  ()  {}  []
2. Exponents and roots  ^  √
3. Multiplication and division  ×  ÷
4. Addition and subtraction  +  -
```

## Two Common Mnemonics

**PEMDAS:** Parentheses, Exponents, Multiplication, Division, Addition, Subtraction

**BODMAS:** Brackets, Orders, Division, Multiplication, Addition, Subtraction

Both describe the same underlying rule, just with slightly different naming conventions.

## Worked Examples

**Example 1 — mixed multiplication and addition**

```
6 + 3 × 5 + 8 - 2 × 4
= 6 + (3×5) + 8 - (2×4)
= 6 + 15 + 8 - 8
= (6+15+8) - 8
= 29 - 8
= 21
```

**Example 2 — parentheses with an inner operation**

```
24 ÷ (10 - 3 × 2)
= 24 ÷ (10 - 6)
= 24 ÷ 4
= 6
```

**Example 3 — nested brackets**

```
60 ÷ [12 - (3 + 5)]
= 60 ÷ [12 - 8]
= 60 ÷ 4
= 15
```

**Example 4 — combining several operation types**

```
4 × (7 × 2 - 5 - 2) × 3^2
= 4 × (14 - 5 - 2) × 9
= 4 × 7 × 9
= 28 × 9
= 252
```

## Priority With Logical Operations

Arithmetic and logical expressions can be combined, and they still follow a clear resolution order.

```
(12 > 5) OR (6 + 1 == 8) AND (4 == 4)
= true OR (7 == 8) AND true
= true OR false AND true
= true OR false
= true
```

**Rules governing this kind of mixed expression:**
1. Resolve anything in parentheses first
2. Complete any arithmetic before evaluating comparisons
3. Evaluate logical operators, with AND resolved before OR
4. Work left to right when priority is otherwise equal

## Practice Set

Try working through these before checking any tool:

```
7 + 4 × 3 - 6 ÷ 2
(18 - 6) × 2 + 3^2
30 ÷ [5 × (1 + 4)]
6 × (2 + 3^2) - 4
(8 > 3) AND (5 × 2 == 10) OR (1 < 0)
```

## Key Takeaway

Parentheses are always resolved first, followed by exponents, then multiplication and division (evaluated left to right), and finally addition and subtraction (also left to right). Logical operators follow this same layered approach, with AND taking precedence over OR. Getting this order right is essential for predictable, correct results.

---

**Muwafaa Sinjab**

GitHub: **@Muwafaa-Sinjab**
