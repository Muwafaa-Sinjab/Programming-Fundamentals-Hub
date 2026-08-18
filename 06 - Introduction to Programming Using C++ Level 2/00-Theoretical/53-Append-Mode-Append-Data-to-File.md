# 53 - Append Mode: Append Data to File

## Overview

This video explains how to add data to a file without deleting the existing content. It covers the append mode and how it differs from the standard write mode introduced in the previous lesson.

## Main Topics

### The Problem with Write Mode

As seen in the previous lesson, using `ios::out` alone causes the program to delete all previous data in the file every time it runs. The file is treated as completely empty, and writing starts from the beginning.

### Append Mode (ios::app)

Append mode prevents the deletion of old data. When the file is opened using the `ios::app` flag, the program keeps all existing information and places the new text directly at the end of the file.

### Combining File Modes

To ensure the file is created if it does not already exist, while also appending data if it does, two flags can be combined. The bitwise OR operator (`|`) is used to join `ios::out` and `ios::app`. This gives the program priority to add information while safely handling the file's existence.

```cpp
fstream MyFile;
// Create the file if it doesn't exist, or append to it if it does
MyFile.open("MyFile.txt", ios::out | ios::app);

if (MyFile.is_open()) {
    MyFile << "Hi, this is a new line \n";
    MyFile.close();
}
```

## Key Takeaways

- Append mode preserves the existing data inside a file.
- The `ios::app` flag adds new content to the end of the file.
- Combining `ios::out | ios::app` ensures the file is created if missing and appends data if it exists.

Muwafaa Sinjab @Muwafaa-Sinjab