#include <iostream>
#include <ctime>
#include <string>

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
sDate GetSystemDate();

bool IsLeapYear(short year);
short GetNumberOfDaysInMonth(short year, short month);
bool IsLastDayInMonth(sDate date);
bool IsLastMonthInYear(short month);

short GetDayOfWeekOrder(short year, short month, short day);
short GetDayOfWeekOrder(sDate date);
string GetDayShortName(short dayOrder);

bool IsEndOfWeek(sDate date);
bool IsBusinessDay(sDate date);
bool IsDate1BeforeDate2(sDate date1, sDate date2);

sDate IncreaseDateByOneDay(sDate date);
int GetDifferenceInDays(sDate date1, sDate date2, bool includeEndDay = false);

short GetDaysUntilEndOfWeek(sDate date);
short GetDaysUntilEndOfMonth(sDate date);
int GetDaysUntilEndOfYear(sDate date);

int main()
{
    sDate date = GetSystemDate();
    short dayOrder = GetDayOfWeekOrder(date);
    string dayShortName = GetDayShortName(dayOrder);

    cout << "Today is: " << dayShortName << ", " << date.day << "/" << date.month << "/" << date.year << "\n\n";

    cout << "Is it end week? " << (IsEndOfWeek(date) ? "YES" : "NO") << endl;
    cout << "Is it business day? " << (IsBusinessDay(date) ? "YES" : "NO") << "\n" << endl;

    cout << "Days until end of week  : " << GetDaysUntilEndOfWeek(date) << " Day(s)." << endl;
    cout << "Days until end of month : " << GetDaysUntilEndOfMonth(date) << " Day(s)." << endl;
    cout << "Days until end of year  : " << GetDaysUntilEndOfYear(date) << " Day(s)." << endl;

    return 0;
}

// Implementations
sDate GetSystemDate()
{
    sDate date;
    time_t t = time(0);
    tm* now = localtime(&t);
    date.year = now->tm_year + 1900;
    date.month = now->tm_mon + 1;
    date.day = now->tm_mday;
    return date;
}

bool IsLeapYear(short year) { return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); }

short GetNumberOfDaysInMonth(short year, short month)
{
    if (month < 1 || month > 12) return 0;
    short arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : arr[month - 1];
}

bool IsLastDayInMonth(sDate date) { return (date.day == GetNumberOfDaysInMonth(date.year, date.month)); }
bool IsLastMonthInYear(short month) { return (month == 12); }

short GetDayOfWeekOrder(short year, short month, short day)
{
    short a = (14 - month) / 12;
    short y = year - a;
    short m = month + (12 * a) - 2;
    return (day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m / 12)) % 7;
}

short GetDayOfWeekOrder(sDate date) { return GetDayOfWeekOrder(date.year, date.month, date.day); }

string GetDayShortName(short dayOrder)
{
    string names[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    return names[dayOrder];
}

bool IsEndOfWeek(sDate date) { short dayCode = GetDayOfWeekOrder(date); return (dayCode == 5 || dayCode == 6); }
bool IsBusinessDay(sDate date) { return !IsEndOfWeek(date); }

bool IsDate1BeforeDate2(sDate d1, sDate d2)
{
    return (d1.year < d2.year) || (d1.year == d2.year && d1.month < d2.month) || (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day);
}

sDate IncreaseDateByOneDay(sDate date)
{
    if (IsLastDayInMonth(date))
    {
        if (IsLastMonthInYear(date.month)) { date.month = 1; date.day = 1; date.year++; }
        else { date.day = 1; date.month++; }
    }
    else { date.day++; }
    return date;
}

int GetDifferenceInDays(sDate d1, sDate d2, bool includeEndDay)
{
    int days = 0;
    while (IsDate1BeforeDate2(d1, d2))
    {
        days++;
        d1 = IncreaseDateByOneDay(d1);
    }
    return includeEndDay ? ++days : days;
}

short GetDaysUntilEndOfWeek(sDate date) { return 6 - GetDayOfWeekOrder(date); }
short GetDaysUntilEndOfMonth(sDate date) { return GetNumberOfDaysInMonth(date.year, date.month) - date.day; }
int GetDaysUntilEndOfYear(sDate date)
{
    sDate endOfYear = {date.year, 12, 31};
    return GetDifferenceInDays(date, endOfYear, true);
}