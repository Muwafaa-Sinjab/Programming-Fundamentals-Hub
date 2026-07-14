# 21 - Strings

## Overview
This lesson covers strings in C++: how to store text, work with individual characters, join strings together, and handle common issues when reading text from the user.

## What Is a String?
A string stores a sequence of characters, such as a word or a full sentence. While `char` holds only one character, a string can be thought of as an array of characters, where each character has a position (index) starting from 0.

## Declaring a String
```cpp
#include <string>
#include <iostream>
using namespace std;

int main() {
    string myText = "Hello World";
    cout << myText << endl;
    return 0;
}
```

## Getting the Length
The `length()` function returns the number of characters in a string.

```cpp
cout << myText.length() << endl;   // 11
```

## Accessing a Character by Index
A specific character can be accessed using square brackets `[]`. Indexing starts from 0.

```cpp
cout << myText[0] << endl;   // 'H'
cout << myText[6] << endl;   // 'W'
```

## Joining Strings (Concatenation)
The `+` operator joins two strings together.

```cpp
string first = "10";
string second = "20";
string result = first + second;

cout << result << endl;   // "1020"
```

This joins the text; it does not add numbers together.

## Converting Strings to Numbers
To perform real numeric addition, each string must first be converted to a number using a function such as `stoi()`.

```cpp
string first = "10";
string second = "20";
int sum = stoi(first) + stoi(second);

cout << sum << endl;   // 30
```

## Reading Text with Spaces
Reading a string with `cin` only captures the first word, and stops at the first space.

```cpp
string fullName;
cin >> fullName;
cout << fullName << endl;
// Input: John Smith
// Output: John
```

To read a full line, including spaces, `getline()` should be used instead.

```cpp
string fullName;
getline(cin, fullName);
cout << fullName << endl;
// Input: John Smith
// Output: John Smith
```

## Summary
- A string stores a sequence of characters, and its length is found with `length()`.
- Individual characters are accessed using `[]`, with indexing starting from 0.
- `+` joins strings together; it does not perform numeric addition.
- Converting a string to a number requires a function such as `stoi()`.
- `cin >>` only reads a single word; `getline()` reads a full line, including spaces.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
