# 19 - Nested Structures and Enums

## Overview
This lesson combines structures and enums into one complete example, showing how to organize related data through nested structures instead of many separate variables.

## Combining Enums and Structures
Enums and structures can be used together inside one larger structure.

```cpp
enum enGender {
    MALE,
    FEMALE
};

struct stAddress {
    string street;
    string city;
};

struct stContactInfo {
    string phone;
    string email;
    stAddress address;   // structure inside a structure
};

struct stPerson {
    string firstName;
    string lastName;
    stContactInfo contactInfo;  // another nested structure
    enGender gender;            // enum as a field
};
```

## Using the Combined Structure
Only one main variable is needed to hold all the related data.

```cpp
int main() {
    stPerson person1;

    person1.firstName = "Ahmed";
    person1.lastName = "Ali";

    person1.contactInfo.email = "ahmed@example.com";
    person1.contactInfo.address.city = "Amman";

    person1.gender = MALE;

    cout << person1.firstName << " " << person1.lastName << endl;
    cout << person1.contactInfo.address.city << endl;

    return 0;
}
```

Each level of nesting is accessed by chaining the dot operator, such as `person1.contactInfo.address.city`.

## Why Organize Data This Way
Without nested structures, a program would need many separate variables:

```cpp
string firstName, lastName, email, city;
int gender;
```

With nested structures, all related data is grouped under one main variable, which makes the code easier to read and maintain:

```cpp
stPerson person1;   // everything is grouped here
```

## A Naming Convention
Some codebases use short prefixes to make types easy to recognize at a glance: `en` for enums (`enGender`) and `st` for structures (`stPerson`). This is a style choice, not a requirement of the language.

## Summary
- Structures can contain other structures, and they can also contain enum fields.
- Nested data is accessed by chaining the dot operator across each level.
- Grouping related data into one structure reduces the number of separate variables and keeps the code organized.
- Prefixes like `en` and `st` are an optional naming convention to distinguish enums from structures.
