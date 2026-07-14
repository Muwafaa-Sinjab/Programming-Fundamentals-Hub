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
bool IsOverLapPeriods(sPeriod p1, sPeriod p2);

int main() {
    sPeriod p1, p2;

    cout << "\nEnter First Period:\nStart Date:";
    p1.startDate = ReadFullDate();
    cout << "End Date:";
    p1.endDate = ReadFullDate();

    cout << "\nEnter Second Period:\nStart Date:";
    p2.startDate = ReadFullDate();
    cout << "End Date:";
    p2.endDate = ReadFullDate();

    if (IsOverLapPeriods(p1, p2)) cout << "YES, Periods OverLap" << endl;
    else cout << "NO, Periods DOESN'T OverLap" << endl;

    return 0;
}

bool IsOverLapPeriods(sPeriod p1, sPeriod p2) {
    // Overlap exists if NOT (p2 ends before p1 starts OR p2 starts after p1 ends)
    return !(CompareDate(p2.endDate, p1.startDate) == Before || 
             CompareDate(p2.startDate, p1.endDate) == After);
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