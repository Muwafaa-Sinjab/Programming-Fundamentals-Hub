#include <iostream>

using namespace std;

struct sDate { short year, month, day; };
struct sPeriod { sDate startDate, endDate; };

// Function prototypes
short ReadYear(); short ReadMonth(); short ReadDay();
sDate ReadFullDate();
bool IsLeapYear(short year);
short GetNumberOfDaysInMonth(short year, short month);
bool IsLastDayInMonth(sDate date);
bool IsLastMonthInYear(short month);
sDate IncreaseDateByOneDay(sDate date);
bool IsDateOneBeforeDateTwo(sDate d1, sDate d2);
short GetDifferencesInDays(sDate d1, sDate d2, bool IncludeEndDay);
short PeriodLengthInDays(sPeriod period, bool IncludeEndDay);

int main() {
    sPeriod period;

    cout << "\nEnter First Period:\nStart Date:";
    period.startDate = ReadFullDate();
    cout << "End Date:";
    period.endDate = ReadFullDate();

    cout << "\nPeriod Length is: " << PeriodLengthInDays(period) << endl;
    cout << "Period Length (Including End Date) is: " << PeriodLengthInDays(period, true) << endl;

    return 0;
}

// Logic to calculate days difference
short GetDifferencesInDays(sDate d1, sDate d2, bool IncludeEndDay) {
    int days = 0;
    while (IsDateOneBeforeDateTwo(d1, d2)) {
        days++;
        d1 = IncreaseDateByOneDay(d1);
    }
    return IncludeEndDay ? ++days : days;
}

short PeriodLengthInDays(sPeriod period, bool IncludeEndDay) {
    return GetDifferencesInDays(period.startDate, period.endDate, IncludeEndDay);
}

// Date helpers
sDate IncreaseDateByOneDay(sDate date) {
    if (IsLastDayInMonth(date)) {
        if (IsLastMonthInYear(date.month)) {
            date.month = 1; date.day = 1; date.year++;
        } else {
            date.day = 1; date.month++;
        }
    } else {
        date.day++;
    }
    return date;
}

bool IsDateOneBeforeDateTwo(sDate d1, sDate d2) {
    return (d1.year < d2.year) || 
           (d1.year == d2.year && d1.month < d2.month) || 
           (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day);
}

bool IsLeapYear(short year) { return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); }

short GetNumberOfDaysInMonth(short year, short month) {
    if (month < 1 || month > 12) return 0;
    short arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (month == 2 && IsLeapYear(year)) ? 29 : arr[month - 1];
}

bool IsLastDayInMonth(sDate date) { return (date.day == GetNumberOfDaysInMonth(date.year, date.month)); }
bool IsLastMonthInYear(short month) { return (month == 12); }

// Input helpers
short ReadYear() { short y; cout << " Year: "; cin >> y; return y; }
short ReadMonth() { short m; cout << " Month: "; cin >> m; return m; }
short ReadDay() { short d; cout << " Day: "; cin >> d; return d; }
sDate ReadFullDate() { return {ReadYear(), ReadMonth(), ReadDay()}; }