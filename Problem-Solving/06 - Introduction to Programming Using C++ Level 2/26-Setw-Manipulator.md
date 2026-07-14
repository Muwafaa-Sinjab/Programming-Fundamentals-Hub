# 26 - Setw Manipulator

## Overview

This video introduces the `setw` manipulator from the `<iomanip>` library. It explains how to reserve a specific number of spaces for output, which is primarily used to create neatly aligned tables and structured text in the console.

## Main Topics

### The setw Manipulator

The `setw` (set width) manipulator defines the minimum number of characters that will be used for the next output item. If the output is shorter than the specified width, the remaining space is filled with blank spaces by default. This manipulator only affects the single item immediately following it.

### Creating Formatted Output

Using `setw` allows developers to align text and numbers into consistent columns. By applying the same width value to each row, the console output forms a clean table, even if the text lengths vary.

```cpp
cout << setw(10) << "Name"
     << setw(10) << "Age"
     << setw(10) << "Score" << endl;
cout << setw(10) << "Ali"
     << setw(10) << 20
     << setw(10) << 95 << endl;
```

### The setfill Manipulator

The video also covers `setfill`, which is used alongside `setw`. By default, the empty spaces are filled with blank characters. The `setfill` manipulator changes this fill character to something else, such as a dash or an equals sign. Because `setfill` remains active for all subsequent outputs until changed, it is important to reset it back to a blank space (`setfill(' ')`) when it is no longer needed.

## Key Takeaways

- The `<iomanip>` library must be included to use `setw`.
- `setw` sets the minimum width for the immediately following output.
- It is highly effective for aligning data into table-like structures.
- `setfill` changes the default blank space to any specified character.
- `setfill` remains active and must be manually reset to a blank space.

Muwafaa Sinjab @Muwafaa-Sinjab