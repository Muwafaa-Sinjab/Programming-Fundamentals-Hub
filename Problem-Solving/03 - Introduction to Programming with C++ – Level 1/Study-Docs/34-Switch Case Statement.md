# 34 - Switch Case Statement

## Overview
This lesson introduces the `switch` statement, an alternative to a long chain of `else if` statements when comparing one value against many possible cases.

## Basic Structure
```cpp
switch (expression) {
    case value1:
        // runs if expression == value1
        break;
    case value2:
        // runs if expression == value2
        break;
    default:
        // runs if no case matches
}
```

- `switch (expression)` is the value being compared.
- Each `case` checks the expression against one specific value.
- `break` exits the switch once a matching case has run.
- `default` runs only if none of the cases match, similar to a final `else`.

## Example: Days of the Week
```cpp
int day = 4;

switch (day) {
    case 1:
        cout << "Sunday" << endl;
        break;
    case 2:
        cout << "Monday" << endl;
        break;
    case 3:
        cout << "Tuesday" << endl;
        break;
    case 4:
        cout << "Wednesday" << endl;
        break;
    default:
        cout << "Not a valid day" << endl;
}
```

With `day = 4`, this prints `Wednesday`.

## Using Switch with Enums
`switch` works well with enums, since each case can use a meaningful name instead of a raw number.

```cpp
enum Color { RED = 1, BLUE = 2, GREEN = 3 };

int main() {
    int choice;
    cout << "Enter color choice (1-3): ";
    cin >> choice;

    Color selectedColor = (Color)choice;

    switch (selectedColor) {
        case RED:
            cout << "You chose Red" << endl;
            break;
        case BLUE:
            cout << "You chose Blue" << endl;
            break;
        case GREEN:
            cout << "You chose Green" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
```

## A Common Mistake: Forgetting break
Without `break`, execution continues into the next case, even if it does not match. This is called fall-through, and it usually causes unexpected output.

```cpp
int day = 1;

switch (day) {
    case 1:
        cout << "Sunday" << endl;
        // missing break
    case 2:
        cout << "Monday" << endl;
        break;
}
```

Output:
```
Sunday
Monday
```

Adding `break` after `case 1` fixes this, so only `Sunday` is printed.

## How Switch Works, Step by Step
1. The expression inside `switch()` is evaluated once.
2. It is compared against each `case`, from top to bottom.
3. The code under the first matching case runs.
4. `break` stops execution there; without it, the next case also runs.
5. If no case matches, `default` runs, if one is provided.

## Summary
- `switch` compares one expression against several possible values.
- Each `case` needs a `break` to prevent execution from continuing into the next case.
- `default` handles any value that does not match a defined case.
- `switch` is especially useful with enums, where each case can use a clear, named value.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
