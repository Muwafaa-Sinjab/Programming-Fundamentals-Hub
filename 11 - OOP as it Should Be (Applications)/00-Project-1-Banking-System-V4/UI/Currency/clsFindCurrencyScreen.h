#pragma once
#include <iostream>
#include <iomanip>
#include "../Shared/clsScreen.h"
#include "../../Core/clsCurrency.h"
#include "../../Utilities/clsInputValidate.h"

class clsFindCurrencyScreen : protected clsScreen
{
private:

    static void _PrintCurrencyCard(clsCurrency Currency)
    {
        cout << "\n" << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "                Currency Card                \n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "  Country: "  << Currency.Country() << "\n";
        cout << setw(37) << left << "" << "  Code: "     << Currency.CurrencyCode() << "\n";
        cout << setw(37) << left << "" << "  Name: "     << Currency.CurrencyName() << "\n";
        cout << setw(37) << left << "" << "  Rate(1$): " << Currency.Rate() << "\n";
        cout << setw(37) << left << "" << "===========================================\n";
    }

    static short ReadSearchType()
    {   
        short Ans = 0;
        cout << "\n" << setw(37) << left << "" << "Find By: [1] Code or [2] Country: ";
        Ans = clsInputValidate::ReadShortNumber(string(37, ' ') + "Invalid input! Please enter a number: ");
        while (Ans > 2 || Ans < 1)
        {
            cout << "\n" << setw(37) << left << "" << "Invalid Choice! Please enter 1 or 2: ";
            Ans = clsInputValidate::ReadShortNumber(string(37, ' ') + "Invalid input! Please enter a number: ");
        }
        return Ans;
    }

    static void _ShowResults(clsCurrency Currency)
    {
        if (!Currency.IsEmpty())
        {
            cout << "\n" << setw(37) << left << "" << "Currency Found :)\n";
            _PrintCurrencyCard(Currency);
        }
        else
        {
            cout << "\n" << setw(37) << left << "" << "Currency Was not Found :-(\n";
        }
    }
    
public:

    static void ShowFindCurrencyScreen()
    {
        _DrawScreenHeader("Find Currency Screen");
        short SearchType = ReadSearchType();
        string Input = "";

        if (SearchType == 1)
        {
            cout << "\n" << setw(37) << left << ""
                << "Please Enter Currency Code : ";

            Input = clsInputValidate::ReadString();

            clsCurrency CurrencyType = clsCurrency::FindByCode(Input);

            _ShowResults(CurrencyType);
        }
        else
        {
            cout << "\n" << setw(37) << left << ""
                << "Please Enter Country Name : ";

            Input = clsInputValidate::ReadString();

            clsCurrency CurrencyType = clsCurrency::FindByCountry(Input);

            _ShowResults(CurrencyType);
        }
  
    }
};