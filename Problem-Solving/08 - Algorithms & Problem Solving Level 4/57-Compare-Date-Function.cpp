#include <iostream>

using namespace std;

struct sDate { short year, month, day; };

enum enCompareDateValue { Before = -1, Equal = 0, After = 1 };

// Prototypes
short ReadYear(); short ReadMonth(); short ReadDay();
sDate ReadFullDate();
bool IsDateOneBeforeDateTwo(sDate d1, sDate d2);
bool IsDatesEqual(sDate d1, sDate d2);
enCompareDateValue CompareDate(sDate d1, sDate d2);

int main() {
    cout << "\nEnter Date1:" << endl;
    sDate date1 = ReadFullDate();
    cout << "\nEnter Date2:" << endl;
    sDate date2 = ReadFullDate();

    cout << "Compare Result = " << CompareDate(date1, date2) << endl;

    return 0;
}

enCompareDateValue CompareDate(sDate d1, sDate d2) {
    if (IsDateOneBeforeDateTwo(d1, d2)) return enCompareDateValue::Before;
    if (IsDatesEqual(d1, d2)) return enCompareDateValue::Equal;
    return enCompareDateValue::After;
}

bool IsDateOneBeforeDateTwo(sDate d1, sDate d2) {
    return (d1.year < d2.year) || 
           (d1.year == d2.year && d1.month < d2.month) || 
           (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day);
}

bool IsDatesEqual(sDate d1, sDate d2) {
    return (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day);
}

short ReadYear() { short y; cout << "Year: "; cin >> y; return y; }
short ReadMonth() { short m; cout << "Month: "; cin >> m; return m; }
short ReadDay() { short d; cout << "Day: "; cin >> d; return d; }
sDate ReadFullDate() { return {ReadYear(), ReadMonth(), ReadDay()}; }