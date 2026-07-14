#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Function prototypes
short ReadYear();
short ReadMonth();
bool IsLeapYear(short year);
short GetNumberOfDaysInMonth(short year, short month);
short GetDayOrderInGregorianCalendar(short year, short month, short day);
string GetDayName(short year, short month, short day);
string GetMonthName(short month);
void PrintMonthCalendar(short year, short month);

int main()
{
    short year = ReadYear();
    short month = ReadMonth();

    PrintMonthCalendar(year, month);

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

short GetDayOrderInGregorianCalendar(short year, short month, short day)
{
    short a = (14 - month) / 12;
    short y = year - a;
    short m = month + (12 * a) - 2;
    return (day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m / 12)) % 7;
}

string GetMonthName(short month)
{
    const string months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    return months[month - 1];
}

void PrintMonthCalendar(short year, short month)
{
    string monthName = GetMonthName(month);
    short daysNumber = GetNumberOfDaysInMonth(year, month);
    short dayCode = GetDayOrderInGregorianCalendar(year, month, 1);

    cout << "\n____________" << monthName << "____________" << endl;
    cout << setw(5) << "Sun" << setw(5) << "Mon" << setw(5) << "Tue" << setw(5) 
         << "Wed" << setw(5) << "Thu" << setw(5) << "Fri" << setw(5) << "Sat" << endl;

    // Print leading spaces
    for (int i = 1; i <= dayCode; i++)
    {
        cout << setw(5) << " ";
    }

    short currentColumn = dayCode;
    for (int i = 1; i <= daysNumber; i++)
    {
        cout << setw(5) << i;
        currentColumn++;

        if (currentColumn % 7 == 0)
        {
            cout << endl;
        }
    }
    cout << "\n__________________________________" << endl;
}