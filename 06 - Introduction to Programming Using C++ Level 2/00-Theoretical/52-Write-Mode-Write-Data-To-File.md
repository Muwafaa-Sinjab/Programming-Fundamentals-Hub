# 52 - Write Mode: Write Data To File

## Overview

This video introduces file handling in C++, focusing on how to write data to a text file. It explains the required library, the behavior of write mode, and the necessary steps to save and close the file.

## Main Topics

### The fstream Library

To perform file operations, the `<fstream>` library must be included. An object of type `fstream` is created to represent the file in the program. Before writing any data, it is standard practice to check if the file opened successfully using the `.is_open()` function.

### Opening in Write Mode

The file is opened using the `.open()` function, which takes two arguments: the file name as a string, and the mode `ios::out`. This mode creates the file if it does not exist, or opens it if it already does.

### Overwriting Behavior

Using `ios::out` means the program operates in Write Mode. In this mode, any existing data in the file is completely deleted every time the program runs. The file is treated as empty, and saving starts from the beginning.

### Writing Data

Data is sent to the file using the stream insertion operator `<<`. Instead of using `cout` to print to the screen, the file object name is used. This directs the text into the file.

### Closing the File

After all data is written, the `.close()` function must be called. This step is essential to ensure the data is properly saved to the hard disk and to release the file from the program's memory.

```cpp
fstream MyFile;
MyFile.open("MyFile.txt", ios::out);

if (MyFile.is_open()) {
    MyFile << "Hi, this is the first line \n";
    MyFile << "Hi, this is the second line \n";
    MyFile.close();
}
```

### Locating the Saved File

The video explains how to find the physical text file on the computer. This is done through the Visual Studio interface by opening the Solution Explorer, right-clicking the project name, and selecting "Open Folder in File Explorer" to view the hard disk directory.

## Key Takeaways

- The `<fstream>` library is required to handle file input and output.
- `ios::out` opens a file in Write Mode and deletes all previous data.
- The `<<` operator writes data to the file instead of the screen.
- The `.close()` function must be called to save the data and close the file properly.

Muwafaa Sinjab @Muwafaa-Sinjab