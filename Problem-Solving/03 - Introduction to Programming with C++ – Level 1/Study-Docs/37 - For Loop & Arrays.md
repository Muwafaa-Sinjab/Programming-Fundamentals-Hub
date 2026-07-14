# 37 - For Loop & Arrays

## Overview
This lesson combines `for` loops with arrays, showing how to read, print, and process a list of numbers whose length is decided by the user.

## Reading and Printing an Array with a Loop
```cpp
void readArrayData(int arr[100], int &length) {
    cout << "How many numbers? (1-100): ";
    cin >> length;

    for (int i = 0; i < length; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void printArrayData(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << "Number " << (i + 1) << ": " << arr[i] << endl;
    }
}
```

The loop condition `i < length` matches the array's indexes, which run from 0 to `length - 1`.

## Calculating a Sum and an Average
```cpp
int calculateSum(int arr[100], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}

float calculateAverage(int arr[100], int length) {
    int sum = calculateSum(arr, length);
    return (float)sum / length;
}
```

## Putting It Together
```cpp
int main() {
    int numbers[100], length;

    readArrayData(numbers, length);
    printArrayData(numbers, length);

    cout << "Sum = " << calculateSum(numbers, length) << endl;
    cout << "Average = " << calculateAverage(numbers, length) << endl;
    return 0;
}
```

Example run:
```
How many numbers? (1-100): 3
Enter number 1: 10
Enter number 2: 20
Enter number 3: 30

Number 1: 10
Number 2: 20
Number 3: 30

Sum = 60
Average = 20
```

## Looping in Reverse
The loop can also move backward through the array, from the last index to the first.

```cpp
for (int i = length - 1; i >= 0; i--) {
    cout << arr[i] << endl;
}
```

## Finding the Largest Value
```cpp
int findMax(int arr[100], int length) {
    int max = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
```

The loop starts comparing from index 1, since `arr[0]` is already used as the starting guess for the maximum.

## Summary
- A `for` loop with the condition `i < length` matches an array's valid index range.
- Reading, printing, and calculating values from an array all follow the same loop pattern.
- A loop can move forward (`i++`) or backward (`i--`) through an array.
- Finding a maximum or minimum works by comparing each element against the current best value found so far.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
