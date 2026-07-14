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

    if (month == 2)
    {
        return IsLeapYear(year) ? 29 : 28;
    }

    short arrMonth31Days[7] = {1, 3, 5, 7, 8, 10, 12};
    for (short i = 0; i < 7; i++)
    {
        if (month == arrMonth31Days[i])
        {
            return 31;
        }
    }

    return 30;
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