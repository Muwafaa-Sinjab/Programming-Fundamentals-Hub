# 55 - Load Data From File to Vector

## Overview

This video introduces a standard workflow for modifying file data from within a program. The first step in this workflow is loading the file content into a vector so the data can be easily managed and manipulated in memory.

## Main Topics

### The File Modification Workflow

To safely edit a file programmatically, the data must first be brought into the memory. This process follows three main steps: loading the original file data into a vector, making additions or modifications to the vector, and finally saving the updated vector back to the file.

### Reading and Storing Data

A function is created to handle the loading process. The file is opened in read mode (`ios::in`). The `getline` function is used inside a loop to read the file line by line. As each line is captured in a string variable, it is immediately added to the vector using the `push_back` method.

### Passing the Vector by Reference

When creating the function to load the data, the vector parameter must be passed by reference using the `&` symbol. If the vector is passed by value, the function will only fill a temporary local copy. Once the function ends, that copy is destroyed, and the original vector in the `main` function remains empty.

```cpp
void LoadDataFromFileToVector(string FileName, vector<string>& vFileContent) {
    fstream MyFile;
    MyFile.open(FileName, ios::in);

    if (MyFile.is_open()) {
        string Line;
        while (getline(MyFile, Line)) {
            vFileContent.push_back(Line);
        }
        MyFile.close();
    }
}
```

## Key Takeaways

- Modifying a file in a program follows a three-step workflow: load, modify, and save.
- `getline` is used to read the file, and `push_back` stores each line in the vector.
- The vector parameter must be passed by reference to retain the loaded data in the main program.

Muwafaa Sinjab @Muwafaa-Sinjab