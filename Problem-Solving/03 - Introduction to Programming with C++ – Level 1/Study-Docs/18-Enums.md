# 18 - Enums

## Overview
This lesson introduces enums (enumerations), a way to represent a fixed set of related values using meaningful names instead of plain numbers.

## What Is an Enum?
An enum defines a list of named values. Behind the scenes, each name is stored as a number, starting from 0 and increasing by one for each item.

```cpp
enum Color {
    RED,     // 0
    GREEN,   // 1
    YELLOW,  // 2
    BLUE     // 3
};
```

## Using an Enum
```cpp
Color myColor;
myColor = GREEN;

cout << myColor << endl;   // prints 1
```

The variable is assigned using the name (`GREEN`), but when printed, it shows the underlying number, not the text.

## More Examples
Enums are useful whenever a variable should only hold one value from a fixed, known list.

```cpp
enum Direction {
    NORTH, SOUTH, EAST, WEST
};

enum Status {
    SINGLE, MARRIED
};

Direction myDirection = SOUTH;
Status personStatus = SINGLE;
```

## A Common Mistake
An enum variable should be assigned using one of its defined names, not a plain number.

```cpp
enum Color { RED, GREEN, BLUE };

Color myColor = 1;       // not correct usage
Color myColor = GREEN;   // correct
```

## Summary
- An enum defines a set of named values under one type.
- Each name automatically gets a number, starting at 0.
- A variable of an enum type should be assigned using its names, not raw numbers.
- Printing an enum variable shows its numeric value, not its name.
