#include <iostream>

using namespace std;

// Function prototypes
short ReadYear();
short ReadMonth();
bool IsLeapYear(short year);

short GetNumberOfDaysInMonth(short year, short month);
short GetNumberOfHoursInMonth(short year, short month);
int GetNumberOfMinutesInMonth(short year, short month);
int GetNumberOfSecondsInMonth(short year, short month);

int main()
{
    short year = ReadYear();
    short month = ReadMonth();

    cout << "Number of Days    in Month [" << month << "] is " << GetNumberOfDaysInMonth(year, month) << endl;
    cout << "Number of Hours   in Month [" << month << "] is " << GetNumberOfHoursInMonth(year, month) << endl;
    cout << "Number of Minutes in Month [" << month << "] is " << GetNumberOfMinutesInMonth(year, month) << endl;
    cout << "Number of Seconds in Month [" << month << "] is " << GetNumberOfSecondsInMonth(year, month) << endl;

    return 0;
}

short ReadYear()
{
    short year = 0;
    cout << "Please enter a year: ";
    cin >> year;
    return year;
}

short ReadMonth()
{
    short month = 0;
    cout << "Please enter a month: ";
    cin >> month;
    return month;
}

bool IsLeapYear(short year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short GetNumberOfDaysInMonth(short year, short month)
{
    if (month < 1 || month > 12)
        return 0;

    short arrDaysInMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : arrDaysInMonths[month - 1];
}

short GetNumberOfHoursInMonth(short year, short month)
{
    return GetNumberOfDaysInMonth(year, month) * 24;
}

int GetNumberOfMinutesInMonth(short year, short month)
{
    return GetNumberOfHoursInMonth(year, month) * 60;
}

int GetNumberOfSecondsInMonth(short year, short month)
{
    return GetNumberOfMinutesInMonth(year, month) * 60;
}