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
bool IsLeapYear(short year);
short GetNumberOfDaysInMonth(short year, short month);
bool IsLastDayInMonth(sDate date);
bool IsLastMonthInYear(short month);
short GetDayOfWeekOrder(sDate date);
string GetDayShortName(short dayOrder);
bool IsBusinessDay(sDate date);
bool IsDate1BeforeDate2(sDate date1, sDate date2);
bool IsDateEqual(sDate date1, sDate date2);
sDate IncreaseDateByOneDay(sDate date);
short CalculateVacationDays(sDate dateFrom, sDate dateTo);

int main()
{
    cout << "Vacation Start:\n";
    sDate dateFrom = ReadFullDate();
    cout << "Vacation End:\n";
    sDate dateTo = ReadFullDate();

    cout << "\nActual Vacation Days (Business Days only): " 
         << CalculateVacationDays(dateFrom, dateTo) << " day(s)" << endl;

    return 0;
}

// Logic implementations
short ReadYear() { short y; cout << "Year: "; cin >> y; return y; }
short ReadMonth() { short m; cout << "Month: "; cin >> m; return m; }
short ReadDay() { short d; cout << "Day: "; cin >> d; return d; }

sDate ReadFullDate()
{
    sDate d;
    d.day = ReadDay();
    d.month = ReadMonth();
    d.year = ReadYear();
    cout << endl;
    return d;
}

bool IsLeapYear(short year) { return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); }

short GetNumberOfDaysInMonth(short year, short month)
{
    if (month < 1 || month > 12) return 0;
    short arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : arr[month - 1];
}

// Returns the day of the week index (0: Sun, 6: Sat)
short GetDayOfWeekOrder(sDate date)
{
    short a = (14 - date.month) / 12;
    short y = date.year - a;
    short m = date.month + (12 * a) - 2;
    return (date.day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m / 12)) % 7;
}

// Returns true if the day is not Friday or Saturday (typical Saudi weekend)
bool IsBusinessDay(sDate date)
{
    short dayOrder = GetDayOfWeekOrder(date);
    return (dayOrder != 5 && dayOrder != 6);
}

bool IsDate1BeforeDate2(sDate d1, sDate d2)
{
    return (d1.year < d2.year) || (d1.year == d2.year && d1.month < d2.month) || 
           (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day);
}

bool IsDateEqual(sDate d1, sDate d2)
{
    return (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day);
}

sDate IncreaseDateByOneDay(sDate date)
{
    if (date.day == GetNumberOfDaysInMonth(date.year, date.month))
    {
        if (date.month == 12) { date.month = 1; date.day = 1; date.year++; }
        else { date.day = 1; date.month++; }
    }
    else { date.day++; }
    return date;
}

// Calculates business days between two dates inclusive
short CalculateVacationDays(sDate dateFrom, sDate dateTo)
{
    short count = 0;
    while (IsDate1BeforeDate2(dateFrom, dateTo) || IsDateEqual(dateFrom, dateTo))
    {
        if (IsBusinessDay(dateFrom))
        {
            count++;
        }
        dateFrom = IncreaseDateByOneDay(dateFrom);
    }
    return count;
}