# 54 - Read Mode: Print File Content

## Overview

This video explains how to read data from a text file and display it on the screen. It introduces the read mode flag and the standard method for extracting text line by line until the end of the file.

## Main Topics

### Read Mode (ios::in)

The `ios::in` flag is used to open a file for reading purposes only. When a file is opened in this mode, the program cannot modify, add, or delete any data inside it. This mode is considered the fastest and most efficient way to read file contents in C++.

### Reading Lines with getline

To extract text from the file, the `getline()` function is used. This function takes two arguments: the file object and a string variable. It reads the file from the current position, captures all characters until it reaches a newline character, and stores that line of text in the string variable.

### Looping Through the File

The `getline()` function is typically placed inside a `while` loop. The loop condition evaluates the `getline()` function directly. As long as there are lines to read, the function returns true, the loop body executes to print the line, and the file cursor moves to the next line. When the end of the file is reached, `getline()` returns false, and the loop stops automatically.

```cpp
fstream MyFile;
MyFile.open("MyFile.txt", ios::in);

if (MyFile.is_open()) {
    string Line;
    while (getline(MyFile, Line)) {
        cout << Line << endl;
    }
    MyFile.close();
}
```

## Key Takeaways

- The `ios::in` flag opens a file in read-only mode, preventing any modifications.
- The `getline()` function is used to read one line of text at a time from a file.
- Placing `getline()` in a `while` loop allows the program to print the entire file automatically.
- The loop terminates naturally when the end of the file is reached.

Muwafaa Sinjab @Muwafaa-Sinjab