# The Hexadecimal System

## Purpose

Hexadecimal is a base-16 number system that programmers use as a shorthand for binary. It doesn't replace binary at the hardware level — it makes long strings of 0s and 1s easier for humans to read and write.

## Definition

- **Base:** 16
- **Symbols:** 0–9, then A–F to cover values 10 through 15

## Comparing the Three Systems

| System        | Base | Symbols Used     |
|-----------------|-------|---------------------|
| Decimal          | 10    | 0–9                  |
| Binary            | 2     | 0, 1                 |
| Hexadecimal       | 16    | 0–9, A–F             |

## Digit Conversion Reference

| Decimal | Hex | Binary |
|-----------|------|----------|
| 0         | 0    | 0000     |
| 1         | 1    | 0001     |
| 2         | 2    | 0010     |
| 3         | 3    | 0011     |
| 4         | 4    | 0100     |
| 5         | 5    | 0101     |
| 6         | 6    | 0110     |
| 7         | 7    | 0111     |
| 8         | 8    | 1000     |
| 9         | 9    | 1001     |
| 10        | A    | 1010     |
| 11        | B    | 1011     |
| 12        | C    | 1100     |
| 13        | D    | 1101     |
| 14        | E    | 1110     |
| 15        | F    | 1111     |

## Why Bother With a Third System

Reading a raw binary value like `10110101` is slow and error-prone for a human. Its hexadecimal equivalent, `B5`, packs the same information into two characters instead of eight.

**Advantages:**
- **Compactness:** any byte (8 bits) fits into exactly 2 hex digits
- **Readability:** far easier to scan and compare than long binary strings
- **Common usage:** appears constantly in programming, web design, and color systems

## Hexadecimal Prefixes by Context

| Context             | Prefix | Example    |
|-----------------------|----------|--------------|
| HTML/CSS                | #        | #00FF00      |
| C, C++, Java             | 0x       | 0x1A         |
| Unicode                  | \u+      | \u+0042      |
| Assembly                  | $        | $1A          |

## Converting Decimal to Hexadecimal

**Method:** repeatedly divide by 16, track the remainder at each step, and read the remainders from the last one calculated back to the first.

**Example: converting 300**

- 300 ÷ 16 = 18, remainder 12 → C
- 18 ÷ 16 = 1, remainder 2 → 2
- 1 ÷ 16 = 0, remainder 1 → 1

Reading remainders bottom to top: **12C**

**Example: converting 2748**

- 2748 ÷ 16 = 171, remainder 12 → C
- 171 ÷ 16 = 10, remainder 11 → B
- 10 ÷ 16 = 0, remainder 10 → A

Reading remainders bottom to top: **ABC**

## Converting Hexadecimal to Decimal

**Method:** multiply each digit by 16 raised to its position (starting at 0 from the right), then add the results.

**Example: converting 12C**

```
1 × 16² = 1 × 256 = 256
2 × 16¹ = 2 × 16  = 32
C × 16⁰ = 12 × 1  = 12
```
Total: 256 + 32 + 12 = **300**

**Example: converting ABC**

```
A × 16² = 10 × 256 = 2560
B × 16¹ = 11 × 16  = 176
C × 16⁰ = 12 × 1   = 12
```
Total: 2560 + 176 + 12 = **2748**

## Converting Between Hex and Binary

**Hex to binary:** convert hex to decimal first, then decimal to binary.

**Example: converting 12C**
- Step 1: 12C → 300 (calculated above)
- Step 2: 300 = 256 + 32 + 8 + 4 = 2⁸ + 2⁵ + 2³ + 2² = `100101100`

**Binary to hex:** convert binary to decimal first, then decimal to hex.

## Where Hexadecimal Shows Up

**Web colors**
- White: #FFFFFF
- Black: #000000
- Red: #FF0000
- Green: #00FF00
- Blue: #0000FF

**Memory addresses**
- `0x1A2B3C4D` — a location in memory
- `0xA3` — a single byte value

**Unicode characters**
- `\u+0042` — letter B
- `\u+062D` — Arabic letter ح

## Key Takeaway

Hexadecimal exists to make binary data manageable for humans without changing what the computer actually stores. Converting between decimal, binary, and hex usually passes through decimal as the middle step, and hex shows up constantly in color codes, memory addresses, and character encoding.

---

**Muwafaa Sinjab**

GitHub: **@Muwafaa-Sinjab**
