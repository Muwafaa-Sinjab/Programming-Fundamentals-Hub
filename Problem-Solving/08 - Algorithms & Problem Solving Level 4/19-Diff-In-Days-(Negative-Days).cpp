#include <iostream>
#include <ctime>

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
bool IsDateEqual(sDate date1, sDate date2);
bool IsDateLessThan(sDate date1, sDate date2);
void SwapDates(sDate &date1, sDate &date2);
int GetDifferenceInDays(sDate date1, sDate date2, bool includeEndDay = false);
sDate GetSystemDate();

int main()
{
    sDate date1 = ReadFullDate();
    cout << endl;
    sDate date2 = ReadFullDate();

    cout << "\nDifference is: " << GetDifferenceInDays(date1, date2, true) << " Day(s)" << endl;

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

bool IsDateEqual(sDate date1, sDate date2)
{
    return (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year);
}

bool IsDateLessThan(sDate date1, sDate date2)
{
    if (date1.year != date2.year)
        return date1.year < date2.year;
    if (date1.month != date2.month)
        return date1.month < date2.month;
    return date1.day < date2.day;
}

void SwapDates(sDate &date1, sDate &date2)
{
    sDate tempDate = date1;
    date1 = date2;
    date2 = tempDate;
}

int GetDifferenceInDays(sDate date1, sDate date2, bool includeEndDay)
{
    int count = 0;
    int swapFlagSign = 1;

    if (!IsDateLessThan(date1, date2))
    {
        SwapDates(date1, date2);
        swapFlagSign = -1;
    }

    while (!IsDateEqual(date1, date2))
    {
        count++;
        IncreaseDateByOneDay(date1);
    }

    return includeEndDay ? (++count) * swapFlagSign : count * swapFlagSign;
}

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