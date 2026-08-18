#pragma once
#include <iostream>
#include <iomanip>
#include "../Shared/clsScreen.h"
#include "../../Core/clsCurrency.h"
#include "../../Utilities/clsInputValidate.h"

class clsCurrencyCalculatorScreen : protected clsScreen
{
private:

    static float _ReadAmount()
    {
        cout << "\n" << setw(37) << left << "" << "Enter Amount to Exchange: ";

        float Amount = 0;

        Amount = clsInputValidate::ReadFloatNumber(
            "\n" + string(37, ' ') + "Invalid input! Please enter a number: "
        );

        return Amount;
    }

    static clsCurrency _GetCurrency(string Message)
    {
        string CurrencyCode = "";

        cout << "\n" << setw(37) << left << "" << Message;

        CurrencyCode = clsInputValidate::ReadString();

        while(!clsCurrency::IsCurrencyExist(CurrencyCode))
        {
            cout << "\n" << setw(37) << left << ""
                 << "Currency is not found, choose another one: ";

            CurrencyCode = clsInputValidate::ReadString();
        }

        clsCurrency Currency = clsCurrency::FindByCode(CurrencyCode);

        return Currency;
    }

    static void _PrintCurrencyCard(clsCurrency Currency, string Title = "Currency Card:")
    {
        cout << "\n" << setw(37) << left << "" << Title << "\n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "  Country: " << Currency.Country() << "\n";
        cout << setw(37) << left << "" << "  Code: " << Currency.CurrencyCode() << "\n";
        cout << setw(37) << left << "" << "  Name: " << Currency.CurrencyName() << "\n";
        cout << setw(37) << left << "" << "  Rate(1$): " << Currency.Rate() << "\n";
        cout << setw(37) << left << "" << "===========================================\n";
    }

    static void _PrintCalculationsResults(float Amount, clsCurrency CurrencyFrom, clsCurrency CurrencyTo)
    {
        _PrintCurrencyCard(CurrencyFrom, "Convert From:");

        float AmountInUSD = CurrencyFrom.ConvertToUSD(Amount);

        cout << "\n" << setw(37) << left << ""
             << Amount << " " << CurrencyFrom.CurrencyCode()
             << " = " << AmountInUSD << " USD\n";

        if(CurrencyTo.CurrencyCode() == "USD")
        {
            return;
        }

        cout << "\n" << setw(37) << left << ""
             << "Converting from USD to:\n";

        _PrintCurrencyCard(CurrencyTo, "To:");

        float AmountInCurrencyTo =
            CurrencyFrom.ConvertToOtherCurrency(Amount, CurrencyTo);

        cout << "\n" << setw(37) << left << ""
             << Amount << " " << CurrencyFrom.CurrencyCode()
             << " = " << AmountInCurrencyTo << " "
             << CurrencyTo.CurrencyCode();
    }

public:

    static void ShowCurrencyCalculatorScreen()
    {
        char Continue = 'y';

        while(Continue == 'y' || Continue == 'Y')
        {
            system("clear");

            _DrawScreenHeader("Currency Calculator Screen");

            clsCurrency CurrencyFrom =
                _GetCurrency("Please Enter Currency From Code: ");

            clsCurrency CurrencyTo =
                _GetCurrency("Please Enter Currency To Code: ");

            float Amount = _ReadAmount();

            _PrintCalculationsResults(Amount, CurrencyFrom, CurrencyTo);

            cout << "\n\n" << setw(37) << left << ""
                 << "Do you want to perform another calculation? y/n ? ";

            cin >> Continue;
        }
    }
};