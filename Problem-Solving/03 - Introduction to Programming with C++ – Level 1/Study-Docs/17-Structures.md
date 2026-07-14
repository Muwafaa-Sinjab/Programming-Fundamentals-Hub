# 17 - Structures

## Overview
This lesson introduces structures in C++: a way to group several related variables together under one custom data type.

## What Is a Structure?
A structure combines multiple variables of possibly different types into a single unit. Instead of managing many separate variables, related data can be stored together in one place.

## Defining and Using a Structure
```cpp
#include <iostream>
#include <string>
using namespace std;

struct Car {
    string brand;
    string model;
    int year;
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.year = 2020;

    cout << myCar.brand << " " << myCar.model << " " << myCar.year << endl;
    return 0;
}
```

The dot operator (`.`) is used to access or set a value inside a structure variable.

## Structures Inside Structures
A structure can contain another structure as one of its members.

```cpp
struct Address {
    string street;
    string city;
};

struct Owner {
    string name;
    Address address;
};

struct Car {
    string brand;
    Owner owner;
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.owner.name = "Ahmed";
    myCar.owner.address.city = "Amman";

    cout << myCar.owner.address.city << endl;
    return 0;
}
```

Accessing a nested value requires chaining the dot operator, as in `myCar.owner.address.city`.

## Common Mistakes
- Trying to assign a value directly to the structure variable instead of one of its fields:
```cpp
Car myCar;
myCar = "Toyota";        // wrong
myCar.brand = "Toyota";  // correct
```
- Using `string` inside a structure without including `<string>`.

## Why Use Structures
Without structures, related data must be stored in separate variables, which becomes hard to manage.

```cpp
// without a structure
string car1Brand, car1Model;
int car1Year;
```

With a structure, the same data is grouped and reused easily:
```cpp
struct Car {
    string brand;
    string model;
    int year;
};

Car car1, car2;
```

## Summary
- A structure groups related variables under one custom type.
- It is defined with `struct StructureName { ... };`.
- A variable of that type is created with `StructureName variableName;`.
- Fields are accessed using the dot operator, such as `variableName.field`.
- Structures can be nested inside other structures.
