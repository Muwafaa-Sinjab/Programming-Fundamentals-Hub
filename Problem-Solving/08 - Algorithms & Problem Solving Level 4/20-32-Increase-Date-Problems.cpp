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
sDate IncreaseDateByXDays(short xDays, sDate &date);
sDate IncreaseDateByOneWeek(sDate &date);
sDate IncreaseDateByXWeeks(short xWeeks, sDate &date);
sDate IncreaseDateByOneMonth(sDate &date);
sDate IncreaseDateByXMonths(short xMonths, sDate &date);
sDate IncreaseDateByOneYear(sDate &date);
sDate IncreaseDateByXYears(short xYears, sDate &date);
sDate IncreaseDateByXYearsFaster(short xYears, sDate &date);
sDate IncreaseDateByOneDecade(sDate &date);
sDate IncreaseDateByXDecades(short xDecades, sDate &date);
sDate IncreaseDateByXDecadesFaster(short xDecades, sDate &date);
sDate IncreaseDateByOneCentury(sDate &date);
sDate IncreaseDateByOneMillennium(sDate &date);

int main()
{
    sDate date = ReadFullDate();

    cout << "\nDate After Modifications:\n\n";

    IncreaseDateByOneDay(date);
    cout << "01-Adding one day is: " << date.day << "/" << date.month << "/" << date.year << endl;

    IncreaseDateByXDays(10, date);
    cout << "02-Adding 10 days is: " << date.day << "/" << date.month << "/" << date.year << endl;

    IncreaseDateByOneWeek(date);
    cout << "03-Adding one week is: " << date.day << "/" << date.month << "/" << date.year << endl;

    IncreaseDateByXWeeks(10, date);
    cout << "04-Adding 10 weeks is: " << date.day << "/" << date.month << "/" << date.year << endl;

    IncreaseDateByOneMonth(date);
    cout << "05-Adding one month is: " << date.day << "/" << date.month << "/" << date.year << endl;

    IncreaseDateByXMonths(5, date);
    cout << "06-Adding 5 months is: " << date.day << "/" << date.month << "/" << date.year << endl;

    IncreaseDateByOneYear(date);
    cout << "07-Adding one year is: " << date.day << "/" << date.month << "/" << date.year << endl;

    IncreaseDateByXYears(10, date);
    cout << "08-Adding 10 years is: " << date.day << "/" << date.month << "/" << date.year << endl;

    IncreaseDateByXYearsFaster(10, date);
    cout << "09-Adding 10 years (faster) is: " << date.day << "/" << date.month << "/" << date.year << endl;

    IncreaseDateByOneDecade(date);
    cout << "10-Adding one decade is: " << date.day << "/" << date.month << "/" << date.year << endl;

    IncreaseDateByXDecades(10, date);
    cout << "11-Adding 10 decades is: " << date.day << "/" << date.month << "/" << date.year << endl;

    IncreaseDateByXDecadesFaster(10, date);
    cout << "12-Adding 10 decades (faster) is: " << date.day << "/" << date.month << "/" << date.year << endl;

    IncreaseDateByOneCentury(date);
    cout << "13-Adding one century is: " << date.day << "/" << date.month << "/" << date.year << endl;

    IncreaseDateByOneMillennium(date);
    cout << "14-Adding one millennium is: " << date.day << "/" << date.month << "/" << date.year << endl;

    return 0;
}

// Helper functions for reading and validation
short ReadYear() { short y; cout << "Enter year: "; cin >> y; return y; }
short ReadMonth() { short m; cout << "Enter month: "; cin >> m; return m; }
short ReadDay() { short d; cout << "Enter day: "; cin >> d; return d; }

sDate ReadFullDate()
{
    sDate d;
    d.day = ReadDay();
    d.month = ReadMonth();
    d.year = ReadYear();
    return d;
}

bool IsLeapYear(short year) { return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); }

short GetNumberOfDaysInMonth(short year, short month)
{
    if (month < 1 || month > 12) return 0;
    short arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : arr[month - 1];
}

bool IsLastDayInMonth(sDate d) { return d.day == GetNumberOfDaysInMonth(d.year, d.month); }
bool IsLastMonthInYear(short month) { return month == 12; }

// Date modification logic
sDate IncreaseDateByOneDay(sDate &d)
{
    if (IsLastDayInMonth(d))
    {
        if (IsLastMonthInYear(d.month)) { d.month = 1; d.year++; }
        else { d.month++; }
        d.day = 1;
    }
    else { d.day++; }
    return d;
}

sDate IncreaseDateByXDays(short x, sDate &d) { for (int i = 0; i < x; i++) IncreaseDateByOneDay(d); return d; }
sDate IncreaseDateByOneWeek(sDate &d) { return IncreaseDateByXDays(7, d); }
sDate IncreaseDateByXWeeks(short x, sDate &d) { return IncreaseDateByXDays(x * 7, d); }

sDate IncreaseDateByOneMonth(sDate &d)
{
    if (d.month == 12) { d.month = 1; d.year++; }
    else { d.month++; }
    
    short daysInMonth = GetNumberOfDaysInMonth(d.year, d.month);
    if (d.day > daysInMonth) d.day = daysInMonth;
    return d;
}

sDate IncreaseDateByXMonths(short x, sDate &d) { for (int i = 0; i < x; i++) IncreaseDateByOneMonth(d); return d; }

sDate IncreaseDateByOneYear(sDate &d)
{
    d.year++;
    if (d.month == 2 && d.day == 29 && !IsLeapYear(d.year)) d.day = 28;
    return d;
}

sDate IncreaseDateByXYears(short x, sDate &d) { for (int i = 0; i < x; i++) IncreaseDateByOneYear(d); return d; }
sDate IncreaseDateByXYearsFaster(short x, sDate &d) 
{ 
    d.year += x; 
    if (d.month == 2 && d.day == 29 && !IsLeapYear(d.year)) d.day = 28; 
    return d; 
}

sDate IncreaseDateByOneDecade(sDate &d) { return IncreaseDateByXYearsFaster(10, d); }
sDate IncreaseDateByXDecades(short x, sDate &d) { return IncreaseDateByXYears(x * 10, d); }
sDate IncreaseDateByXDecadesFaster(short x, sDate &d) { return IncreaseDateByXYearsFaster(x * 10, d); }

sDate IncreaseDateByOneCentury(sDate &d) { return IncreaseDateByXYearsFaster(100, d); }
sDate IncreaseDateByOneMillennium(sDate &d) { return IncreaseDateByXYearsFaster(1000, d); }