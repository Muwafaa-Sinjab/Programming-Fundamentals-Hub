# 60 - Datetime Structure

## Overview

This video explains the `tm` structure in C++. It focuses on how to extract specific pieces of information from a time value, such as the year, month, or day, rather than printing the entire time as a single string.

## Main Topics

### The tm Structure

The `tm` structure is a built-in format that breaks down time into separate, accessible fields. These fields include year, month, day, hour, minute, and second, among others.

### Converting Time to a Structure

The `localtime()` function is used to convert the raw `time_t` value into a pointer to a `tm` structure. Because it returns a pointer, the arrow operator `->` is required to access its individual members.

### Accessing and Adjusting Fields

Each field in the `tm` structure holds a specific part of the time. However, two fields require manual adjustment to display standard values:
- **Year:** The `tm_year` field stores the number of years since 1900. To get the actual calendar year, 1900 must be added to this value.
- **Month:** The `tm_mon` field stores months starting from 0 (where January is 0). To display the correct month number, 1 must be added.

```cpp
#include <iostream>
#include <ctime>

int main() {
    time_t t = time(0);
    tm* now = localtime(&t);

    // Accessing and adjusting specific fields
    cout << "Year: " << now->tm_year + 1900 << endl;
    cout << "Month: " << now->tm_mon + 1 << endl;
    cout << "Day: " << now->tm_mday << endl;

    return 0;
}
```

## Key Takeaways

- The `tm` structure breaks time down into individual integer fields.
- `localtime()` is used to populate the `tm` structure with local time data.
- The arrow operator `->` is necessary to access structure members through a pointer.
- The year field must be increased by 1900, and the month field must be increased by 1.

Muwafaa Sinjab @Muwafaa-Sinjab