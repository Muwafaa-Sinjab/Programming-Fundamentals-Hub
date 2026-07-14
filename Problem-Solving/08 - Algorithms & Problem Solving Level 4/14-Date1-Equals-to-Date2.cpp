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
bool IsDateEqual(sDate date1, sDate date2);

int main()
{
    sDate date1 = ReadFullDate();
    cout << endl;
    sDate date2 = ReadFullDate();

    if (IsDateEqual(date1, date2))
        cout << "\nYES, Date 1 is equal to Date 2." << endl;
    else
        cout << "\nNO, Date 1 is NOT equal to Date 2." << endl;

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

bool IsDateEqual(sDate date1, sDate date2)
{
    return (date1.year == date2.year) &&
           (date1.month == date2.month) &&
           (date1.day == date2.day);
}