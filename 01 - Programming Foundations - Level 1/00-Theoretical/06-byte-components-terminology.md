# Byte Components and Terminology

## Why This Matters

Beyond bits and bytes, a few smaller groupings have their own names. Knowing these terms makes it much easier to follow how binary data is broken down in later topics.

## Quick Recap

A **bit** (short for binary digit) is the smallest possible unit of memory, holding either 0 or 1.

A **byte** groups 8 bits together and is the smallest unit that carries meaningful information on its own.

```
[ 1 | 0 | 0 | 1 | 0 | 1 | 1 | 0 ]
  7   6   5   4   3   2   1   0   ← bit positions
```

## Crumb

A **crumb** is a pair of two adjacent bits within a byte.

```
[ 10 | 01 | 01 | 10 ]
  ↑    ↑    ↑    ↑
 crumb crumb crumb crumb
  4     3     2     1
```

## Nibble

A **nibble** is a group of 4 adjacent bits — informally called a "half byte." Its main significance is that one nibble maps directly to a single hexadecimal digit.

A byte splits neatly into exactly two nibbles:

```
[ 1001 | 0110 ]
   ↑       ↑
 upper   lower
 nibble  nibble
```

## Upper Nibble vs. Lower Nibble

| Nibble         | Bit Positions | Significance          | Hex Role                |
|------------------|------------------|---------------------------|-----------------------------|
| Lower nibble       | 0–3               | Smaller-value bits         | Second hex digit             |
| Upper nibble       | 4–7               | Larger-value bits          | First hex digit               |

**Example — byte `10010110`:**
- Upper nibble: `1001` (positions 7,6,5,4)
- Lower nibble: `0110` (positions 3,2,1,0)

## LSB and MSB

- **Least Significant Bit (LSB):** position 0, the rightmost bit, worth 2⁰ = 1 — the smallest possible contribution to the byte's value.
- **Most Significant Bit (MSB):** position 7, the leftmost bit, worth 2⁷ = 128 — the largest possible contribution.

```
 MSB                             LSB
  ↓                                ↓
[128] [64] [32] [16] [8] [4] [2] [1]
  7    6    5    4   3   2   1   0
 2⁷   2⁶   2⁵   2⁴  2³  2²  2¹  2⁰
```

## How the Units Relate

| Unit    | Bits per Unit | Units per Byte |
|-----------|------------------|--------------------|
| Bit        | 1                 | 8                    |
| Crumb      | 2                 | 4                    |
| Nibble      | 4                 | 2                    |

## Worked Example: Byte `10010110`

**Split into nibbles:**
- Upper nibble: `1001` = 9 in hex
- Lower nibble: `0110` = 6 in hex
- Full hex representation: **96**

**Split into crumbs:**
- Crumb 4 (positions 7,6): `10`
- Crumb 3 (positions 5,4): `01`
- Crumb 2 (positions 3,2): `01`
- Crumb 1 (positions 1,0): `10`

**Key bits:**
- MSB (position 7): `1`
- LSB (position 0): `0`

## Key Takeaway

A byte breaks down into smaller named groupings: 2 nibbles, 4 crumbs, or 8 individual bits. The upper and lower nibbles map directly onto the two digits of a byte's hexadecimal form, and the MSB/LSB mark the largest and smallest positional values within it.

---

**Muwafaa Sinjab**

GitHub: **@Muwafaa-Sinjab**
