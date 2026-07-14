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
bool IsLeapYear(short year);
short GetNumberOfDaysInMonth(short year, short month);
short GetDayOfYear(short year, short month, short day);
sDate ConvertTotalDayToDate(short dateOrderInYear, short year);

int main()
{
    short day = ReadDay();
    short month = ReadMonth();
    short year = ReadYear();
    
    short numberOfDays = GetDayOfYear(year, month, day);
    sDate date = ConvertTotalDayToDate(numberOfDays, year);

    cout << "\nNumber of days from the beginning of the year is: " << numberOfDays << endl;
    cout << "Date from [" << numberOfDays << "] is: " 
         << date.day << "/" << date.month << "/" << date.year << endl;

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
    for (short i = 1; i < month; i++)
    {
        totalDays += GetNumberOfDaysInMonth(year, i);
    }
    return (totalDays + day);
}

sDate ConvertTotalDayToDate(short dateOrderInYear, short year)
{
    sDate date;
    short remainingDays = dateOrderInYear;
    short daysInMonth = 0;
    
    date.year = year;
    date.month = 1;

    while (true)
    {
        daysInMonth = GetNumberOfDaysInMonth(year, date.month);

        if (remainingDays > daysInMonth)
        {
            remainingDays -= daysInMonth;
            date.month++;
        }
        else
        {
            date.day = remainingDays;
            break;
        }
    }
    return date;
}