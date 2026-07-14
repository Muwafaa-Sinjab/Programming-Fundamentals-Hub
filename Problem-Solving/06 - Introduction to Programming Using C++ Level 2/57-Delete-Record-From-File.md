# 57 - Delete Record From File

## Overview

This video demonstrates how to delete a specific record from a text file. It applies the standard file modification workflow introduced in the previous lessons to locate and remove targeted data.

## Main Topics

### The Deletion Workflow

Deleting a record from a file does not happen directly. The process follows the same three steps used for file modification: loading the file data into a vector, modifying the vector by removing the unwanted record, and saving the updated vector back to the file.

### Finding and Modifying the Record

A function is created that accepts the file name and the record to be deleted. The data is loaded into a vector that is passed by reference (`&`), allowing the function to make changes to the original data. A loop iterates through the vector to find the string that exactly matches the target record.

### Marking for Deletion

Instead of using complex methods to erase the element from the vector, the video demonstrates a simpler approach. When the matching record is found, its value is changed to an empty string `""`. This marks the record as deleted without shifting the vector's indexes.

### Saving the Updated File

After the target record is set to an empty string, the vector is passed to the save function. Because the save function already contains a condition to skip empty lines (`if (Line != "")`), the deleted record is automatically excluded when the file is rewritten to the hard disk.

```cpp
void DeleteRecordFromFile(string FileName, string Record) {
    vector <string> vFileContent;

    LoadDataFromFileToVector(FileName, vFileContent);

    for (string& Line : vFileContent) {
        if (Line == Record) {
            Line = ""; // Mark for deletion
        }
    }

    SaveVectorToFile(FileName, vFileContent);
}
```

## Key Takeaways

- File deletion relies on the load, modify, and save workflow.
- The vector must be passed by reference so the modifications are preserved.
- Deletion is handled by setting the target string to an empty string rather than erasing it.
- The existing empty string check in the save function prevents the deleted record from being written back.

Muwafaa Sinjab @Muwafaa-Sinjab