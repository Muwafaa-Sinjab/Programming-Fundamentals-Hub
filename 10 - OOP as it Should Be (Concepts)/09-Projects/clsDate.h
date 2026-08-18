#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>
#include "clsString.h"

using namespace std;

class clsDate
{
private:
    struct stDate
    {
       short day;
       short month;
       short year;
    };

    stDate _Date;

    stDate getSystemDate()
    {
        stDate date;
        time_t t = time(0);
        tm* now = localtime(&t);

        date.year = now->tm_year + 1900;
        date.month = now->tm_mon + 1;
        date.day = now->tm_mday;
        return date;
    }

    static string dateToString(const stDate& date)
    {
        return to_string(date.day) + "/" + to_string(date.month) + "/" + to_string(date.year);
    }

    static stDate stringToDate(const string& dateString)
    {
        vector<string> v = clsString::splitString(dateString, "/");

        stDate date;
        date.day = stoi(v[0]);
        date.month = stoi(v[1]);
        date.year = stoi(v[2]);
        
        return date;
    }

    static bool isLeapYear(short year)
    {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    static stDate convertTotalDayToDate(short dateOrderInYear, short year)
    {
        stDate date;

        short maxDays = isLeapYear(year) ? 366 : 365;

        // Invalid day order
        if (dateOrderInYear < 1 || dateOrderInYear > maxDays)
        {
            date.day = 1;
            date.month = 1;
            date.year = year;
            return date;
        }

        date.year = year;
        date.month = 1;

        short daysInMonth = 0;

        while (true)
        {
            daysInMonth = getNumberOfDaysInMonth(year, date.month);

            if (dateOrderInYear <= daysInMonth)
                break;

            dateOrderInYear -= daysInMonth;
            date.month++;
        }

        date.day = dateOrderInYear;

        return date;
    }

    static short getDayOrderInGregorianCalendar(short year, short month, short day)
    {
        short a = (14 - month) / 12;
        short y = year - a;
        short m = month + (12 * a) - 2;
        
        return (day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m / 12)) % 7;
    }

public:
    clsDate()
    {
        _Date = getSystemDate();
    }

    clsDate(const string& date)
    {
        _Date = stringToDate(date);
    }

    clsDate(short day, short month, short year)
    {
        _Date = { day, month, year };
    }

    clsDate(short daysOrderInYear, short year)
    {
        _Date = convertTotalDayToDate(daysOrderInYear, year);
    }

    void day(short day)
    {
        _Date.day = day;
    }

    short day() const
    {
        return _Date.day;
    }

    void month(short month)
    {
        _Date.month = month;
    }

    short month() const
    {
        return _Date.month;
    }

    void year(short year)
    {
        _Date.year = year;
    }

    short year() const
    {
        return _Date.year;
    }

    void print()
	{
		cout << dateToString(_Date) << endl;
	}

    static short getNumberOfDaysInMonth(short year, short month)
    {
        if (month < 1 || month > 12)
            return 0;

        const short arrDaysInMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return (month == 2) ? (isLeapYear(year) ? 29 : 28) : arrDaysInMonths[month - 1];
    }

    short getNumberOfDaysInMonth()
    {
        return getNumberOfDaysInMonth(_Date.year, _Date.month);
    }

    static short getNumberOfDaysInYear(short year)
    {
        return isLeapYear(year) ? 366 : 365;
    }

    short getNumberOfDaysInYear()
    {
        return getNumberOfDaysInYear(_Date.year);
    }

    static short getNumberOfHoursInYear(short year)
    {
        return getNumberOfDaysInYear(year) * 24;
    }

    short getNumberOfHoursInYear()
    {
        return getNumberOfHoursInYear(_Date.year);
    }

    static int getNumberOfMinutesInYear(short year)
    {
        return getNumberOfHoursInYear(year) * 60;
    }

    int getNumberOfMinutesInYear()
    {
        return getNumberOfMinutesInYear(_Date.year);
    }

    static int getNumberOfSecondsInYear(short year)
    {
        return getNumberOfMinutesInYear(year) * 60;
    }

    int getNumberOfSecondsInYear()
    {
        return getNumberOfSecondsInYear(_Date.year);
    }

    static short getNumberOfHoursInMonth(short year, short month)
    {
        return getNumberOfDaysInMonth(year, month) * 24;
    }

    short getNumberOfHoursInMonth()
    {
        return getNumberOfHoursInMonth(_Date.year, _Date.month);
    }

    static int getNumberOfMinutesInMonth(short year, short month)
    {
        return getNumberOfHoursInMonth(year, month) * 60;
    }

    int getNumberOfMinutesInMonth()
    {
        return getNumberOfMinutesInMonth(_Date.year, _Date.month);
    }

    static int getNumberOfSecondsInMonth(short year, short month)
    {
        return getNumberOfMinutesInMonth(year, month) * 60;
    }

    int getNumberOfSecondsInMonth()
    {
        return getNumberOfSecondsInMonth(_Date.year, _Date.month);
    }

    static string getDayName(short year, short month, short day)
    {
        short dayIndex = getDayOrderInGregorianCalendar(year, month, day);
        string daysOfWeek[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
        
        return daysOfWeek[dayIndex];
    }

    string getDayName()
    {
        return getDayName(_Date.year, _Date.month, _Date.day);
    }

    static string getMonthName(short month)
    {
        const string months[] = {
            "Jan", "Feb", "Mar", "Apr", "May", "Jun",
            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
        };
        return months[month - 1];
    }

    string getMonthName()
    {
        return getMonthName(_Date.month);
    }

    static void printMonthCalendar(short year, short month)
    {
        string monthName = getMonthName(month);
        short daysNumber = getNumberOfDaysInMonth(year, month);
        short dayCode = getDayOrderInGregorianCalendar(year, month, 1);

        cout << "\n____________" << monthName << "____________" << endl;
        cout << setw(5) << "Sun" << setw(5) << "Mon" << setw(5) << "Tue" << setw(5) 
            << "Wed" << setw(5) << "Thu" << setw(5) << "Fri" << setw(5) << "Sat" << endl;

        // Print leading spaces
        for (int i = 1; i <= dayCode; i++)
        {
            cout << setw(5) << " ";
        }

        short currentColumn = dayCode;
        for (int i = 1; i <= daysNumber; i++)
        {
            cout << setw(5) << i;
            currentColumn++;

            if (currentColumn % 7 == 0)
            {
                cout << endl;
            }
        }
        cout << "\n__________________________________" << endl;
    }

    void printMonthCalendar()
    {
        printMonthCalendar(_Date.year, _Date.month);
    }
    
    static void printYearCalendar(short year)
    {
        cout << "\n__________________________________" << endl;
        cout << "\t   Calendar - " << year << endl;
        cout << "__________________________________" << endl;

        for (short i = 1; i <= 12; i++)
        {
            printMonthCalendar(year, i);
        }
    }

    void printYearCalendar()
    {
        printYearCalendar(_Date.year);
    }

    static short getDayOfYear(short year, short month, short day)
    {
        short totalDays = 0;

        // Add days of all complete months before the current month
        for (short i = 1; i < month; i++)
        {
            totalDays += getNumberOfDaysInMonth(year, i);
        }
        
        return (totalDays + day);
    }

    short getDayOfYear()
    {
        return getDayOfYear(_Date.year, _Date.month, _Date.day);
    }

    static stDate addDays(stDate date, short days)
    {
        short remainingDays = days +
            getDayOfYear(date.year, date.month, date.day);

        short daysInMonth = 0;

        date.month = 1;

        while (true)
        {
            daysInMonth = getNumberOfDaysInMonth(date.year, date.month);

            if (remainingDays > daysInMonth)
            {
                remainingDays -= daysInMonth;
                date.month++;

                if (date.month > 12)
                {
                    date.month = 1;
                    date.year++;
                }
            }
            else
            {
                date.day = remainingDays;
                break;
            }
        }

        return date;
    }

    stDate addDays(short days)
    {
        return addDays(_Date, days);
    }

    static bool isDateLess(const stDate& date1, const stDate& date2)
    {
        // Compare years first, then months, then days
        if (date1.year != date2.year)
            return date1.year < date2.year;
        
        if (date1.month != date2.month)
            return date1.month < date2.month;
        
        return date1.day < date2.day;
    }

    static bool isLastDayInMonth(stDate date)
    {
        return (date.day == getNumberOfDaysInMonth(date.year, date.month));
    }

    bool isLastDayInMonth()
    {
        return isLastDayInMonth(_Date);
    }

    static bool isLastMonthInYear(short month)
    {
        return (month == 12);
    }

    bool isLastMonthInYear()
    {
        return isLastMonthInYear(_Date.month);
    }

    static stDate increaseDateByOneDay(stDate &date)
    {
        if (isLastDayInMonth(date) && isLastMonthInYear(date.month))
        {
            date.day = 1;
            date.month = 1;
            date.year++;
        }
        else if (isLastDayInMonth(date))
        {
            date.day = 1;
            date.month++;
        }
        else
        {
            date.day++;
        }

        return date;
    }

    void increaseDateByOneDay() 
    { 
        _Date = increaseDateByOneDay(_Date); 
    }

    static bool isDateEqual(stDate date1, stDate date2)
    {
        return (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year);
    }

    bool isDateEqual(stDate date2)
    {
        return isDateEqual(_Date, date2);
    }

    static int getDifferenceInDays(stDate date1, stDate date2, bool includeEndDay)
    {
        int count = 0;
        int swapFlagSign = 1;

        if (!isDateLess(date1, date2))
        {
            swapDates(date1, date2);
            swapFlagSign = -1;
        }

        while (!isDateEqual(date1, date2))
        {
            count++;
            date1 = increaseDateByOneDay(date1);
        }

        return includeEndDay
            ? (++count) * swapFlagSign
            : count * swapFlagSign;
    }

    int getDifferenceInDays(stDate date2, bool includeEndDay)
    {
        return getDifferenceInDays(_Date, date2, includeEndDay);
    }

    static void swapDates(stDate& date1, stDate& date2)
    {
        stDate tempDate = date1;

        date1 = date2;
        date2 = tempDate;
    }

    enum enDateCompare { Before = -1, Equal = 0, After = 1 };

    static stDate increaseDateByOneWeek(const stDate& date)
    {
        stDate result = date;
        for (int i = 1; i <= 7; i++)
            result = increaseDateByOneDay(result);
        return result;
    }

    void increaseDateByOneWeek()
    {
        _Date = increaseDateByOneWeek(_Date);
    }

    static stDate increaseDateByXWeeks(stDate date, short weeks)
    {
        for (short i = 1; i <= weeks; i++)
            date = increaseDateByOneWeek(date);
        return date;
    }

    void increaseDateByXWeeks(short weeks)
    {
        _Date = increaseDateByXWeeks(_Date, weeks);
    }

    static stDate increaseDateByOneMonth(const stDate& date)
    {
        stDate newDate = date;
        if (newDate.month == 12)
        {
            newDate.month = 1;
            newDate.year++;
        }
        else
        {
            newDate.month++;
        }
        short maxDay = getNumberOfDaysInMonth(newDate.year, newDate.month);
        if (newDate.day > maxDay)
            newDate.day = maxDay;
        return newDate;
    }

    void increaseDateByOneMonth()
    {
        _Date = increaseDateByOneMonth(_Date);
    }

    static stDate increaseDateByXMonths(stDate date, short months)
    {
        for (short i = 1; i <= months; i++)
            date = increaseDateByOneMonth(date);
        return date;
    }

    void increaseDateByXMonths(short months)
    {
        _Date = increaseDateByXMonths(_Date, months);
    }

    static stDate increaseDateByOneYear(const stDate& date)
    {
        stDate newDate = date;
        newDate.year++;
        return newDate;
    }

    void increaseDateByOneYear()
    {
        _Date = increaseDateByOneYear(_Date);
    }

    static stDate increaseDateByXYears(stDate date, short years)
    {
        date.year += years;
        return date;
    }

    void increaseDateByXYears(short years)
    {
        _Date = increaseDateByXYears(_Date, years);
    }

    static stDate increaseDateByOneDecade(const stDate& date)
    {
        stDate newDate = date;
        newDate.year += 10;
        return newDate;
    }

    void increaseDateByOneDecade()
    {
        _Date = increaseDateByOneDecade(_Date);
    }

    static stDate increaseDateByXDecades(stDate date, short decades)
    {
        date.year += decades * 10;
        return date;
    }

    void increaseDateByXDecades(short decades)
    {
        _Date = increaseDateByXDecades(_Date, decades);
    }

    static stDate increaseDateByOneCentury(const stDate& date)
    {
        stDate newDate = date;
        newDate.year += 100;
        return newDate;
    }

    void increaseDateByOneCentury()
    {
        _Date = increaseDateByOneCentury(_Date);
    }

    static stDate increaseDateByOneMillennium(const stDate& date)
    {
        stDate newDate = date;
        newDate.year += 1000;
        return newDate;
    }

    void increaseDateByOneMillennium()
    {
        _Date = increaseDateByOneMillennium(_Date);
    }

    static stDate decreaseDateByOneDay(const stDate& date)
    {
        stDate newDate = date;
        if (newDate.day == 1)
        {
            if (newDate.month == 1)
            {
                newDate.month = 12;
                newDate.day = 31;
                newDate.year--;
            }
            else
            {
                newDate.month--;
                newDate.day = getNumberOfDaysInMonth(newDate.year, newDate.month);
            }
        }
        else
        {
            newDate.day--;
        }
        return newDate;
    }

    void decreaseDateByOneDay()
    {
        _Date = decreaseDateByOneDay(_Date);
    }

    static stDate decreaseDateByOneWeek(const stDate& date)
    {
        stDate result = date;
        for (int i = 1; i <= 7; i++)
            result = decreaseDateByOneDay(result);
        return result;
    }

    void decreaseDateByOneWeek()
    {
        _Date = decreaseDateByOneWeek(_Date);
    }

    static stDate decreaseDateByXWeeks(stDate date, short weeks)
    {
        for (short i = 1; i <= weeks; i++)
            date = decreaseDateByOneWeek(date);
        return date;
    }

    void decreaseDateByXWeeks(short weeks)
    {
        _Date = decreaseDateByXWeeks(_Date, weeks);
    }

    static stDate decreaseDateByOneMonth(const stDate& date)
    {
        stDate newDate = date;
        if (newDate.month == 1)
        {
            newDate.month = 12;
            newDate.year--;
        }
        else
        {
            newDate.month--;
        }
        short maxDay = getNumberOfDaysInMonth(newDate.year, newDate.month);
        if (newDate.day > maxDay)
            newDate.day = maxDay;
        return newDate;
    }

    void decreaseDateByOneMonth()
    {
        _Date = decreaseDateByOneMonth(_Date);
    }

    static stDate decreaseDateByXMonths(stDate date, short months)
    {
        for (short i = 1; i <= months; i++)
            date = decreaseDateByOneMonth(date);
        return date;
    }

    void decreaseDateByXMonths(short months)
    {
        _Date = decreaseDateByXMonths(_Date, months);
    }

    static stDate decreaseDateByOneYear(const stDate& date)
    {
        stDate newDate = date;
        newDate.year--;
        return newDate;
    }

    void decreaseDateByOneYear()
    {
        _Date = decreaseDateByOneYear(_Date);
    }

    static stDate decreaseDateByXYears(stDate date, short years)
    {
        date.year -= years;
        return date;
    }

    void decreaseDateByXYears(short years)
    {
        _Date = decreaseDateByXYears(_Date, years);
    }

    static stDate decreaseDateByOneDecade(const stDate& date)
    {
        stDate newDate = date;
        newDate.year -= 10;
        return newDate;
    }

    void decreaseDateByOneDecade()
    {
        _Date = decreaseDateByOneDecade(_Date);
    }

    static stDate decreaseDateByXDecades(stDate date, short decades)
    {
        date.year -= decades * 10;
        return date;
    }

    void decreaseDateByXDecades(short decades)
    {
        _Date = decreaseDateByXDecades(_Date, decades);
    }

    static stDate decreaseDateByOneCentury(const stDate& date)
    {
        stDate newDate = date;
        newDate.year -= 100;
        return newDate;
    }

    void decreaseDateByOneCentury()
    {
        _Date = decreaseDateByOneCentury(_Date);
    }

    static stDate decreaseDateByOneMillennium(const stDate& date)
    {
        stDate newDate = date;
        newDate.year -= 1000;
        return newDate;
    }

    void decreaseDateByOneMillennium()
    {
        _Date = decreaseDateByOneMillennium(_Date);
    }

    static bool isEndOfWeek(const stDate& date)
    {
        return getDayOrderInGregorianCalendar(date.year, date.month, date.day) == 6;
    }

    bool isEndOfWeek() const
    {
        return isEndOfWeek(_Date);
    }

    static bool isWeekEnd(const stDate& date)
    {
        short dayOrder = getDayOrderInGregorianCalendar(date.year, date.month, date.day);
        return (dayOrder == 5 || dayOrder == 6);
    }

    bool isWeekEnd() const
    {
        return isWeekEnd(_Date);
    }

    static bool isBusinessDay(const stDate& date)
    {
        return !isWeekEnd(date);
    }

    bool isBusinessDay() const
    {
        return isBusinessDay(_Date);
    }

    static short daysUntilTheEndOfWeek(const stDate& date)
    {
        return 6 - getDayOrderInGregorianCalendar(date.year, date.month, date.day);
    }

    short daysUntilTheEndOfWeek() const
    {
        return daysUntilTheEndOfWeek(_Date);
    }

    static short daysUntilTheEndOfMonth(const stDate& date)
    {
        stDate endOfMonth;
        endOfMonth.day = getNumberOfDaysInMonth(date.year, date.month);
        endOfMonth.month = date.month;
        endOfMonth.year = date.year;
        return getDifferenceInDays(date, endOfMonth, true);
    }

    short daysUntilTheEndOfMonth() const
    {
        return daysUntilTheEndOfMonth(_Date);
    }

    static short daysUntilTheEndOfYear(const stDate& date)
    {
        stDate endOfYear;
        endOfYear.day = 31;
        endOfYear.month = 12;
        endOfYear.year = date.year;
        return getDifferenceInDays(date, endOfYear, true);
    }

    short daysUntilTheEndOfYear() const
    {
        return daysUntilTheEndOfYear(_Date);
    }

    static short calculateBusinessDays(stDate dateFrom, stDate dateTo)
    {
        short days = 0;
        while (isDateLess(dateFrom, dateTo))
        {
            if (isBusinessDay(dateFrom))
                days++;
            dateFrom = increaseDateByOneDay(dateFrom);
        }
        return days;
    }

    static short calculateVacationDays(stDate dateFrom, stDate dateTo)
    {
        return calculateBusinessDays(dateFrom, dateTo);
    }

    static stDate calculateVacationReturnDate(stDate dateFrom, short vacationDays)
    {
        short weekEndCounter = 0;
        stDate current = dateFrom;
        for (short i = 1; i <= vacationDays; i++)
        {
            if (isWeekEnd(current))
                weekEndCounter++;
            current = increaseDateByOneDay(current);
        }
        for (short i = 1; i <= weekEndCounter; i++)
            current = increaseDateByOneDay(current);
        return current;
    }

    static bool isDate1AfterDate2(const stDate& date1, const stDate& date2)
    {
        return (!isDateLess(date1, date2) && !isDateEqual(date1, date2));
    }

    bool isDateAfterDate2(const stDate& date2) const
    {
        return isDate1AfterDate2(_Date, date2);
    }

    static enDateCompare compareDates(const stDate& date1, const stDate& date2)
    {
        if (isDateLess(date1, date2))
            return enDateCompare::Before;
        if (isDateEqual(date1, date2))
            return enDateCompare::Equal;
        return enDateCompare::After;
    }

    enDateCompare compareDates(const stDate& date2) const
    {
        return compareDates(_Date, date2);
    }

};  