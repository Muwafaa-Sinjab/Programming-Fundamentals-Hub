# The Octal System

## Where It Fits

Octal is the last number system worth covering alongside decimal, binary, and hexadecimal. It works on the same principles as hex but groups bits differently.

## Number System Recap

| System         | Base | Digits Used  | Symbol Count |
|------------------|-------|-----------------|----------------|
| Decimal            | 10    | 0–9              | 10               |
| Binary              | 2     | 0, 1             | 2                 |
| Hexadecimal         | 16    | 0–9, A–F         | 16               |
| Octal                | 8     | 0–7              | 8                 |

## Defining Octal

Octal is a base-8 system using only the digits 0 through 7 — nothing higher.

## How It Differs From Hex

Hexadecimal groups bits in sets of **4** (a nibble). Octal groups bits in sets of **3** instead.

```
Hex:   [ 0110 | 1001 ]     (4 bits per group)
Octal: [ 011 | 010 | 001 ] (3 bits per group)
```

## A Bit of History

Octal exists because of an older hardware convention: early computer bytes were only **6 bits** long, split naturally into two groups of 3 bits — a perfect fit for octal digits.

Once the industry standardized on the **8-bit byte**, splitting into two groups of 4 bits became the natural fit instead, which is why hexadecimal took over as the more common shorthand.

## Is Octal Still Relevant?

Octal sees very little use in modern development. It survives mainly in a handful of legacy systems, and understanding it can still matter when maintaining or interfacing with older code.

## Octal Prefixes by Language

| Language/Context | Prefix | Example  |
|----------------------|----------|------------|
| C/C++                  | 0        | 0644       |
| Python                  | 0o       | 0o644      |
| General notation        | 0O       | 0O644      |

A leading zero followed by digits is a common signal that a number is being written in octal.

## Positional Values in Octal

```
... 8³   8²   8¹   8⁰
... 512  64   8    1
```

**Example: the octal number 341₈**

```
3 × 8² + 4 × 8¹ + 1 × 8⁰
= 3 × 64 + 4 × 8 + 1 × 1
= 192 + 32 + 1
= 225 in decimal
```

## Decimal to Octal

Same repeated-division approach as hex, but dividing by 8 instead of 16.

**Example: converting 225 to octal**

- 225 ÷ 8 = 28, remainder 1
- 28 ÷ 8 = 3, remainder 4
- 3 ÷ 8 = 0, remainder 3

Reading remainders bottom to top: **341₈**

## Octal to Decimal

Multiply each digit by the correct power of 8 and add the results.

**Example: converting 341₈ to decimal**

```
1 × 8⁰ = 1
4 × 8¹ = 32
3 × 8² = 192
```
Sum: 1 + 32 + 192 = **225**

## Octal to Binary (Direct)

Each octal digit corresponds to exactly 3 binary bits.

| Octal | Binary (3 bits) |
|---------|--------------------|
| 0       | 000                 |
| 1       | 001                 |
| 2       | 010                 |
| 3       | 011                 |
| 4       | 100                 |
| 5       | 101                 |
| 6       | 110                 |
| 7       | 111                 |

**Example: converting 341₈ to binary**

- 3 → `011`
- 4 → `100`
- 1 → `001`

Result: **011100001**

## Binary to Octal (Direct)

Split the binary number into groups of 3 bits, convert each group, and join.

**Example: converting 011100001 to octal**

- Split: `011 | 100 | 001`
- Convert: 011 = 3, 100 = 4, 001 = 1
- Result: **341₈**

## Comparing All Four Systems

| Feature         | Decimal | Binary       | Octal | Hexadecimal        |
|-------------------|-----------|-----------------|---------|-----------------------|
| Base                | 10        | 2                | 8       | 16                     |
| Digit set             | 0–9       | 0, 1             | 0–7     | 0–9, A–F               |
| Bits per digit        | Varies    | 1                 | 3       | 4                       |
| Typical use            | Everyday   | Hardware internals | Rare      | Common in programming    |
| Ease of reading         | High       | Low                | Medium    | High                     |

## ASCII Character Across Systems

The letter `B` looks different depending on the system used to represent it:

- Decimal: 66
- Binary: 01000010
- Hexadecimal: 42
- Octal: 102

## Why Not Just Use Binary Everywhere

A short phrase like "hello there" written out in raw binary becomes a long, unreadable string of 0s and 1s. Hexadecimal condenses the same data into a short, readable sequence like `68 65 6c 6c 6f`, which is far easier for a person to scan — octal can do something similar, though hex remains the more natural fit for 8-bit bytes.

## Key Takeaway

Octal is a base-8 system that groups binary into sets of 3 bits, a leftover from the era of 6-bit bytes. It has mostly been replaced by hexadecimal in modern practice, but the conversion logic mirrors hex closely once the grouping size is understood.

---

**Muwafaa Sinjab**

GitHub: **@Muwafaa-Sinjab**
