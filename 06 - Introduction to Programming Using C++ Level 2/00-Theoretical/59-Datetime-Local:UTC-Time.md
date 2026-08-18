# 59 - Datetime: Local/UTC Time

## Overview

This video introduces how to handle date and time in C++ using the `<ctime>` library. It explains how to get the current system time and how to display it in both local time and Coordinated Universal Time (UTC) formats.

## Main Topics

### The ctime Library

To work with dates and times, the `<ctime>` library must be included. This library provides the necessary functions and data types to retrieve and format system time.

### Getting the Current Time

The `time_t` data type is used to represent time as an integer (the number of seconds since a specific date). The `time(0)` function is called to get the current time and store it in a `time_t` variable.

### Displaying Local Time

The `ctime()` function is used to convert the `time_t` value into a readable string. This string represents the current local time based on the computer's system settings, including the date, time, and timezone.

### Displaying UTC Time

UTC (Coordinated Universal Time) is the primary time standard by which the world regulates clocks. To get the UTC time, the `gmtime()` function is used instead of `localtime()`. It converts the `time_t` value into a time structure. Then, the `asctime()` function is used to convert that structure into a readable string without the local timezone offset.

```cpp
#include <iostream>
#include <ctime>

int main() {
    time_t t = time(0);

    // Print local time as a string
    cout << "Local Time: " << ctime(&t) << endl;

    // Convert to UTC time structure, then to string
    tm* utc = gmtime(&t);
    cout << "UTC Time: " << asctime(utc) << endl;

    return 0;
}
```

## Key Takeaways

- The `<ctime>` library provides tools for handling date and time.
- `time(0)` retrieves the current time in seconds.
- `ctime()` converts the time directly into a local time string.
- `gmtime()` combined with `asctime()` is used to get and display UTC time.

Muwafaa Sinjab @Muwafaa-Sinjab