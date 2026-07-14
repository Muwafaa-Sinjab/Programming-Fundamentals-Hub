# 31 - Conditional Statements - IF-Else

## Overview
This lesson introduces conditional statements, which control which part of a program runs, based on whether a condition is true or false.

## The IF Statement
The code inside an `if` block only runs when its condition is true.

```cpp
int x = 10;

if (x > 5) {
    cout << "x is greater than 5" << endl;
}

cout << "This line always runs" << endl;
```

Code placed after the `if` block always runs, regardless of whether the condition was true.

## IF with Compound Conditions
Logical operators can combine multiple conditions inside an `if`.

```cpp
int x = 10;

if (x > 5 && x <= 20) {
    cout << "x is between 5 and 20" << endl;
}

if (x > 5 || x < 3) {
    cout << "x is greater than 5, or less than 3" << endl;
}
```

## The IF-Else Statement
`else` provides an alternative block of code that runs only when the condition is false.

```cpp
int x;
cout << "Enter a number: ";
cin >> x;

if (x > 5) {
    cout << "x is greater than 5" << endl;
} else {
    cout << "x is 5 or less" << endl;
}
```

## A Practical Example
```cpp
string storedPassword = "pass123";
string enteredPassword;

cout << "Enter your password: ";
cin >> enteredPassword;

if (enteredPassword == storedPassword) {
    cout << "Login successful" << endl;
} else {
    cout << "Incorrect password" << endl;
}
```

## Common Mistakes

**Forgetting the curly braces:**
```cpp
if (x > 5)
    cout << "x is greater than 5" << endl;
    cout << "This runs no matter what!" << endl;   // not part of the if
```
Without `{}`, only the line right after `if` belongs to it; the next line always runs, which can cause confusing bugs.

**Using `=` instead of `==`:**
```cpp
if (x = 5) { }    // wrong, this assigns 5 to x
if (x == 5) { }   // correct, this compares x to 5
```

## Best Practices
- Always use curly braces `{}`, even for a single line, to avoid confusion.
- Break complex conditions into named boolean variables when it improves readability.

```cpp
bool isAdult = (age >= 18);
bool hasLicense = true;

if (isAdult && hasLicense) {
    cout << "Eligible to drive" << endl;
}
```

## Summary
- `if` runs its code block only when the condition is true.
- `else` runs an alternative block when the condition is false.
- `&&`, `||`, and comparison operators can build more complex conditions.
- Curly braces should always be used to clearly mark the code that belongs to the condition.
- `==` compares values; `=` assigns a value — these must not be confused inside a condition.

---
*Muwafaa Sinjab* - `@Muwafaa-Sinjab`
