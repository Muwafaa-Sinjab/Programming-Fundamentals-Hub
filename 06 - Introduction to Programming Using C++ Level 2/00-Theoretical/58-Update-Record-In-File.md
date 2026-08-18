# 58 - Update Record In File

## Overview

This video explains how to update an existing record in a text file. It demonstrates that updating follows the exact same workflow used for deleting records, focusing on replacing data within the vector before saving it back.

## Main Topics

### The Update Workflow

Modifying a specific record in a file does not happen directly. The process relies on the standard three-step workflow: copying the file content into a vector, modifying the target data inside the vector, and saving the updated vector back to the file.

### Locating and Modifying the Record

A function is created that accepts the file name, the old record, and the new record. The file data is loaded into a vector passed by reference. A loop iterates through the vector to find the string that exactly matches the old record. Once found, the old string is replaced with the new string value.

### Applying the Changes

After the target string in the vector is replaced, the save function is called. This function overwrites the original file with the contents of the modified vector, completing the update process.

```cpp
// Logical representation of the modification step
for (string& Line : vFileContent) {
    if (Line == OldRecord) {
        Line = NewRecord;
    }
}
```

## Key Takeaways

- Updating a record uses the same load, modify, and save workflow as deleting.
- The old string is located in the vector and replaced with the new string.
- The vector must be passed by reference to allow the modifications to take effect.
- The existing save function handles writing the updated vector back to the hard disk.

Muwafaa Sinjab @Muwafaa-Sinjab