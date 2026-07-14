#include <iostream>

using namespace std;

struct sDate { short year, month, day; };

// Function prototypes
short ReadYear(); short ReadMonth(); short ReadDay();
sDate ReadFullDate();
bool IsDateOneBeforeDateTwo(sDate d1, sDate d2);
bool IsDatesEqual(sDate d1, sDate d2);
bool IsDateOneAfterDateTwo(sDate d1, sDate d2);

int main() {
    sDate date1 = ReadFullDate();
    sDate date2 = ReadFullDate();

    if (IsDateOneAfterDateTwo(date1, date2))
        cout << "YES, Date 1 is After Date 2." << endl;
    else
        cout << "NO, Date 1 is NOT After Date 2." << endl;

    return 0;
}

bool IsDateOneBeforeDateTwo(sDate d1, sDate d2) {
    return (d1.year < d2.year) || 
           (d1.year == d2.year && d1.month < d2.month) || 
           (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day);
}

bool IsDatesEqual(sDate d1, sDate d2) {
    return (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day);
}

bool IsDateOneAfterDateTwo(sDate d1, sDate d2) {
    return !IsDateOneBeforeDateTwo(d1, d2) && !IsDatesEqual(d1, d2);
}

short ReadYear() { short y; cout << "Year: "; cin >> y; return y; }
short ReadMonth() { short m; cout << "Month: "; cin >> m; return m; }
short ReadDay() { short d; cout << "Day: "; cin >> d; return d; }
sDate ReadFullDate() { return {ReadYear(), ReadMonth(), ReadDay()}; }