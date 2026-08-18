# 02 - Breakpoint & Memory Values

## Overview

This video explains how to use breakpoints in debugging mode. It covers how to pause a running program at a specific line, how to step through the code, and how to inspect the values stored in memory during the pause.

## Main Topics

### Breakpoints

A breakpoint is a marker placed on a line of code. When the program runs in debugging mode, it executes normally until it reaches this marker, where it pauses. This allows the developer to examine the program's state before continuing. Placing a breakpoint on an empty line has no effect because there is no code for the program to stop at.

### Tracing Code Line by Line

After the program stops at a breakpoint, an arrow indicates the current execution position. The arrow points to the line that is about to run, meaning that specific line has not been executed yet. To execute the current line and move the arrow down to the next one, the F11 shortcut is used.

### Inspecting Variable Values

While the program is paused, placing the mouse cursor over a variable displays its current value. However, if a variable was declared without an initial value, the compiler fills that memory space with random, useless data. Using this uninitialized data later in the program can cause runtime errors.

## Key Takeaways

- Breakpoints pause program execution at a specific code line for inspection.
- A breakpoint placed on an empty line will not stop the program.
- The F11 shortcut executes the current line and moves to the next.
- The debugging arrow points to the next line to be executed, not the last executed line.
- Uninitialized variables contain random data that can lead to runtime errors.

Muwafaa Sinjab @Muwafaa-Sinjab