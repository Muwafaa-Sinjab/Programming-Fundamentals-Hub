#include <iostream>

using namespace std;

// Function prototypes
short ReadYear();
bool IsLeapYear(short year);
short GetNumberOfDaysInYear(short year);
short GetNumberOfHoursInYear(short year);
int GetNumberOfMinutesInYear(short year);
int GetNumberOfSecondsInYear(short year);

int main()
{
    short year = ReadYear();

    cout << "Number of Days    in Year [" << year << "] is " << GetNumberOfDaysInYear(year) << endl;
    cout << "Number of Hours   in Year [" << year << "] is " << GetNumberOfHoursInYear(year) << endl;
    cout << "Number of Minutes in Year [" << year << "] is " << GetNumberOfMinutesInYear(year) << endl;
    cout << "Number of Seconds in Year [" << year << "] is " << GetNumberOfSecondsInYear(year) << endl;

    return 0;
}

short ReadYear()
{
    short year = 0;
    cout << "Please enter a year to check: ";
    cin >> year;
    return year;
}

bool IsLeapYear(short year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short GetNumberOfDaysInYear(short year)
{
    return IsLeapYear(year) ? 366 : 365;
}

short GetNumberOfHoursInYear(short year)
{
    return GetNumberOfDaysInYear(year) * 24;
}

int GetNumberOfMinutesInYear(short year)
{
    return GetNumberOfHoursInYear(year) * 60;
}

int GetNumberOfSecondsInYear(short year)
{
    return GetNumberOfMinutesInYear(year) * 60;
}