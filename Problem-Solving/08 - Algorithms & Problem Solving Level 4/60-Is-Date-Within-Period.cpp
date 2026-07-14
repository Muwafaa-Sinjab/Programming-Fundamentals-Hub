#include <iostream>

using namespace std;

struct sDate { short year, month, day; };
struct sPeriod { sDate startDate, endDate; };

enum enCompareDateValue { Before = -1, Equal = 0, After = 1 };

// Prototypes
short ReadYear(); short ReadMonth(); short ReadDay();
sDate ReadFullDate();
bool IsDateOneBeforeDateTwo(sDate d1, sDate d2);
bool IsDatesEqual(sDate d1, sDate d2);
enCompareDateValue CompareDate(sDate d1, sDate d2);
bool IsDateWithinPeriod(sPeriod period, sDate dateToCheck);

int main() {
    sPeriod period;
    
    cout << "\nEnter Period:\nStart Date:";
    period.startDate = ReadFullDate();
    cout << "End Date:";
    period.endDate = ReadFullDate();

    cout << "\nEnter Date to check:";
    sDate dateToCheck = ReadFullDate();

    if (IsDateWithinPeriod(period, dateToCheck))
        cout << "YES, Date is within Period" << endl;
    else
        cout << "NO, Date is NOT within Period" << endl;

    return 0;
}

bool IsDateWithinPeriod(sPeriod period, sDate dateToCheck) {
    return (CompareDate(dateToCheck, period.startDate) != Before &&
            CompareDate(dateToCheck, period.endDate) != After);
}

enCompareDateValue CompareDate(sDate d1, sDate d2) {
    if (IsDateOneBeforeDateTwo(d1, d2)) return Before;
    if (IsDatesEqual(d1, d2)) return Equal;
    return After;
}

bool IsDateOneBeforeDateTwo(sDate d1, sDate d2) {
    return (d1.year < d2.year) || 
           (d1.year == d2.year && d1.month < d2.month) || 
           (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day);
}

bool IsDatesEqual(sDate d1, sDate d2) {
    return (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day);
}

short ReadYear() { short y; cout << " Year: "; cin >> y; return y; }
short ReadMonth() { short m; cout << " Month: "; cin >> m; return m; }
short ReadDay() { short d; cout << " Day: "; cin >> d; return d; }
sDate ReadFullDate() { return {ReadYear(), ReadMonth(), ReadDay()}; }