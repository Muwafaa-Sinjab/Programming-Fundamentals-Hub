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

int main()
{
    sDate date = ReadFullDate();

    if (IsLastDayInMonth(date))
        cout << "\nYES, The day is the last day in the month." << endl;
    else
        cout << "\nNO, The day is NOT the last day in the month." << endl;

    if (IsLastMonthInYear(date.month))
        cout << "YES, The month is the last month in the year." << endl;
    else
        cout << "NO, The month is NOT the last month in the year." << endl;

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