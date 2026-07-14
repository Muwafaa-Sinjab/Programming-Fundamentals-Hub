#include <iostream>

using namespace std;

struct sDate { short year, month, day; };
struct sPeriod { sDate startDate, endDate; };

enum enCompareDateValue { Before = -1, Equal = 0, After = 1 };

// Prototypes
short ReadYear(); short ReadMonth(); short ReadDay();
sDate ReadFullDate();
bool IsLeapYear(short year);
short GetNumberOfDaysInMonth(short year, short month);
bool IsDateOneBeforeDateTwo(sDate d1, sDate d2);
bool IsDatesEqual(sDate d1, sDate d2);
enCompareDateValue CompareDate(sDate d1, sDate d2);
sDate IncreaseDateByOneDay(sDate date);
bool IsOverLapPeriods(sPeriod p1, sPeriod p2);
short GetDifferencesInDays(sDate d1, sDate d2, bool IncludeEndDay);
int GetOverlapDaysCount(sPeriod p1, sPeriod p2, bool IncludeEndDay);

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

    cout << "OverLap Day Count = " << GetOverlapDaysCount(p1, p2, true) << endl;
    return 0;
}

int GetOverlapDaysCount(sPeriod p1, sPeriod p2, bool IncludeEndDay) {
    if (!IsOverLapPeriods(p1, p2)) return 0;

    // The overlap start is the later of the two start dates
    sDate overlapStart = (CompareDate(p1.startDate, p2.startDate) == After) ? p1.startDate : p2.startDate;
    // The overlap end is the earlier of the two end dates
    sDate overlapEnd = (CompareDate(p1.endDate, p2.endDate) == Before) ? p1.endDate : p2.endDate;

    return GetDifferencesInDays(overlapStart, overlapEnd, IncludeEndDay);
}

bool IsOverLapPeriods(sPeriod p1, sPeriod p2) {
    return !(CompareDate(p2.endDate, p1.startDate) == Before || 
             CompareDate(p2.startDate, p1.endDate) == After);
}

// Helper functions for date arithmetic
bool IsDateOneBeforeDateTwo(sDate d1, sDate d2) {
    return (d1.year < d2.year) || (d1.year == d2.year && d1.month < d2.month) || 
           (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day);
}

bool IsDatesEqual(sDate d1, sDate d2) {
    return (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day);
}

enCompareDateValue CompareDate(sDate d1, sDate d2) {
    if (IsDateOneBeforeDateTwo(d1, d2)) return Before;
    if (IsDatesEqual(d1, d2)) return Equal;
    return After;
}

sDate IncreaseDateByOneDay(sDate date) {
    short daysInMonth = GetNumberOfDaysInMonth(date.year, date.month);
    if (date.day == daysInMonth) {
        if (date.month == 12) { date.month = 1; date.day = 1; date.year++; }
        else { date.day = 1; date.month++; }
    } else { date.day++; }
    return date;
}

short GetDifferencesInDays(sDate d1, sDate d2, bool IncludeEndDay) {
    int days = 0;
    while (IsDateOneBeforeDateTwo(d1, d2)) {
        days++;
        d1 = IncreaseDateByOneDay(d1);
    }
    return IncludeEndDay ? ++days : days;
}

bool IsLeapYear(short year) { return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); }

short GetNumberOfDaysInMonth(short year, short month) {
    short arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (month == 2 && IsLeapYear(year)) ? 29 : arr[month - 1];
}

short ReadYear() { short y; cout << " Year: "; cin >> y; return y; }
short ReadMonth() { short m; cout << " Month: "; cin >> m; return m; }
short ReadDay() { short d; cout << " Day: "; cin >> d; return d; }
sDate ReadFullDate() { return {ReadYear(), ReadMonth(), ReadDay()}; }