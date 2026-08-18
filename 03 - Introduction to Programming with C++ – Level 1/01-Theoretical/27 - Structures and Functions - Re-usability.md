# 27 - Structures and Functions - Re-usability

## Overview
This lesson shows how combining structures with functions makes a program easier to reuse and maintain, using an example built around a person's information.

## The Structure
A structure groups related data under one type, such as a person's basic details.

```cpp
struct Person {
    string firstName, lastName;
    int age;
    string phone;
};
```

## A Function to Read Data (By Reference)
A function that fills in a structure's data should take it by reference, so the changes are saved in the original variable.

```cpp
void readInfo(Person &info) {
    cout << "First name: ";
    cin >> info.firstName;
    cout << "Last name: ";
    cin >> info.lastName;
    cout << "Age: ";
    cin >> info.age;
    cout << "Phone: ";
    cin >> info.phone;
}
```

Passing `info` by reference (`&`) means the data entered is stored directly in the original structure back in `main`.

## A Function to Print Data (By Value)
A function that only reads and displays data does not need to change anything, so it can take the structure by value.

```cpp
void printInfo(Person info) {
    cout << "First name: " << info.firstName << endl;
    cout << "Last name: " << info.lastName << endl;
    cout << "Age: " << info.age << endl;
    cout << "Phone: " << info.phone << endl;
}
```

## Putting It Together
```cpp
int main() {
    Person person1;
    readInfo(person1);
    printInfo(person1);
    return 0;
}
```

The same two functions can now be reused for any number of people, just by declaring a new structure variable for each one.

```cpp
int main() {
    Person person1, person2;

    readInfo(person1);
    readInfo(person2);

    printInfo(person1);
    printInfo(person2);
    return 0;
}
```

## Key Points
- Use a reference parameter (`&`) when a function needs to change the original structure, such as when reading input.
- Use a value parameter when a function only reads the structure's data, such as when printing.
- Each function should stay focused on one clear task.

## Summary
- Structures and functions work well together: the structure holds related data, and functions operate on it.
- Passing by reference allows a function to fill in or change the original data.
- Passing by value is enough when a function only needs to read the data.
- This approach makes code reusable, since the same functions can handle any number of structure variables.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
