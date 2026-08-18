#pragma once
#include <iostream>
#include <iomanip>
#include <limits>
#include "../Shared/clsScreen.h"
#include "../../Core/clsCurrency.h"
#include "../../Utilities/clsInputValidate.h"
#include "../../Core/clsUser.h"
#include "clsCurrenciesListScreen.h"
#include "clsFindCurrencyScreen.h"
#include "clsUpdateRateScreen.h"
#include "clsCurrencyCalculatorScreen.h"

class clsCurrencyExchangeScreen : protected clsScreen
{
private:

    enum enCurrencyExchangeMenuOptions {
        eListCurrencies = 1,
        eFindCurrency = 2,
        eUpdateRate = 3,
        eCurrencyCalculator = 4,
        eMainMenu = 5
    };

    static short ReadCurrencyExchangeMenuOption()
    {
        cout << setw(37) << left << "" << "Choose what do you want to do? [1 to 5]? ";
        short Choice = clsInputValidate::ReadShortNumberBetween(1, 5, "\n" + string(37, ' ') + "Enter Number between 1 to 5? ");
        return Choice;
    }

    static void _GoBackToCurrencyExchangeMenu()
    {
        cout << "\n\nPress any key to go back to Currency Exchange Menu...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
        ShowCurrencyExchangeMenu();
    }

    static void _ShowListCurrenciesScreen()
    {
        clsCurrenciesListScreen::ShowCurrenciesListScreen();
    }

    static void _ShowFindCurrencyScreen()
    {
        clsFindCurrencyScreen::ShowFindCurrencyScreen();
    }

    static void _ShowUpdateRateScreen()
    {
        clsUpdateRateScreen::ShowUpdateRateScreen();
    }

    static void _ShowCurrencyCalculatorScreen()
    {
        clsCurrencyCalculatorScreen::ShowCurrencyCalculatorScreen();
    }


    static void _PerformCurrencyExchangeMenuOption(enCurrencyExchangeMenuOptions CurrencyExchangeMenuOption)
    {
        switch (CurrencyExchangeMenuOption)
        {
            case enCurrencyExchangeMenuOptions::eListCurrencies:
            {
                system("clear");
                _ShowListCurrenciesScreen();
                _GoBackToCurrencyExchangeMenu();
                break;
            }

            case enCurrencyExchangeMenuOptions::eFindCurrency:
            {
                system("clear");
                _ShowFindCurrencyScreen();
                _GoBackToCurrencyExchangeMenu();
                break;
            }

            case enCurrencyExchangeMenuOptions::eUpdateRate:
            {
                system("clear");
                _ShowUpdateRateScreen();
                _GoBackToCurrencyExchangeMenu();
                break;
            }

            case enCurrencyExchangeMenuOptions::eCurrencyCalculator:
            {
                system("clear");
                _ShowCurrencyCalculatorScreen();
                _GoBackToCurrencyExchangeMenu();
                break;
            }

            case enCurrencyExchangeMenuOptions::eMainMenu:
            {
                // Do nothing here, the main screen will handle it :-)
            }
        }
    }

public:

    static void ShowCurrencyExchangeMenu()
    {
        if (!CheckAccessRight(clsUser::enPermissions::pCurrencyExchange))
        {
            return;
        }

        system("clear");
        _DrawScreenHeader("Currency Exchange Screen");

        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\tCurrency Exchange Menu\n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t[1] List Currencies.\n";
        cout << setw(37) << left << "" << "\t[2] Find Currency.\n";
        cout << setw(37) << left << "" << "\t[3] Update Rate.\n";
        cout << setw(37) << left << "" << "\t[4] Currency Calculator.\n";
        cout << setw(37) << left << "" << "\t[5] Main Menu.\n";
        cout << setw(37) << left << "" << "===========================================\n";

        _PerformCurrencyExchangeMenuOption((enCurrencyExchangeMenuOptions)ReadCurrencyExchangeMenuOption()
        );
    }

};