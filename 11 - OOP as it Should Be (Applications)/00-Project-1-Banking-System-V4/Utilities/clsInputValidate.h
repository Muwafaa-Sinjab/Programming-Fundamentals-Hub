#pragma once
#include <iostream>
#include <limits>
#include "clsDate.h"
using namespace std;

class clsInputValidate
{
public:

    static bool IsNumberBetween(double Number, double From, double To)
    {
        return (Number >= From && Number <= To);
    }

    static bool IsNumberBetween(float Number, float From, float To)
    {
        return (Number >= From && Number <= To);
    }

    static bool IsNumberBetween(int Number, int From, int To)
    {
        return (Number >= From && Number <= To);
    }

    static bool IsNumberBetween(short Number, short From, short To)
    {
        return (Number >= From && Number <= To);
    }

    static bool IsDateBetween(clsDate Date, clsDate DateFrom, clsDate DateTo)
    {
        if (clsDate::IsDate1BeforeDate2(DateTo, DateFrom))
        {
            clsDate::SwapDates(DateTo, DateFrom);
        }

        return !clsDate::IsDate1BeforeDate2(Date, DateFrom)
            && !clsDate::IsDate1BeforeDate2(DateTo, Date);
    }

    static double ReadDblNumber(string ErrorMessage)
    {
        double Number;

        while (!(cin >> Number))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << ErrorMessage << endl;
        }

        return Number;
    }

    static float ReadFloatNumber(string ErrorMessage)
    {
        float Number;

        while (!(cin >> Number))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << ErrorMessage << endl;
        }

        return Number;
    }

    static int ReadIntNumber(string ErrorMessage)
    {
        int Number;

        while (!(cin >> Number))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << ErrorMessage << endl;
        }

        return Number;
    }

    static short ReadShortNumber(string ErrorMessage)
    {
        short Number;

        while (!(cin >> Number))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << ErrorMessage << endl;
        }

        return Number;
    }

    static double ReadDblNumberBetween(double From, double To, string ErrorMessage)
    {
        double Number = ReadDblNumber(ErrorMessage);

        while (!IsNumberBetween(Number, From, To))
        {
            cout << ErrorMessage << endl;
            Number = ReadDblNumber(ErrorMessage);
        }

        return Number;
    }

    static float ReadFloatNumberBetween(float From, float To, string ErrorMessage)
    {
        float Number = ReadIntNumber(ErrorMessage);

        while (!IsNumberBetween(Number, From, To))
        {
            cout << ErrorMessage << endl;
            Number = ReadIntNumber(ErrorMessage);
        }

        return Number;
    }

    static int ReadIntNumberBetween(int From, int To, string ErrorMessage)
    {
        int Number = ReadIntNumber(ErrorMessage);

        while (!IsNumberBetween(Number, From, To))
        {
            cout << ErrorMessage << endl;
            Number = ReadIntNumber(ErrorMessage);
        }

        return Number;
    }

    static short ReadShortNumberBetween(short From, short To, string ErrorMessage)
    {
        short Number = ReadIntNumber(ErrorMessage);

        while (!IsNumberBetween(Number, From, To))
        {
            cout << ErrorMessage << endl;
            Number = ReadIntNumber(ErrorMessage);
        }

        return Number;
    }

    static string ReadString()
	{
		string  Text="";
		getline(cin >> ws, Text);
		return Text;
	}

    static char ReadChar()
    {
        char Character;
        cin >> ws >> Character;
        return Character;
    }

    static bool IsValidDate(clsDate Date)
    {
        return clsDate::IsValidDate(Date);
    }
};