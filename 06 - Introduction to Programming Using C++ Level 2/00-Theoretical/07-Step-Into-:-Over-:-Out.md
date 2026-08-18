# 07 - Step Into / Over / Out

## Overview

This video covers the three main navigation buttons used to control code execution in debugging mode. These buttons dictate how the program moves through the code, particularly when functions are involved.

## Main Topics

### Step Into (F11)

This option moves the execution to the next line of code. If the next line contains a function call, Step Into enters that function. This allows the developer to trace the internal code of the function line by line.

### Step Over (F10)

This option also moves the execution to the next line, but it skips entering any functions. If the current line calls a function, the entire function is executed in the background, and the debugger stops at the line immediately following the call.

### Step Out (Shift + F11)

This option is used when the execution pointer is already inside a function. It runs all the remaining lines of that function and stops at the line right after the original function call.

## Key Takeaways

- Step Into enters a function to trace its internal code (F11).
- Step Over executes a function completely without going inside it (F10).
- Step Out exits the current function and returns to the calling code (Shift + F11).

Muwafaa Sinjab @Muwafaa-Sinjab