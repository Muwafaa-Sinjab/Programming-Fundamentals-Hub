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

sDate DecreaseDateByOneDay(sDate date);
sDate DecreaseDateByXDays(short xDays, sDate date);
sDate DecreaseDateByOneWeek(sDate date);
sDate DecreaseDateByXWeeks(short xWeeks, sDate date);
sDate DecreaseDateByOneMonth(sDate date);
sDate DecreaseDateByXMonths(short xMonths, sDate date);
sDate DecreaseDateByOneYear(sDate date);
sDate DecreaseDateByXYears(short xYears, sDate date);
sDate DecreaseDateByXYearsFaster(short xYears, sDate date);
sDate DecreaseDateByOneDecade(sDate date);
sDate DecreaseDateByXDecades(short xDecades, sDate date);
sDate DecreaseDateByXDecadesFaster(short xDecades, sDate date);
sDate DecreaseDateByOneCentury(sDate date);
sDate DecreaseDateByOneMillennium(sDate date);

int main()
{
    sDate date = ReadFullDate();

    cout << "\nDate After Modifications:\n\n";

    date = DecreaseDateByOneDay(date);
    cout << "01-Subtracting one day is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByXDays(10, date);
    cout << "02-Subtracting 10 days is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByOneWeek(date);
    cout << "03-Subtracting one week is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByXWeeks(10, date);
    cout << "04-Subtracting 10 weeks is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByOneMonth(date);
    cout << "05-Subtracting one month is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByXMonths(5, date);
    cout << "06-Subtracting 5 months is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByOneYear(date);
    cout << "07-Subtracting one year is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByXYears(10, date);
    cout << "08-Subtracting 10 years is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByXYearsFaster(10, date);
    cout << "09-Subtracting 10 years (faster) is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByOneDecade(date);
    cout << "10-Subtracting one decade is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByXDecades(10, date);
    cout << "11-Subtracting 10 decades is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByXDecadesFaster(10, date);
    cout << "12-Subtracting 10 decades (faster) is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByOneCentury(date);
    cout << "13-Subtracting one century is: " << date.day << "/" << date.month << "/" << date.year << endl;

    date = DecreaseDateByOneMillennium(date);
    cout << "14-Subtracting one millennium is: " << date.day << "/" << date.month << "/" << date.year << endl;

    return 0;
}

// Logic implementations
short ReadYear() { short y; cout << "Enter year: "; cin >> y; return y; }
short ReadMonth() { short m; cout << "Enter month: "; cin >> m; return m; }
short ReadDay() { short d; cout << "Enter day: "; cin >> d; return d; }

sDate ReadFullDate() { sDate d; d.day = ReadDay(); d.month = ReadMonth(); d.year = ReadYear(); return d; }

bool IsLeapYear(short year) { return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); }

short GetNumberOfDaysInMonth(short year, short month)
{
    if (month < 1 || month > 12) return 0;
    short arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : arr[month - 1];
}

sDate DecreaseDateByOneDay(sDate date)
{
    if (date.day == 1)
    {
        if (date.month == 1) { date.month = 12; date.year--; }
        else { date.month--; }
        date.day = GetNumberOfDaysInMonth(date.year, date.month);
    }
    else { date.day--; }
    return date;
}

sDate DecreaseDateByXDays(short x, sDate date) { for (int i = 0; i < x; i++) date = DecreaseDateByOneDay(date); return date; }
sDate DecreaseDateByOneWeek(sDate date) { return DecreaseDateByXDays(7, date); }
sDate DecreaseDateByXWeeks(short x, sDate date) { return DecreaseDateByXDays(x * 7, date); }

sDate DecreaseDateByOneMonth(sDate date)
{
    if (date.month == 1) { date.month = 12; date.year--; }
    else { date.month--; }
    short days = GetNumberOfDaysInMonth(date.year, date.month);
    if (date.day > days) date.day = days;
    return date;
}

sDate DecreaseDateByXMonths(short x, sDate date) { for (int i = 0; i < x; i++) date = DecreaseDateByOneMonth(date); return date; }

sDate DecreaseDateByOneYear(sDate date)
{
    date.year--;
    if (date.month == 2 && date.day == 29 && !IsLeapYear(date.year)) date.day = 28;
    return date;
}

sDate DecreaseDateByXYears(short x, sDate date) { for (int i = 0; i < x; i++) date = DecreaseDateByOneYear(date); return date; }
sDate DecreaseDateByXYearsFaster(short x, sDate date) 
{ 
    date.year -= x; 
    if (date.month == 2 && date.day == 29 && !IsLeapYear(date.year)) date.day = 28; 
    return date; 
}

sDate DecreaseDateByOneDecade(sDate date) { return DecreaseDateByXYearsFaster(10, date); }
sDate DecreaseDateByXDecades(short x, sDate date) { return DecreaseDateByXYears(x * 10, date); }
sDate DecreaseDateByXDecadesFaster(short x, sDate date) { return DecreaseDateByXYearsFaster(x * 10, date); }

sDate DecreaseDateByOneCentury(sDate date) { return DecreaseDateByXYearsFaster(100, date); }
sDate DecreaseDateByOneMillennium(sDate date) { return DecreaseDateByXYearsFaster(1000, date); }