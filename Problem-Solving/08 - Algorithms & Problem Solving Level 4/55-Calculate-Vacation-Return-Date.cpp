#include <iostream>
#include <ctime>
#include <string>

using namespace std;

struct sDate { short year, month, day; };

// Function prototypes
short ReadYear(); short ReadMonth(); short ReadDay(); short ReadVacationDays();
sDate ReadFullDate();
bool IsLeapYear(short year);
short GetNumberOfDaysInMonth(short year, short month);
short GetDayOfWeekOrder(sDate date);
string GetDayShortName(short dayOrder);
bool IsBusinessDay(sDate date);
sDate IncreaseDateByOneDay(sDate date);
sDate CalculateVacationReturnDate(sDate dateFrom, short vacationDays);

int main() {
    sDate dateFrom = ReadFullDate();
    short vacationDays = ReadVacationDays();
    sDate dateTo = CalculateVacationReturnDate(dateFrom, vacationDays);

    cout << "\nVacation starts: " << DayShortName(GetDayOfWeekOrder(dateFrom)) << ", " 
         << dateFrom.day << "/" << dateFrom.month << "/" << dateFrom.year << endl;
    cout << "Vacation ends: " << DayShortName(GetDayOfWeekOrder(dateTo)) << ", " 
         << dateTo.day << "/" << dateTo.month << "/" << dateTo.year << endl;

    return 0;
}

sDate CalculateVacationReturnDate(sDate dateFrom, short vacationDays) {
    short count = 0;
    sDate current = dateFrom;
    while (count < vacationDays) {
        if (IsBusinessDay(current)) count++;
        if (count < vacationDays) current = IncreaseDateByOneDay(current);
    }
    return current;
}

bool IsBusinessDay(sDate date) {
    short day = GetDayOfWeekOrder(date);
    return (day != 5 && day != 6); // Assuming Friday/Saturday weekend
}

sDate IncreaseDateByOneDay(sDate date) {
    if (date.day == GetNumberOfDaysInMonth(date.year, date.month)) {
        if (date.month == 12) { date.month = 1; date.day = 1; date.year++; }
        else { date.day = 1; date.month++; }
    } else date.day++;
    return date;
}

bool IsLeapYear(short year) { return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); }

short GetNumberOfDaysInMonth(short year, short month) {
    short arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (month == 2 && IsLeapYear(year)) ? 29 : arr[month - 1];
}

short GetDayOfWeekOrder(sDate date) {
    short a = (14 - date.month) / 12;
    short y = date.year - a;
    short m = date.month + (12 * a) - 2;
    return (date.day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m / 12)) % 7;
}

string GetDayShortName(short dayOrder) {
    string arr[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    return arr[dayOrder];
}

short ReadYear() { short y; cout << "Year: "; cin >> y; return y; }
short ReadMonth() { short m; cout << "Month: "; cin >> m; return m; }
short ReadDay() { short d; cout << "Day: "; cin >> d; return d; }
short ReadVacationDays() { short v; cout << "Vacation days: "; cin >> v; return v; }
sDate ReadFullDate() { return {ReadYear(), ReadMonth(), ReadDay()}; }