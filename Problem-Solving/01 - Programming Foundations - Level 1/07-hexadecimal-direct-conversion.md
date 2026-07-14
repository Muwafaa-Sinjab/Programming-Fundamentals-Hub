# Hexadecimal System — Direct Conversion Methods

## Purpose

Converting between hexadecimal and binary doesn't have to pass through decimal at all. There's a faster, direct route based on nibbles, and it matches how computers actually handle these conversions internally.

## Nibble Recap

- A nibble is 4 adjacent bits.
- A byte splits into exactly 2 nibbles.
- Each nibble maps to exactly one hexadecimal digit.

```
[ 0110 | 1001 ]
   ↑       ↑
 upper   lower
  = 6      = 9
```

## Hex to Binary — Direct Method

**Steps:**
1. Split the hex number into individual digits
2. Convert each digit into its 4-bit nibble
3. Join the nibbles in the same order

**Example: converting 3C7**

- Split: `3 | C | 7`
- Convert:
  - 3 → `0011`
  - C → `1100` (C = 12 in decimal)
  - 7 → `0111`
- Join: `0011` + `1100` + `0111` = **001111000111**

**Example: converting A2F**

- Split: `A | 2 | F`
- Convert:
  - A → `1010` (A = 10)
  - 2 → `0010`
  - F → `1111` (F = 15)
- Join: **101000101111**

**Example: converting B08**

- Split: `B | 0 | 8`
- Convert:
  - B → `1011` (B = 11)
  - 0 → `0000`
  - 8 → `1000`
- Join: **101100001000**

## Binary to Hex — Direct Method

**Steps:**
1. Split the binary number into groups of 4 bits, starting from the right
2. Convert each group to its decimal value
3. Convert each decimal value to its hex digit
4. Join the digits in order

**Example: converting 001111000111**

- Split into nibbles: `0011 | 1100 | 0111`
- To decimal: 3, 12, 7
- To hex: 3, C, 7
- Result: **3C7**

**Example: converting 101100001000**

- Split into nibbles: `1011 | 0000 | 1000`
- To decimal: 11, 0, 8
- To hex: B, 0, 8
- Result: **B08**

## Nibble Conversion Reference

| Binary | Decimal | Hex |
|----------|-----------|-------|
| 0000     | 0         | 0     |
| 0001     | 1         | 1     |
| 0010     | 2         | 2     |
| 0011     | 3         | 3     |
| 0100     | 4         | 4     |
| 0101     | 5         | 5     |
| 0110     | 6         | 6     |
| 0111     | 7         | 7     |
| 1000     | 8         | 8     |
| 1001     | 9         | 9     |
| 1010     | 10        | A     |
| 1011     | 11        | B     |
| 1100     | 12        | C     |
| 1101     | 13        | D     |
| 1110     | 14        | E     |
| 1111     | 15        | F     |

## Direct vs. Indirect Conversion

| Aspect          | Indirect (via decimal)     | Direct (via nibbles)      |
|-------------------|-------------------------------|--------------------------------|
| Path                | Hex → Decimal → Binary         | Hex ↔ Binary directly            |
| Number of stages    | Two                             | One                              |
| Speed                | Slower                          | Faster                           |
| Difficulty            | Involves decimal arithmetic     | Simple table lookup per nibble    |

## Key Takeaway

Because each hex digit corresponds exactly to a 4-bit nibble, converting between hex and binary can skip decimal entirely — split, look up, and join. This is both quicker for manual calculation and the approach computers use internally.

---

**Muwafaa Sinjab**

GitHub: **@Muwafaa-Sinjab**
