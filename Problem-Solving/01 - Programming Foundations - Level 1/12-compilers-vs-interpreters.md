# Compilers vs. Interpreters

## Context

High-level code needs to become machine code somehow, and that job falls to translator software. There are two distinct approaches to doing this: compiling and interpreting.

## A Running Example

Throughout this topic, imagine a small program:

```
PRINT "City: Amman"
PRINT "Temperature: 28"
```

## Compilers

### Definition

A compiler translates the entire source code into machine code (object code) **before** the program ever runs.

### Step 1 — Building

When a build command is issued, the compiler:
1. Reads the whole program in one pass
2. Scans it completely for errors
3. Halts immediately if it finds even one, without producing any output

```
' Valid line
PRINT "City: Amman"

' Invalid line — typo
PRIN "Temperature: 28"    ← build stops here
```

### Step 2 — Producing Object Code

If the check passes, the compiler generates machine-readable object code:

```
0x436974793a2041
0x54656d703a2032
```

### Step 3 — Linking

```
Object Code + Libraries ──[Linker]──> Executable (.exe)
```

The linker combines the object code with any required libraries and produces a runnable executable file.

### Step 4 — Running the Executable

```
.exe file ──[launched]──> Loader ──> Memory ──> Execution
```

The loader places the program into memory and starts it running.

### Strengths and Weaknesses

**Strengths:** very fast execution, all errors caught in one pass, produces a shareable executable, source code isn't needed once built.

**Weaknesses:** the build step adds extra time, any change requires rebuilding, the overall process has more moving parts.

### Example: Changing the Code

```
Original:  PRINT "Temperature: 28"
Updated:   PRINT "Temperature: 31"

Source Code ──[rebuild]──> new Object Code ──[relink]──> new .exe
```

Only after this full cycle does the updated output appear.

## Interpreters

### Definition

An interpreter reads and runs source code **one line at a time**, without ever producing object code or an executable file.

### How It Works

There's no separate build step — running the program starts execution immediately.

```
Line 1: PRINT "City: Amman"
├── read
├── checked
├── executed
└── output: City: Amman

Line 2: PRINT "Temperature: 28"
├── read
├── checked
├── executed
└── output: Temperature: 28
```

### What Happens on an Error

```
PRINT "City: Amman"        ← runs fine
PRIN "Temperature: 28"     ← stops here, error shown
PRINT "Done"                ← never reached
```

### Strengths and Weaknesses

**Strengths:** runs immediately with no build step, easy to tweak and re-test, no compile time, very flexible during development.

**Weaknesses:** generally slower than compiled code, the source code must always be present to run, produces no standalone executable, errors only surface once execution reaches them.

## Side-by-Side Comparison

| Aspect               | Compiler                          | Interpreter                        |
|-------------------------|--------------------------------------|----------------------------------------|
| How it reads code          | Entire program at once                | One line at a time                       |
| Error detection               | All errors found before running         | Errors surface during execution            |
| Execution speed                  | Very fast                                  | Comparatively slower                          |
| Object code                        | Generated and stored                          | Never generated                                  |
| Executable output                     | Produces a runnable file                         | No standalone file produced                        |
| Making changes                          | Requires a full rebuild                            | Changes take effect immediately                       |
| Sharing the program                        | Easy — just distribute the executable                | Requires distributing the source code itself           |

## Two Different Workflows

**Compiler:**
```
Source Code
   ↓ build
Full read + error check
   ↓ if clean
Object Code (stored)
   ↓ link
Executable (stored)
   ↓ run
Loader → Memory → Fast execution
```

**Interpreter:**
```
Source Code
   ↓ run
Read first line → check → execute
   ↓
Read next line → check → execute
   ↓
... continues sequentially
```

## Languages by Category

**Typically compiled:** C, C++, Rust, Go, Pascal

**Typically interpreted:** Python, Ruby, JavaScript, PHP, MATLAB

## A Special Case: The Assembler

An **assembler** converts assembly language directly into machine code:

```
Assembly Language ──[Assembler]──> Machine Code
```

It isn't called a compiler because compilers translate from *high-level* languages down to lower-level code, while an assembler works on code that's already low-level — assembly — and converts it the rest of the way to machine code.

## Choosing Between Them

**Lean toward a compiled language when:**
- Raw execution speed matters
- The program needs to be distributed without exposing source code
- The project is large and performance-sensitive
- Stability and tighter security are priorities

**Lean toward an interpreted language when:**
- Fast iteration and flexibility matter most
- The project is small to medium in scope
- Immediate testing and feedback are valuable
- Collaborators need visibility into the actual source

## Key Takeaway

A compiler translates a program fully before it runs, trading extra build time for faster execution and an easily distributable file. An interpreter skips that upfront step and runs code line by line, trading raw speed for flexibility and instant feedback. Neither approach is universally better — the right choice depends on what the project actually needs.

---

**Muwafaa Sinjab**

GitHub: **@Muwafaa-Sinjab**
