# 30 - Arrays of Structure

## Overview
This lesson combines structures and arrays: storing multiple structure variables together, so a collection of related records can be managed in one place.

## What Is an Array of Structures?
Each element of the array is a full structure, instead of a single value. This is useful for storing a list of similar records, such as several people or several students.

## Basic Example
```cpp
struct Person {
    string firstName;
    string lastName;
    int age;
};

int main() {
    Person people[2];

    people[0].firstName = "Ahmed";
    people[0].lastName = "Ali";
    people[0].age = 44;

    people[1].firstName = "Sara";
    people[1].lastName = "Yousef";
    people[1].age = 22;

    cout << people[1].firstName << endl;   // Sara
    cout << people[1].lastName << endl;    // Yousef
    return 0;
}
```

Each field is accessed with `array[index].fieldName`.

## Initializing an Array of Structures
Values can be assigned individually, or all at once when the array is created.

```cpp
Person people[2];
people[0] = {"John", "Doe", 30};
people[1] = {"Jane", "Smith", 25};

// or directly:
Person people[2] = {
    {"John", "Doe", 30},
    {"Jane", "Smith", 25}
};
```

## Processing the Array with a Loop
A loop makes it easy to work through every record in the array.

```cpp
const int SIZE = 2;
Person people[SIZE] = {
    {"John", "Doe", 30},
    {"Jane", "Smith", 25}
};

for (int i = 0; i < SIZE; i++) {
    cout << "Name: " << people[i].firstName << " " << people[i].lastName << endl;
    cout << "Age: " << people[i].age << endl;
}
```

## Using Functions with Arrays of Structures
Reading and displaying data can be organized into separate functions, similar to how it was done with plain arrays.

```cpp
void readPeople(Person people[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "First name: ";
        cin >> people[i].firstName;
        cout << "Age: ";
        cin >> people[i].age;
    }
}

void displayPeople(Person people[], int size) {
    for (int i = 0; i < size; i++) {
        cout << people[i].firstName << " - " << people[i].age << endl;
    }
}

int main() {
    const int SIZE = 2;
    Person people[SIZE];

    readPeople(people, SIZE);
    displayPeople(people, SIZE);
    return 0;
}
```

## Common Mistakes
- Forgetting the index: `people.firstName` is not valid; it must be `people[0].firstName`.
- Going outside the array's valid range: with a size of 3, only indexes 0, 1, and 2 exist.

## Summary
- An array of structures stores multiple complete records under one array name.
- Each element is accessed with `array[index].fieldName`.
- Loops are used to process every record in the array efficiently.
- Functions can be written to read or display all records, keeping the code organized and reusable.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
