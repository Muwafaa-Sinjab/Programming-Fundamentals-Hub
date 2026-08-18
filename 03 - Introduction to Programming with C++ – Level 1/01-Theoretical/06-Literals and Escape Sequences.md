# 06 - Literals and Escape Sequences

## Overview
This lesson covers two related ideas in C++: literal types, which are fixed values written directly in the code, and escape sequences, which are special symbols used inside text.

## Part 1: Literal Types
A literal is a value that is written directly in the source code, such as a number or a character.

```cpp
cout << 42 << endl;     // integer literal
cout << 3.14 << endl;   // floating-point literal
cout << 'A' << endl;    // character literal
```

### Integer Literals
Whole numbers can be written in different number systems:
- **Decimal**: the normal way of writing numbers, such as `22`.
- **Octal**: starts with `0`, such as `033`.
- **Hexadecimal**: starts with `0x`, such as `0x2a`.

```cpp
cout << 22 << endl;     // Decimal: 22
cout << 033 << endl;    // Octal: 27
cout << 0x2a << endl;   // Hexadecimal: 42
```

All three lines above represent numbers, just written in different systems.

### Floating-Point Literals
These are numbers with a decimal point, and they can be positive or negative, such as `13.5` or `-8.07`.

```cpp
cout << 13.5 << endl;
cout << -8.07 << endl;
```

### Character Literals
A character literal is a single character written inside single quotes, such as `'A'` or `'$'`.

```cpp
cout << 'A' << endl;
cout << '$' << endl;
```

## Part 2: Escape Sequences
An escape sequence is a special combination of characters, starting with a backslash `\`, used to represent symbols that cannot be typed directly inside text, such as a new line or a tab.

Common escape sequences:

| Escape Sequence | Meaning |
|---|---|
| `\\` | Backslash |
| `\t` | Tab |
| `\n` | New line |
| `\"` | Double quote |
| `\'` | Single quote |
| `\a` | Alert sound |

### Example
```cpp
cout << "Line1\nLine2" << endl;
cout << "Tab:\tText" << endl;
cout << "Backslash: \\" << endl;
cout << "Quote: \"Hello\"" << endl;
```

This prints:
```
Line1
Line2
Tab:   Text
Backslash: \
Quote: "Hello"
```

Notice that `\n` creates a new line, while `\\` prints an actual backslash character. Without the escape sequence, a plain `\` inside text would be treated as the start of a special symbol, not as normal text.

## Summary
- Literals are fixed values written directly in the code: integers, floating-point numbers, and characters.
- Integers can be written in decimal, octal, or hexadecimal form.
- Escape sequences start with `\` and represent special characters, such as new lines or quotation marks, inside text.
