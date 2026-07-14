# Data Representation: The Binary System

## Why Computers Use Binary

At the hardware level, a computer can only detect two physical states: current flowing through a circuit, or no current at all. Because of this, every form of data the machine handles — numbers, words, pictures, sound — has to be broken down into combinations of just two symbols: 1 and 0.

## Decimal vs. Binary

| Decimal                  | Binary                  |
|-----------------------------|-----------------------------|
| Ten possible digits (0–9)   | Two possible digits (0, 1) |
| Base-10 counting system     | Base-2 counting system      |
| Natural for humans          | Native language of hardware |

## Bits and Bytes

A **bit** is a single binary digit — the smallest possible unit of storage, holding only a 0 or a 1.

Grouping **8 bits together** forms a **byte**, which is the smallest chunk of data considered meaningful on its own. One byte can represent any whole number from 0 up to 255.

Reading a byte from left to right, each slot corresponds to a decreasing power of 2:

```
128   64   32   16   8    4    2    1
2⁷    2⁶   2⁵   2⁴   2³   2²   2¹   2⁰
```

The leftmost slot is the most significant bit; the rightmost is the least significant.

## Turning a Decimal Number into Binary

Break the number down into powers of 2 that add up to it, mark those positions with 1, and leave everything else as 0.

| Decimal | Sum of Powers   | Binary Form |
|---------|--------------------|---------------|
| 6       | 4 + 2              | 00000110      |
| 9       | 8 + 1              | 00001001      |
| 12      | 8 + 4              | 00001100      |
| 25      | 16 + 8 + 1         | 00011001      |
| 50      | 32 + 16 + 2        | 00110010      |

## Turning Binary Back into Decimal

Multiply every digit by the value of its column, then add the results together.

| Binary     | Working Out  | Decimal |
|-------------|----------------|-----------|
| 00000110   | 4 + 2          | 6         |
| 00001001   | 8 + 1          | 9         |
| 00001100   | 8 + 4          | 12        |
| 00011001   | 16 + 8 + 1     | 25        |
| 00110010   | 32 + 16 + 2    | 50        |

## How Much a Byte Can Hold

| Storage Size     | Highest Reachable Value |
|---------------------|------------------------------|
| 1 byte (8 bits)     | 255 (2⁸ − 1)                  |
| 2 bytes (16 bits)   | 65,535 (2¹⁶ − 1)              |

## Encoding Text: The ASCII Table

ASCII assigns a unique number to every character. A few examples:

- `D` = 68
- `M` = 77
- `z` = 122
- `0` (the digit) = 48

Take the letter `D`: its ASCII value is 68, and in binary that is `01000100`, since 64 + 4 = 68.

An interesting side effect: nothing in storage marks a number as "a character" versus "a quantity." The same stored value could mean a letter or a number depending entirely on what the running program does with it. The digits "12" might be read as an age in one context and as a room number in another — the computer doesn't know the difference on its own.

## Going Beyond English: Unicode

ASCII was built with English in mind, so it has no way to represent scripts like Arabic, Chinese, or Cyrillic. **Unicode** was created to solve this gap — it covers characters from essentially every written language, letting computers store and display Arabic text just as reliably as English text.

## A Real-World Use of Bit Patterns

Binary digits aren't limited to representing single characters or plain numbers — a single binary value can also stand for a combination of selected options. For instance, an app could use one binary number where each bit position marks whether a specific topping was chosen, letting one small value describe an entire custom order.

## Key Takeaway

Every computer operates purely in binary at its core. A byte, made of 8 bits, is the smallest unit that carries real meaning, and all information — whatever form it takes — eventually becomes a sequence of bits. Character-encoding systems like ASCII and Unicode are what let those bits map back into readable text.

---

**Muwafaa Sinjab**

GitHub: **@Muwafaa-Sinjab**
