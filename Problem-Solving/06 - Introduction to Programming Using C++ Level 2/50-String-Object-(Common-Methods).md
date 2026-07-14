# 50 - String Object: (Common Methods)

## Overview

This video introduces the string object as an example of Object-Oriented Programming (OOP). It explains that the `<string>` library must be included to use strings, and covers several built-in methods that make text manipulation straightforward.

## Main Topics

### Length and Access Methods

The `length()` method returns the total number of characters in the string. To access a specific character at a given position, the `at(position)` method is used. Both methods are called directly on the string object.

### Adding and Removing Text

Several methods allow text to be modified. The `append()` method adds a string to the end of the current text. The `insert(position, text)` method places new text at a specific index. For single characters, `push_back()` adds a character to the end, and `pop_back()` removes the last character.

### Searching and Extracting

The `find(text)` method searches for a substring and returns its starting index position. If the text is not found, it returns a special constant called `npos`, which is used to check for failed searches. The `substr(start, length)` method extracts a portion of the string by specifying a starting position and the number of characters to copy.

```cpp
if (S1.find("Ali") == S1.npos) {
    cout << "Ali is not found";
}
```

### Clearing the String

The `clear()` method is used to delete all characters from the string at once, leaving it completely empty.

## Key Takeaways

- The string object provides built-in methods for easy text manipulation.
- `length()` counts characters, while `at()` accesses a specific index.
- `append()` and `insert()` add text, while `push_back()` and `pop_back()` handle single characters.
- `find()` returns the position of a substring or `npos` if it is not found.
- `substr()` extracts a specific segment of the text.

Muwafaa Sinjab @Muwafaa-Sinjab