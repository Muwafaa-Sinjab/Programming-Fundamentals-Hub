#include <iostream>

using namespace std;

// Function prototypes
short ReadYear();
short ReadMonth();
short ReadDay();
bool IsLeapYear(short year);
short GetNumberOfDaysInMonth(short year, short month);
short GetDayOfYear(short year, short month, short day);

int main()
{
    short day = ReadDay();
    short month = ReadMonth();
    short year = ReadYear();
    
    short numberOfDays = GetDayOfYear(year, month, day);

    cout << "\nNumber of days from the beginning of the year is: " << numberOfDays << endl;

    return 0;
}

short ReadYear()
{
    short year = 0;
    cout << "Please enter the year: ";
    cin >> year;
    return year;
}

short ReadMonth()
{
    short month = 0;
    cout << "Please enter the month: ";
    cin >> month;
    return month;
}

short ReadDay()
{
    short day = 0;
    cout << "Please enter the day: ";
    cin >> day;
    return day;
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

short GetDayOfYear(short year, short month, short day)
{
    short totalDays = 0;

    // Add days of all complete months before the current month
    for (short i = 1; i < month; i++)
    {
        totalDays += GetNumberOfDaysInMonth(year, i);
    }
    
    return (totalDays + day);
}