#pragma once
#include <iostream>
#include <iomanip>
#include "../Shared/clsScreen.h"
#include "../../Core/clsCurrency.h"
#include "../../Utilities/clsInputValidate.h"

class clsUpdateRateScreen : protected clsScreen
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

    static void _ShowResults(clsCurrency Currency)
    {
        if (!Currency.IsEmpty())
        {
            cout << "\n" << setw(37) << left << "" << "Currency Updated Successfully :)\n";
            _PrintCurrencyCard(Currency);
        }
        else
        {
            cout << "\n" << setw(37) << left << "" << "Currency Was Not Found :-(\n";
        }
    }

    static void _VerifyCurrencyUpdate(clsCurrency Currency)
    {
        cout << "\n" << setw(37) << left << "" << "Are You sure you want to update this rate";
        cout << "\n" << setw(37) << left << "" << "of this Currency Y/N: ";

        char Ans;
        Ans = clsInputValidate::ReadChar();

        if(Ans == 'Y' || Ans == 'y')
        {
            cout << "\n" << setw(37) << left << "" << "Update Currency Rate.." << endl;
            cout << setw(37) << left << "" << "=====================" << endl;
            cout << setw(37) << left << "" << "Enter New Rate: ";

            float NewRate = clsInputValidate::ReadFloatNumber(
                "\n" + string(37, ' ') + "Invalid input! Please enter a number: "
            );

            Currency.UpdateRate(NewRate);
            _ShowResults(Currency);
        }
        else
        {
            cout << "\n" << setw(37) << left << "" << "Operation Has Been Canceled :(..\n";
        }
    }

public:

    static void ShowUpdateRateScreen()
    {
        _DrawScreenHeader("Update Rate Screen");

        string CurrencyCode = "";

        cout << "\n" << setw(37) << left << "" << "Please Enter Currency Code : ";
        CurrencyCode = clsInputValidate::ReadString();
        while (!clsCurrency::IsCurrencyExist(CurrencyCode))
        {
            cout << "\n" << setw(37) << left << "" << "Currency is not found, choose another one: ";
            CurrencyCode = clsInputValidate::ReadString();
        }
        clsCurrency Currency = clsCurrency::FindByCode(CurrencyCode);
        _PrintCurrencyCard(Currency);
        _VerifyCurrencyUpdate(Currency);
    }
};