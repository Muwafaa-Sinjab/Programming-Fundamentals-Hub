# Speed and Measurement Units in Computing

## Overview

This topic covers how computers measure storage capacity and processing speed, plus the practical difference between 32-bit and 64-bit architectures.

## From Bit to Byte

A **bit** holds a single 0 or 1 — nothing smaller exists in digital storage.
A **byte** groups 8 bits together and is the first unit that can represent something meaningful, like a single character.

## Climbing the Storage Ladder

| Unit       | Short Form | Made Of         |
|-------------|--------------|-------------------|
| Byte        | B            | 8 bits            |
| Kilobyte    | KB           | 1024 bytes        |
| Megabyte    | MB           | 1024 kilobytes    |
| Gigabyte    | GB           | 1024 megabytes    |
| Terabyte    | TB           | 1024 gigabytes    |

Computing doesn't follow the everyday metric convention where "kilo" means exactly 1000. Because computers run on binary, each step up the ladder multiplies by 1024 (2¹⁰), not 1000.

Beyond terabyte, the scale continues with units rarely encountered in daily use:

| Unit        | Short Form | Made Of          |
|--------------|--------------|--------------------|
| Petabyte     | PB           | 1024 terabytes     |
| Exabyte      | EB           | 1024 petabytes     |
| Zettabyte    | ZB           | 1024 exabytes      |
| Yottabyte    | YB           | 1024 zettabytes    |

## Putting the Units in Context

- **Kilobytes:** a short plain-text note
- **Megabytes:** a typical smartphone photo
- **Gigabytes:** a full-length video file or a phone's total storage
- **Terabytes:** an external backup drive holding years of files
- **Petabytes:** the scale large streaming platforms operate at

## Memory Speed Hierarchy (Recap)

Ordered from fastest and smallest to slowest and largest:

1. **Registers** — built directly into the processor, extremely fast
2. **Cache** — sits just outside the processor core, still very fast
3. **RAM** — holds active data temporarily while the system runs
4. **Hard disk** — stores data permanently but takes much longer to access

The general rule: proximity to the processor buys speed, but at the cost of capacity.

## Measuring Processor Speed

Processor speed is expressed in **Hertz**, meaning the number of cycles the chip completes every second. In a single cycle, an enormous number of transistors inside the chip switch on and off.

A processor rated at **3.5 GHz** completes 3.5 billion cycles every second.

## What Actually Determines Speed

Clock frequency alone doesn't tell the whole story. Two factors combine:

- **Clock speed (GHz):** a higher number generally means faster raw processing
- **Chip generation/family:** newer architectures (for example, a newer Core i5 versus an older Core i7) can be more efficient per cycle

Because of this, a newer processor running at a lower GHz can outperform an older one running at a higher GHz.

## 32-bit vs. 64-bit Architecture

| Aspect                | 32-bit             | 64-bit                  |
|-------------------------|----------------------|----------------------------|
| Raw performance         | Lower                | Higher                     |
| Age of design            | Older standard        | Current standard            |
| Typical speed            | Slower                | Faster                       |
| Security features        | Fewer                | More extensive               |
| RAM ceiling               | Capped at 4 GB        | Effectively in the terabytes |
| Addressable memory        | 2³² combinations      | 2⁶⁴ combinations             |

## Compatibility Rules

- A 32-bit operating system can only run 32-bit software.
- A 64-bit operating system can run both 32-bit and 64-bit software.
- Installing a 32-bit OS on hardware capable of 64-bit wastes its potential — the system will be locked to a 4 GB RAM limit regardless of how much physical RAM is installed.

## Checking Your System Type

On Windows, searching for "About your PC" from the Start menu displays the processor model, whether the OS is 32-bit or 64-bit, and the installed RAM.

## Key Takeaway

Storage units scale in powers of 1024 because computers count in binary. Processing speed depends on both clock frequency and chip generation, not frequency alone. Choosing between 32-bit and 64-bit affects how much RAM a system can actually use and which software it can run.

---

**Muwafaa Sinjab**

GitHub: **@Muwafaa-Sinjab**
