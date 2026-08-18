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
    short _Day;
    short _Month;
    short _Year;

public:
    clsDate()
    {
        clsDate SysDate = GetSystemDate();
        _Day = SysDate._Day;
        _Month = SysDate._Month;
        _Year = SysDate._Year;
    }

    clsDate(const string& Date)
    {
        clsDate Parsed = StringToDate(Date);
        _Day = Parsed._Day;
        _Month = Parsed._Month;
        _Year = Parsed._Year;
    }

    clsDate(short Day, short Month, short Year)
    {
        _Day = Day;
        _Month = Month;
        _Year = Year;
    }

    clsDate(short DaysOrderInYear, short Year)
    {
        clsDate DateObj = ConvertTotalDayToDate(DaysOrderInYear, Year);
        _Day = DateObj._Day;
        _Month = DateObj._Month;
        _Year = DateObj._Year;
    }

    void SetDay(short Day)
    {
        _Day = Day;
    }

    short GetDay() const
    {
        return _Day;
    }

    void SetMonth(short Month)
    {
        _Month = Month;
    }

    short GetMonth() const
    {
        return _Month;
    }

    void SetYear(short Year)
    {
        _Year = Year;
    }

    short GetYear() const
    {
        return _Year;
    }

    void Print()
    {
        cout << DateToString(_Day, _Month, _Year) << endl;
    }

    static short GetNumberOfDaysInMonth(short Year, short Month)
    {
        if (Month < 1 || Month > 12)
            return 0;

        const short ArrDaysInMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : ArrDaysInMonths[Month - 1];
    }

    static string DateToString(const clsDate& Date)
    {
    return to_string(Date._Day) + "/" + to_string(Date._Month) + "/" + to_string(Date._Year);
    }

    static clsDate GetSystemDate()
    {
        time_t Time = time(0);
        tm* Now = localtime(&Time);

        return clsDate(
            Now->tm_mday,
            Now->tm_mon + 1,
            Now->tm_year + 1900
        );
    }

    static string GetSystemDataTimeString()
    {
        time_t t = time(0);
		tm* now = localtime(&t);

		short Day, Month, Year,Hour,Minute,Second;

		Year = now->tm_year + 1900;
		Month = now->tm_mon + 1;
		Day = now->tm_mday;
		Hour = now->tm_hour;
		Minute = now->tm_min;
		Second = now->tm_sec;

		return (to_string(Day) + "/" + to_string(Month) + "/"
			+ to_string(Year) + " - "
			+ to_string(Hour) + ":" + to_string(Minute)
			+ ":" + to_string(Second));
    }

    static string DateToString(short Day, short Month, short Year)
    {
        return to_string(Day) + "/" + to_string(Month) + "/" + to_string(Year);
    }

    static clsDate StringToDate(const string& DateString)
    {
        vector<string> Parts = clsString::Split(DateString, "/");
        return clsDate(stoi(Parts[0]), stoi(Parts[1]), stoi(Parts[2]));
    }

    static bool IsLeapYear(short Year)
    {
        return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
    }

    static clsDate ConvertTotalDayToDate(short DateOrderInYear, short Year)
    {
        short Day, Month = 1;
        short MaxDays = IsLeapYear(Year) ? 366 : 365;

        if (DateOrderInYear < 1 || DateOrderInYear > MaxDays)
        {
            return clsDate(1, 1, Year);
        }

        short DaysInMonth = 0;
        short RemainingDays = DateOrderInYear;

        while (true)
        {
            DaysInMonth = GetNumberOfDaysInMonth(Year, Month);

            if (RemainingDays <= DaysInMonth)
                break;

            RemainingDays -= DaysInMonth;
            Month++;
        }

        Day = RemainingDays;
        return clsDate(Day, Month, Year);
    }

    static short GetDayOrderInGregorianCalendar(short Year, short Month, short Day)
    {
        short A = (14 - Month) / 12;
        short Y = Year - A;
        short M = Month + (12 * A) - 2;
        
        return (Day + Y + (Y / 4) - (Y / 100) + (Y / 400) + (31 * M / 12)) % 7;
    }

    short GetNumberOfDaysInMonth()
    {
        return GetNumberOfDaysInMonth(_Year, _Month);
    }

    static short GetNumberOfDaysInYear(short Year)
    {
        return IsLeapYear(Year) ? 366 : 365;
    }

    short GetNumberOfDaysInYear()
    {
        return GetNumberOfDaysInYear(_Year);
    }

    static short GetNumberOfHoursInYear(short Year)
    {
        return GetNumberOfDaysInYear(Year) * 24;
    }

    short GetNumberOfHoursInYear()
    {
        return GetNumberOfHoursInYear(_Year);
    }

    static int GetNumberOfMinutesInYear(short Year)
    {
        return GetNumberOfHoursInYear(Year) * 60;
    }

    int GetNumberOfMinutesInYear()
    {
        return GetNumberOfMinutesInYear(_Year);
    }

    static int GetNumberOfSecondsInYear(short Year)
    {
        return GetNumberOfMinutesInYear(Year) * 60;
    }

    int GetNumberOfSecondsInYear()
    {
        return GetNumberOfSecondsInYear(_Year);
    }

    static short GetNumberOfHoursInMonth(short Year, short Month)
    {
        return GetNumberOfDaysInMonth(Year, Month) * 24;
    }

    short GetNumberOfHoursInMonth()
    {
        return GetNumberOfHoursInMonth(_Year, _Month);
    }

    static int GetNumberOfMinutesInMonth(short Year, short Month)
    {
        return GetNumberOfHoursInMonth(Year, Month) * 60;
    }

    int GetNumberOfMinutesInMonth()
    {
        return GetNumberOfMinutesInMonth(_Year, _Month);
    }

    static int GetNumberOfSecondsInMonth(short Year, short Month)
    {
        return GetNumberOfMinutesInMonth(Year, Month) * 60;
    }

    int GetNumberOfSecondsInMonth()
    {
        return GetNumberOfSecondsInMonth(_Year, _Month);
    }

    static string GetDayName(short Year, short Month, short Day)
    {
        short DayIndex = GetDayOrderInGregorianCalendar(Year, Month, Day);
        string DaysOfWeek[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
        
        return DaysOfWeek[DayIndex];
    }

    string GetDayName()
    {
        return GetDayName(_Year, _Month, _Day);
    }

    static string GetMonthName(short Month)
    {
        const string Months[] = {
            "Jan", "Feb", "Mar", "Apr", "May", "Jun",
            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
        };
        return Months[Month - 1];
    }

    string GetMonthName()
    {
        return GetMonthName(_Month);
    }

    static void PrintMonthCalendar(short Year, short Month)
    {
        string MonthName = GetMonthName(Month);
        short DaysNumber = GetNumberOfDaysInMonth(Year, Month);
        short DayCode = GetDayOrderInGregorianCalendar(Year, Month, 1);

        cout << "\n____________" << MonthName << "____________" << endl;
        cout << setw(5) << "Sun" << setw(5) << "Mon" << setw(5) << "Tue" << setw(5) 
            << "Wed" << setw(5) << "Thu" << setw(5) << "Fri" << setw(5) << "Sat" << endl;

        for (int i = 1; i <= DayCode; i++)
        {
            cout << setw(5) << " ";
        }

        short CurrentColumn = DayCode;
        for (int i = 1; i <= DaysNumber; i++)
        {
            cout << setw(5) << i;
            CurrentColumn++;

            if (CurrentColumn % 7 == 0)
            {
                cout << endl;
            }
        }
        cout << "\n__________________________________" << endl;
    }

    void PrintMonthCalendar()
    {
        PrintMonthCalendar(_Year, _Month);
    }
    
    static void PrintYearCalendar(short Year)
    {
        cout << "\n__________________________________" << endl;
        cout << "\t   Calendar - " << Year << endl;
        cout << "__________________________________" << endl;

        for (short i = 1; i <= 12; i++)
        {
            PrintMonthCalendar(Year, i);
        }
    }

    void PrintYearCalendar()
    {
        PrintYearCalendar(_Year);
    }

    static short GetDayOfYear(short Year, short Month, short Day)
    {
        short TotalDays = 0;

        for (short i = 1; i < Month; i++)
        {
            TotalDays += GetNumberOfDaysInMonth(Year, i);
        }
        
        return (TotalDays + Day);
    }

    short GetDayOfYear()
    {
        return GetDayOfYear(_Year, _Month, _Day);
    }

    static clsDate AddDays(clsDate DateObject, short Days)
    {
        short RemainingDays = Days + GetDayOfYear(DateObject._Year, DateObject._Month, DateObject._Day);
        short DaysInMonth = 0;

        DateObject._Month = 1;

        while (true)
        {
            DaysInMonth = GetNumberOfDaysInMonth(DateObject._Year, DateObject._Month);

            if (RemainingDays > DaysInMonth)
            {
                RemainingDays -= DaysInMonth;
                DateObject._Month++;

                if (DateObject._Month > 12)
                {
                    DateObject._Month = 1;
                    DateObject._Year++;
                }
            }
            else
            {
                DateObject._Day = RemainingDays;
                break;
            }
        }

        return DateObject;
    }

    clsDate AddDays(short Days)
    {
        return AddDays(*this, Days);
    }

    static bool IsDate1BeforeDate2(const clsDate& Date1, const clsDate& Date2)
    {
        if (Date1._Year != Date2._Year)
            return Date1._Year < Date2._Year;
        
        if (Date1._Month != Date2._Month)
            return Date1._Month < Date2._Month;
        
        return Date1._Day < Date2._Day;
    }

    static bool IsLastDayInMonth(const clsDate& DateObject)
    {
        return (DateObject._Day == GetNumberOfDaysInMonth(DateObject._Year, DateObject._Month));
    }

    bool IsLastDayInMonth()
    {
        return IsLastDayInMonth(*this);
    }

    static bool IsLastMonthInYear(short Month)
    {
        return (Month == 12);
    }

    bool IsLastMonthInYear()
    {
        return IsLastMonthInYear(_Month);
    }

    static clsDate IncreaseDateByOneDay(clsDate& DateObject)
    {
        if (IsLastDayInMonth(DateObject) && IsLastMonthInYear(DateObject._Month))
        {
            DateObject._Day = 1;
            DateObject._Month = 1;
            DateObject._Year++;
        }
        else if (IsLastDayInMonth(DateObject))
        {
            DateObject._Day = 1;
            DateObject._Month++;
        }
        else
        {
            DateObject._Day++;
        }

        return DateObject;
    }

    clsDate IncreaseDateByOneDay()
    {
        return IncreaseDateByOneDay(*this);
    }

    static bool IsDateEqual(const clsDate& Date1, const clsDate& Date2)
    {
        return (Date1._Day == Date2._Day && Date1._Month == Date2._Month && Date1._Year == Date2._Year);
    }

    bool IsDateEqual(const clsDate& Date2)
    {
        return IsDateEqual(*this, Date2);
    }

    static int GetDifferenceInDays(clsDate Date1, clsDate Date2, bool IncludeEndDay)
    {
        int Count = 0;
        int SwapFlagSign = 1;

        if (!IsDate1BeforeDate2(Date1, Date2))
        {
            SwapDates(Date1, Date2);
            SwapFlagSign = -1;
        }

        while (!IsDateEqual(Date1, Date2))
        {
            Count++;
            Date1 = IncreaseDateByOneDay(Date1);
        }

        return IncludeEndDay
            ? (++Count) * SwapFlagSign
            : Count * SwapFlagSign;
    }

    int GetDifferenceInDays(const clsDate& Date2, bool IncludeEndDay)
    {
        return GetDifferenceInDays(*this, Date2, IncludeEndDay);
    }

    static void SwapDates(clsDate& Date1, clsDate& Date2)
    {
        clsDate TempDate = Date1;
        Date1 = Date2;
        Date2 = TempDate;
    }

    enum enDateCompare { Before = -1, Equal = 0, After = 1 };

    static clsDate IncreaseDateByOneWeek(const clsDate& DateObject)
    {
        clsDate Result = DateObject;
        for (int i = 1; i <= 7; i++)
            Result = IncreaseDateByOneDay(Result);
        return Result;
    }

    void IncreaseDateByOneWeek()
    {
        *this = IncreaseDateByOneWeek(*this);
    }

    static clsDate IncreaseDateByXWeeks(clsDate DateObject, short Weeks)
    {
        for (short i = 1; i <= Weeks; i++)
            DateObject = IncreaseDateByOneWeek(DateObject);
        return DateObject;
    }

    void IncreaseDateByXWeeks(short Weeks)
    {
        *this = IncreaseDateByXWeeks(*this, Weeks);
    }

    static clsDate IncreaseDateByOneMonth(const clsDate& DateObject)
    {
        clsDate NewDate = DateObject;
        if (NewDate._Month == 12)
        {
            NewDate._Month = 1;
            NewDate._Year++;
        }
        else
        {
            NewDate._Month++;
        }
        short MaxDay = GetNumberOfDaysInMonth(NewDate._Year, NewDate._Month);
        if (NewDate._Day > MaxDay)
            NewDate._Day = MaxDay;
        return NewDate;
    }

    void IncreaseDateByOneMonth()
    {
        *this = IncreaseDateByOneMonth(*this);
    }

    static clsDate IncreaseDateByXMonths(clsDate DateObject, short Months)
    {
        for (short i = 1; i <= Months; i++)
            DateObject = IncreaseDateByOneMonth(DateObject);
        return DateObject;
    }

    void IncreaseDateByXMonths(short Months)
    {
        *this = IncreaseDateByXMonths(*this, Months);
    }

    static clsDate IncreaseDateByOneYear(const clsDate& DateObject)
    {
        clsDate NewDate = DateObject;
        NewDate._Year++;
        return NewDate;
    }

    void IncreaseDateByOneYear()
    {
        *this = IncreaseDateByOneYear(*this);
    }

    static clsDate IncreaseDateByXYears(clsDate DateObject, short Years)
    {
        DateObject._Year += Years;
        return DateObject;
    }

    void IncreaseDateByXYears(short Years)
    {
        *this = IncreaseDateByXYears(*this, Years);
    }

    static clsDate IncreaseDateByOneDecade(const clsDate& DateObject)
    {
        clsDate NewDate = DateObject;
        NewDate._Year += 10;
        return NewDate;
    }

    void IncreaseDateByOneDecade()
    {
        *this = IncreaseDateByOneDecade(*this);
    }

    static clsDate IncreaseDateByXDecades(clsDate DateObject, short Decades)
    {
        DateObject._Year += Decades * 10;
        return DateObject;
    }

    void IncreaseDateByXDecades(short Decades)
    {
        *this = IncreaseDateByXDecades(*this, Decades);
    }

    static clsDate IncreaseDateByOneCentury(const clsDate& DateObject)
    {
        clsDate NewDate = DateObject;
        NewDate._Year += 100;
        return NewDate;
    }

    void IncreaseDateByOneCentury()
    {
        *this = IncreaseDateByOneCentury(*this);
    }

    static clsDate IncreaseDateByOneMillennium(const clsDate& DateObject)
    {
        clsDate NewDate = DateObject;
        NewDate._Year += 1000;
        return NewDate;
    }

    void IncreaseDateByOneMillennium()
    {
        *this = IncreaseDateByOneMillennium(*this);
    }

    static clsDate DecreaseDateByOneDay(const clsDate& DateObject)
    {
        clsDate NewDate = DateObject;
        if (NewDate._Day == 1)
        {
            if (NewDate._Month == 1)
            {
                NewDate._Month = 12;
                NewDate._Day = 31;
                NewDate._Year--;
            }
            else
            {
                NewDate._Month--;
                NewDate._Day = GetNumberOfDaysInMonth(NewDate._Year, NewDate._Month);
            }
        }
        else
        {
            NewDate._Day--;
        }
        return NewDate;
    }

    void DecreaseDateByOneDay()
    {
        *this = DecreaseDateByOneDay(*this);
    }

    static clsDate DecreaseDateByOneWeek(const clsDate& DateObject)
    {
        clsDate Result = DateObject;
        for (int i = 1; i <= 7; i++)
            Result = DecreaseDateByOneDay(Result);
        return Result;
    }

    void DecreaseDateByOneWeek()
    {
        *this = DecreaseDateByOneWeek(*this);
    }

    static clsDate DecreaseDateByXWeeks(clsDate DateObject, short Weeks)
    {
        for (short i = 1; i <= Weeks; i++)
            DateObject = DecreaseDateByOneWeek(DateObject);
        return DateObject;
    }

    void DecreaseDateByXWeeks(short Weeks)
    {
        *this = DecreaseDateByXWeeks(*this, Weeks);
    }

    static clsDate DecreaseDateByOneMonth(const clsDate& DateObject)
    {
        clsDate NewDate = DateObject;
        if (NewDate._Month == 1)
        {
            NewDate._Month = 12;
            NewDate._Year--;
        }
        else
        {
            NewDate._Month--;
        }
        short MaxDay = GetNumberOfDaysInMonth(NewDate._Year, NewDate._Month);
        if (NewDate._Day > MaxDay)
            NewDate._Day = MaxDay;
        return NewDate;
    }

    void DecreaseDateByOneMonth()
    {
        *this = DecreaseDateByOneMonth(*this);
    }

    static clsDate DecreaseDateByXMonths(clsDate DateObject, short Months)
    {
        for (short i = 1; i <= Months; i++)
            DateObject = DecreaseDateByOneMonth(DateObject);
        return DateObject;
    }

    void DecreaseDateByXMonths(short Months)
    {
        *this = DecreaseDateByXMonths(*this, Months);
    }

    static clsDate DecreaseDateByOneYear(const clsDate& DateObject)
    {
        clsDate NewDate = DateObject;
        NewDate._Year--;
        return NewDate;
    }

    void DecreaseDateByOneYear()
    {
        *this = DecreaseDateByOneYear(*this);
    }

    static clsDate DecreaseDateByXYears(clsDate DateObject, short Years)
    {
        DateObject._Year -= Years;
        return DateObject;
    }

    void DecreaseDateByXYears(short Years)
    {
        *this = DecreaseDateByXYears(*this, Years);
    }

    static clsDate DecreaseDateByOneDecade(const clsDate& DateObject)
    {
        clsDate NewDate = DateObject;
        NewDate._Year -= 10;
        return NewDate;
    }

    void DecreaseDateByOneDecade()
    {
        *this = DecreaseDateByOneDecade(*this);
    }

    static clsDate DecreaseDateByXDecades(clsDate DateObject, short Decades)
    {
        DateObject._Year -= Decades * 10;
        return DateObject;
    }

    void DecreaseDateByXDecades(short Decades)
    {
        *this = DecreaseDateByXDecades(*this, Decades);
    }

    static clsDate DecreaseDateByOneCentury(const clsDate& DateObject)
    {
        clsDate NewDate = DateObject;
        NewDate._Year -= 100;
        return NewDate;
    }

    void DecreaseDateByOneCentury()
    {
        *this = DecreaseDateByOneCentury(*this);
    }

    static clsDate DecreaseDateByOneMillennium(const clsDate& DateObject)
    {
        clsDate NewDate = DateObject;
        NewDate._Year -= 1000;
        return NewDate;
    }

    void DecreaseDateByOneMillennium()
    {
        *this = DecreaseDateByOneMillennium(*this);
    }

    static bool IsEndOfWeek(const clsDate& DateObject)
    {
        return GetDayOrderInGregorianCalendar(DateObject._Year, DateObject._Month, DateObject._Day) == 6;
    }

    bool IsEndOfWeek() const
    {
        return IsEndOfWeek(*this);
    }

    static bool IsWeekEnd(const clsDate& DateObject)
    {
        short DayOrder = GetDayOrderInGregorianCalendar(DateObject._Year, DateObject._Month, DateObject._Day);
        return (DayOrder == 5 || DayOrder == 6);
    }

    bool IsWeekEnd() const
    {
        return IsWeekEnd(*this);
    }

    static bool IsBusinessDay(const clsDate& DateObject)
    {
        return !IsWeekEnd(DateObject);
    }

    bool IsBusinessDay() const
    {
        return IsBusinessDay(*this);
    }

    static short DaysUntilTheEndOfWeek(const clsDate& DateObject)
    {
        return 6 - GetDayOrderInGregorianCalendar(DateObject._Year, DateObject._Month, DateObject._Day);
    }

    short DaysUntilTheEndOfWeek() const
    {
        return DaysUntilTheEndOfWeek(*this);
    }

    static short DaysUntilTheEndOfMonth(const clsDate& DateObject)
    {
        clsDate EndOfMonth(GetNumberOfDaysInMonth(DateObject._Year, DateObject._Month), DateObject._Month, DateObject._Year);
        return GetDifferenceInDays(DateObject, EndOfMonth, true);
    }

    short DaysUntilTheEndOfMonth() const
    {
        return DaysUntilTheEndOfMonth(*this);
    }

    static short DaysUntilTheEndOfYear(const clsDate& DateObject)
    {
        clsDate EndOfYear(31, 12, DateObject._Year);
        return GetDifferenceInDays(DateObject, EndOfYear, true);
    }

    short DaysUntilTheEndOfYear() const
    {
        return DaysUntilTheEndOfYear(*this);
    }

    static short CalculateBusinessDays(clsDate DateFrom, clsDate DateTo)
    {
        short Days = 0;
        while (IsDate1BeforeDate2(DateFrom, DateTo))
        {
            if (IsBusinessDay(DateFrom))
                Days++;
            DateFrom = IncreaseDateByOneDay(DateFrom);
        }
        return Days;
    }

    static short CalculateVacationDays(clsDate DateFrom, clsDate DateTo)
    {
        return CalculateBusinessDays(DateFrom, DateTo);
    }

    static clsDate CalculateVacationReturnDate(clsDate DateFrom, short VacationDays)
    {
        short WeekEndCounter = 0;
        clsDate Current = DateFrom;
        for (short i = 1; i <= VacationDays; i++)
        {
            if (IsWeekEnd(Current))
                WeekEndCounter++;
            Current = IncreaseDateByOneDay(Current);
        }
        for (short i = 1; i <= WeekEndCounter; i++)
            Current = IncreaseDateByOneDay(Current);
        return Current;
    }

    static bool IsDate1AfterDate2(const clsDate& Date1, const clsDate& Date2)
    {
        return (!IsDate1BeforeDate2(Date1, Date2) && !IsDateEqual(Date1, Date2));
    }

    bool IsDateAfterDate2(const clsDate& Date2) const
    {
        return IsDate1AfterDate2(*this, Date2);
    }

    static enDateCompare CompareDates(const clsDate& Date1, const clsDate& Date2)
    {
        if (IsDate1BeforeDate2(Date1, Date2))
            return enDateCompare::Before;
        if (IsDateEqual(Date1, Date2))
            return enDateCompare::Equal;
        return enDateCompare::After;
    }

    enDateCompare CompareDates(const clsDate& Date2) const
    {
        return CompareDates(*this, Date2);
    }

    static bool IsValidDate(clsDate InputDate)
    {
        if (InputDate._Month < 1 || InputDate._Month > 12)
            return false;
        if (InputDate._Day < 1 || InputDate._Day > GetNumberOfDaysInMonth(InputDate._Year, InputDate._Month))
            return false;
        return true;
    }
};