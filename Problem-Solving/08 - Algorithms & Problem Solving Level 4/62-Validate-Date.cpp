#include <iostream>

using namespace std;

struct sDate { short year, month, day; };

// Prototypes
short ReadYear(); short ReadMonth(); short ReadDay();
sDate ReadFullDate();
bool IsLeapYear(short year);
short GetNumberOfDaysInMonth(short year, short month);
bool IsValidDate(sDate date);

int main() {
    sDate date = ReadFullDate();

    if (IsValidDate(date))
        cout << "Yes, Date is a valid date." << endl;
    else
        cout << "No, Date is NOT a valid date." << endl;

    return 0;
}

bool IsValidDate(sDate date) {
    if (date.month < 1 || date.month > 12) return false;
    if (date.day < 1 || date.day > GetNumberOfDaysInMonth(date.year, date.month)) return false;
    return true;
}

bool IsLeapYear(short year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short GetNumberOfDaysInMonth(short year, short month) {
    if (month < 1 || month > 12) return 0;
    short arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (month == 2 && IsLeapYear(year)) ? 29 : arr[month - 1];
}

short ReadYear() { short y; cout << "Year: "; cin >> y; return y; }
short ReadMonth() { short m; cout << "Month: "; cin >> m; return m; }
short ReadDay() { short d; cout << "Day: "; cin >> d; return d; }
sDate ReadFullDate() { return {ReadYear(), ReadMonth(), ReadDay()}; }