# 28 - Arrays

## Overview
This lesson introduces arrays: a way to store multiple values of the same type under a single variable name.

## What Is an Array?
An array holds several values together, all of the same data type. Each value has a position, called an index, and indexing starts from 0. A `string` is actually a special case of this idea, since it is essentially an array of characters.

## Basic Example
```cpp
int numbers[5] = {22, 18, 2, 55, 520};

cout << numbers[0] << endl;   // 22
cout << numbers[1] << endl;   // 18
cout << numbers[4] << endl;   // 520

int sum = numbers[0] + numbers[4];
cout << sum << endl;   // 542
```

## How an Array Is Stored
An array of 5 values is placed in memory as consecutive slots, each with its own index:

```
Index:     0     1     2     3     4
Value:    22    18     2    55   520
```

## Arrays of Different Types
Arrays can hold any data type, as long as all elements share the same type.

```cpp
float prices[4] = {10.5, 20.3, 15.7, 8.9};
char grades[5] = {'A', 'B', 'C', 'D', 'F'};
bool flags[3] = {true, false, true};
```

An array can also be defined without initial values, and filled in afterward.

```cpp
int numbers[3];
numbers[0] = 10;
numbers[1] = 20;
numbers[2] = 30;
```

## Common Mistakes
**Accessing an index that does not exist:**
```cpp
int arr[5] = {1, 2, 3, 4, 5};
cout << arr[5];   // wrong, valid indexes are 0 to 4
```

**Forgetting that indexing starts at 0:**
```cpp
int arr[3] = {10, 20, 30};
cout << arr[1];   // prints 20, not the first value
cout << arr[0];   // this prints the first value, 10
```

## Processing All Elements with a Loop
Loops are commonly used to work through every element of an array.

```cpp
const int SIZE = 5;
int numbers[SIZE] = {10, 20, 30, 40, 50};

int sum = 0;
for (int i = 0; i < SIZE; i++) {
    sum += numbers[i];
}

cout << "Total: " << sum << endl;
```

Using a constant, such as `SIZE`, for the array's length makes the code clearer and easier to update than writing the number directly each time.

## Why Use Arrays
Without arrays, storing many related values requires a separate variable for each one, such as `student1`, `student2`, up to `student100`. An array replaces all of this with a single, organized variable, such as `int students[100];`, which is much easier to manage and process.

## Summary
- An array stores multiple values of the same type under one name.
- Indexing starts at 0 and goes up to size minus one.
- Accessing an index outside this range is a common and serious mistake.
- Loops are the standard way to process every element in an array.
- Arrays make code more organized and easier to maintain than using many separate variables.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
