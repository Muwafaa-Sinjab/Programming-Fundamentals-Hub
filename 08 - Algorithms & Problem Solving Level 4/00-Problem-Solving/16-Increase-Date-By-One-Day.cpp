#include <iostream>

using namespace std;

struct sDate
{
    short year;
    short month;
    short day;
};

// Function prototypes
short ReadYear();
short ReadMonth();
short ReadDay();
sDate ReadFullDate();
bool IsLeapYear(short year);
short GetNumberOfDaysInMonth(short year, short month);
bool IsLastDayInMonth(sDate date);
bool IsLastMonthInYear(short month);
sDate IncreaseDateByOneDay(sDate &date);

int main()
{
    sDate date = ReadFullDate();

    date = IncreaseDateByOneDay(date);
    cout << "\nDate after adding one day: " << date.day << "/" << date.month << "/" << date.year << endl;

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

sDate ReadFullDate()
{
    sDate date;
    date.day = ReadDay();
    date.month = ReadMonth();
    date.year = ReadYear();
    return date;
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

bool IsLastDayInMonth(sDate date)
{
    return (date.day == GetNumberOfDaysInMonth(date.year, date.month));
}

bool IsLastMonthInYear(short month)
{
    return (month == 12);
}

sDate IncreaseDateByOneDay(sDate &date)
{
    if (IsLastDayInMonth(date) && IsLastMonthInYear(date.month))
    {
        date.day = 1;
        date.month = 1;
        date.year++;
    }
    else if (IsLastDayInMonth(date))
    {
        date.day = 1;
        date.month++;
    }
    else
    {
        date.day++;
    }

    return date;
}