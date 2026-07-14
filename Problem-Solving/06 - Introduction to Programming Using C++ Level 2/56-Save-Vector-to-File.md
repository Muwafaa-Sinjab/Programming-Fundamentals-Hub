# 56 - Save Vector to File

## Overview

This video explains the final step in the file modification workflow, which is saving the contents of a vector back to a text file. It covers the correct file mode to use, how to handle function parameters to prevent accidental modifications, and how to avoid saving empty lines.

## Main Topics

### Write Mode for Saving

The file is opened using `ios::out`. This mode ensures that the file is created if it does not exist, or completely cleared if it does, so that the updated data from the vector can be written from the beginning.

### Passing the Vector by Value

Unlike the loading function, the vector is passed to the saving function without the `&` symbol. Passing by value creates a local copy of the vector inside the function. This guarantees that the function only reads the data and cannot accidentally modify the original vector in the main program.

### Using References in the Loop

Even though the parameter is passed by value, the `&` symbol is used inside the ranged loop. This prevents the program from creating unnecessary copies of each string while iterating, making the saving process faster and more memory efficient.

### Filtering Empty Lines

Before writing a line to the file, a condition checks if the string is not empty (`!= ""`). This validation step prevents saving unnecessary blank lines into the text file.

```cpp
void SaveVectorToFile(string FileName, vector<string> vFileContent) {
    fstream MyFile;
    MyFile.open(FileName, ios::out);

    if (MyFile.is_open()) {
        for (string& Line : vFileContent) {
            if (Line != "") {
                MyFile << Line << endl;
            }
        }
        MyFile.close();
    }
}
```

## Key Takeaways

- Saving a vector to a file completes the load, modify, and save workflow.
- `ios::out` is used to overwrite the file with the updated vector data.
- The vector parameter is passed by value to protect the original data from accidental changes.
- The `&` symbol is still used in the loop to avoid copying strings during iteration.
- Checking for empty strings prevents blank lines from appearing in the saved file.

Muwafaa Sinjab @Muwafaa-Sinjab