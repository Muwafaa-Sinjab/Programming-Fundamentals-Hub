#include <iostream>
#include <string>

using namespace std;

// Function prototypes
short ReadYear();
short ReadMonth();
short ReadDay();
bool IsLeapYear(short year);

short GetNumberOfDaysInMonth(short year, short month);
short GetNumberOfHoursInMonth(short year, short month);
int GetNumberOfMinutesInMonth(short year, short month);
int GetNumberOfSecondsInMonth(short year, short month);

void PrintDateFormat(short year, short month, short day);
short GetDayOrderInGregorianCalendar(short year, short month, short day);
string GetDayName(short year, short month, short day);

int main()
{
    short year = ReadYear();
    short month = ReadMonth();
    short day = ReadDay();

    cout << "\nDate      : "; 
    PrintDateFormat(year, month, day);
    cout << "\nOrder Day : " << GetDayOrderInGregorianCalendar(year, month, day);
    cout << "\nDay Name  : " << GetDayName(year, month, day) << endl;

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

void PrintDateFormat(short year, short month, short day)
{
    cout << day << "/" << month << "/" << year;
}

short GetDayOrderInGregorianCalendar(short year, short month, short day)
{
    short a = (14 - month) / 12;
    short y = year - a;
    short m = month + (12 * a) - 2;
    
    return (day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m / 12)) % 7;
}

string GetDayName(short year, short month, short day)
{
    short dayIndex = GetDayOrderInGregorianCalendar(year, month, day);
    string daysOfWeek[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    
    return daysOfWeek[dayIndex];
}