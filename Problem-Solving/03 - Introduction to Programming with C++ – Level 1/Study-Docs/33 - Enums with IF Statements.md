# 33 - Enums with IF Statements

## Overview
This lesson shows how to combine enums with `if`/`else if` statements to build a clear, readable menu system, and how to convert user input into an enum value.

## Why Combine Enums with IF Statements
An enum gives meaningful names to a set of choices. Using these names inside `if` conditions, instead of raw numbers, makes the code easier to read and understand.

```cpp
enum Color {
    RED = 1,
    BLUE = 2,
    GREEN = 3
};
```

## Reading a Choice from the User
`cin` only reads basic types like `int`, not enums directly. The usual approach is to read the input as an `int`, then convert it into the enum type using a cast.

```cpp
int choice;
cin >> choice;

Color selectedColor = (Color)choice;
```

This conversion is called casting: it tells the compiler to treat the number entered as a value of the `Color` type.

## A Complete Example
```cpp
enum Color {
    RED = 1,
    BLUE = 2,
    GREEN = 3
};

int main() {
    cout << "Choose a color:" << endl;
    cout << "(1) Red" << endl;
    cout << "(2) Blue" << endl;
    cout << "(3) Green" << endl;
    cout << "Your choice: ";

    int choice;
    cin >> choice;

    Color selectedColor = (Color)choice;

    if (selectedColor == RED) {
        cout << "You chose Red" << endl;
    } else if (selectedColor == BLUE) {
        cout << "You chose Blue" << endl;
    } else if (selectedColor == GREEN) {
        cout << "You chose Green" << endl;
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
```

## Key Points
- Enums make conditions in the code more readable than comparing plain numbers.
- User input must be read as a number first, then cast to the enum type.
- A final `else` handles any number that does not match a defined enum value, protecting the program from invalid input.

## Summary
- Enums combined with `if`/`else if` create clear, menu-style decision logic.
- Reading an enum choice from the user requires reading an `int` and casting it to the enum type.
- Comparing against named enum values, such as `RED` or `BLUE`, is clearer than comparing against raw numbers.
- Always include a final `else` to handle unexpected or invalid input.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
