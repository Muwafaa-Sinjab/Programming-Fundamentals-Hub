#include <iostream>

using namespace std;

// Function prototypes
short ReadYear();
bool IsLeapYear(short year);

int main()
{
    short year = ReadYear();

    if (IsLeapYear(year))
        cout << year << " is a leap year." << endl;
    else
        cout << year << " is not a leap year." << endl;

    return 0;
}

short ReadYear()
{
    short year = 0;
    cout << "Enter the year: ";
    cin >> year;
    return year;
}

bool IsLeapYear(short year)
{
    // A leap year is divisible by 400, or by 4 but not by 100
    if (year % 400 == 0)
    {
        return true;
    }
    else if (year % 100 == 0)
    {
        return false;
    }
    else if (year % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}