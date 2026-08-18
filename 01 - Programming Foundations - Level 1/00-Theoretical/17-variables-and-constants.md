# Variables and Constants

## Why These Concepts Are Universal

Nearly every programming language, regardless of syntax, relies on the same two building blocks for handling data: values that can change, and values that stay fixed.

## What a Variable Is

A variable is a named container that holds data in memory while a program runs.

```cpp
int quantity = 12;         // whole numbers
float weight = 4.75;       // decimal numbers
string city = "Beirut";    // text
bool inStock = false;      // true/false value
```

## What Actually Gets Stored

Every variable corresponds to a memory location made up of three parts:

- **Identifier** — the variable's name
- **Value** — the data currently held
- **Address** — where in memory it physically lives

## The Three Basic Data Categories

**1. Numbers**
- Integers: whole values like 7, 42, 300
- Floating-point: decimal values like 3.8, 12.25

**2. Text**
- Single characters: `'x'`, `'9'`, `'!'`
- Full strings: `"Welcome"`, `"Beirut"`

**3. Booleans**
- `true` — represents a positive/correct state
- `false` — represents a negative/incorrect state

## A Simple Example of Storing and Updating

```cpp
int score = 60;
score = score + 15;
print(score);   // Output: 75
```

## Constants

A constant behaves like a variable except its value is locked in once set.

```cpp
const float GRAVITY = 9.8;
GRAVITY = 9.9;              // Error — constants can't be reassigned

int lives = 3;
lives = 2;                   // Fine — variables can change freely
```

**When constants are useful:**
- Fixed mathematical values (like π or a gravitational constant)
- Application settings that shouldn't change at runtime
- Standard messages or labels
- Any value meant to stay identical throughout execution

## Picking the Right Size for a Variable

```cpp
// Reasonable
int quantity = 12;

// Unnecessarily large for this value
long quantity = 12;

// Reasonable
float price = 4.75;

// Larger than needed here
double price = 4.75;
```

**Consequences of choosing poorly:**
- Memory gets wasted on unnecessarily large types
- The program may run slower than it needs to
- Resource usage climbs without real benefit
- Scaling the program later becomes harder

## Putting It Together

```cpp
// Calculating the area of a rectangle
const float RATIO = 1.0;
float length = 8.0;
float width = 3.0;
float area = length * width;

// Applying a raise
float wage = 1500.0;
wage = wage * 1.08;  // 8% increase
```

## Good Habits to Build

- Use `const` for anything that genuinely shouldn't change
- Give variables names that clearly describe what they hold
- Match the data type to what the value actually needs
- Avoid oversized types when a smaller one will do
- Add brief notes for variables whose purpose isn't obvious

## Key Takeaway

Variables store data that can change while a program runs, while constants lock in a value that must stay fixed. Choosing an appropriately sized data type — not larger than necessary — keeps a program efficient and easier to scale later.

---

**Muwafaa Sinjab**

GitHub: **@Muwafaa-Sinjab**
