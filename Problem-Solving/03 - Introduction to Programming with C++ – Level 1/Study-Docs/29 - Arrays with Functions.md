# 29 - Arrays with Functions

## Overview
This lesson explains how arrays behave when they are passed into functions, and how to build functions that work with any array.

## Arrays Are Passed By Reference Automatically
Unlike normal variables, an array is always passed by reference, even without writing `&`. This means any change made to the array inside a function affects the original array directly.

```cpp
void modifyArray(int arr[3]) {
    arr[0] = 100;   // changes the original array
}

int main() {
    int myArray[3] = {1, 2, 3};
    modifyArray(myArray);
    cout << myArray[0];   // prints 100, not 1
    return 0;
}
```

This is different from structures, which are passed by value by default, unless `&` is added.

## Reading and Printing an Array
```cpp
void readArrayData(int x[3]) {
    cout << "Enter value for x[0]: ";
    cin >> x[0];
    cout << "Enter value for x[1]: ";
    cin >> x[1];
    cout << "Enter value for x[2]: ";
    cin >> x[2];
}

void printArrayData(int x[3]) {
    cout << "x[0] = " << x[0] << endl;
    cout << "x[1] = " << x[1] << endl;
    cout << "x[2] = " << x[2] << endl;
}

int main() {
    int x[3];
    readArrayData(x);
    printArrayData(x);
    return 0;
}
```

## A Common Mistake
Adding `&` before an array parameter is not needed and is not valid, since arrays are already passed by reference.

```cpp
// Wrong
void readArray(int &arr[3]) { }

// Correct
void readArray(int arr[3]) { }
```

## Writing Functions for Any Array Size
Passing the array's size as a separate parameter allows one function to work with arrays of different lengths.

```cpp
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}

int main() {
    int array1[3] = {1, 2, 3};
    int array2[5] = {10, 20, 30, 40, 50};

    printArray(array1, 3);
    printArray(array2, 5);
    return 0;
}
```

## Functions That Process an Array
Functions can also calculate a result from an array, such as its sum or largest value.

```cpp
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
```

## Summary
- Arrays are always passed by reference; `&` should not be used with them.
- Any change made to an array inside a function changes the original array.
- Passing the array's size as a separate parameter allows a function to work with arrays of any length.
- Combining arrays with functions keeps code organized, since each function can be reused for different arrays.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
