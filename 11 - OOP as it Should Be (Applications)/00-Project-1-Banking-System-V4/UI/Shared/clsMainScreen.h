#pragma once
#include <iostream>
#include <iomanip>
#include <limits>
#include "clsScreen.h"
#include "../Clients/clsClientListScreen.h"
#include "../Clients/clsAddNewClientScreen.h"
#include "../Clients/clsDeleteClientScreen.h"
#include "../Clients/clsUpdateClientScreen.h"
#include "../Clients/clsFindClientScreen.h"
#include "../Transactions/clsTransactionsScreen.h"
#include "../Users/clsManageUsersScreen.h"
#include "../../Utilities/clsInputValidate.h"
#include "../../Global.h"
#include "../Users/clsLogInRegisterListScreen.h"
#include "../Currency/clsCurrencyExchangeScreen.h"
using namespace std;

class clsMainSreen : protected clsScreen
{
private:
    enum _enMainMenueOptions {eListClients = 1, eAddNewClient = 2, eDeleteClient = 3,
            eUpdateClient = 4, eFindClient = 5, eShowTransactionsMenue = 6,
            eManageUsers = 7, eLogInRegister = 8, eCurrencyExchange = 9, eExit = 10};
    
    static short _ReadMainMenueOption()
    {
        cout << setw(37) << left << "" << "Choose what do you want to do? [1 to 10]: ";
        short Choice = clsInputValidate::ReadShortNumberBetween(1, 10, 
                                        "\n" + string(37, ' ') + "Invalid input, please enter a number between 1 and 10: ");
        return Choice;
    }

    static void _GoBackToMainMenue()
    {
        cout << setw(37) << left << "" << "\n  Press any key to go back to Main Menue...\n";   
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
        ShowMainMenue();
    }

    static void _ShowAllClientsScreen()
    {
        clsClientListScreen::ShowClientsList();
    }

    static void _ShowAddNewClientsScreen()
    {
        clsAddNewClientScreen::ShowAddNewClientScreen();
    }

    static void _ShowDeleteClientScreen()
    {
        clsDeleteClientScreen::ShowDeleteClientScreen();
    }

    static void _ShowUpdateClientScreen()
    {
        clsUpdateClientScreen::ShowUpdateClientScreen();
    }

    static void _ShowFindClientScreen()
    {
        clsFindClientScreen::ShowFindClientScreen();
    }

    static void _ShowTransactionsMenue()
    {
        clsTransactionsScreen::ShowTransactionsMenue();
    }

    static void _ShowManageUsersMenue()
    {
        clsManageUsersScreen::ShowManageUsersMenue();
    }

    static void _ShowLogInRegisterList()
    {
       clsLogInRegisterListScreen::ShowLogInRegisterList();
    }

    static void _ShowCurrencyExchangeMenu()
    {
       clsCurrencyExchangeScreen::ShowCurrencyExchangeMenu();
    }

    static void _Logout()
    {
        CurrentUser = clsUser::Find("","");
    }

    static void _PerfromMainMenueOption(_enMainMenueOptions MainMenueOption)
    {
        switch (MainMenueOption)
        {
        case eListClients:
            system("clear");
            _ShowAllClientsScreen();
            _GoBackToMainMenue();
            break;

        case eAddNewClient:
            system("clear");
            _ShowAddNewClientsScreen();
            _GoBackToMainMenue();
            break;

        case eDeleteClient:
            system("clear");
            _ShowDeleteClientScreen();
            _GoBackToMainMenue();
            break;

        case eUpdateClient:
            system("clear");
            _ShowUpdateClientScreen();
            _GoBackToMainMenue();
            break;

        case eFindClient:
            system("clear");
            _ShowFindClientScreen();
            _GoBackToMainMenue();
            break;

        case eShowTransactionsMenue:
            system("clear");
            _ShowTransactionsMenue();
            _GoBackToMainMenue();
            break;

        case eManageUsers:
            system("clear");
            _ShowManageUsersMenue();
            break;

        case eLogInRegister:
            system("clear");
            _ShowLogInRegisterList();
            _GoBackToMainMenue();
            break;

        case eCurrencyExchange:
            system("clear");
            _ShowCurrencyExchangeMenu();
            _GoBackToMainMenue();
            break;

        case eExit:
            system("clear");
            _Logout();
            return;
        }
    }

public:
    static void ShowMainMenue()
    {
        system("clear");
        _DrawScreenHeader("Main Screen");

        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "                Main Menue                 \n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "  [1] Show Client List.\n";
        cout << setw(37) << left << "" << "  [2] Add New Client.\n";
        cout << setw(37) << left << "" << "  [3] Delete Client.\n";
        cout << setw(37) << left << "" << "  [4] Update Client Info.\n";
        cout << setw(37) << left << "" << "  [5] Find Client.\n";
        cout << setw(37) << left << "" << "  [6] Transactions.\n";
        cout << setw(37) << left << "" << "  [7] Manage Users.\n";
        cout << setw(37) << left << "" << "  [8] Login Register.\n";
        cout << setw(37) << left << "" << "  [9] Currency Exchange.\n";
        cout << setw(37) << left << "" << "  [10] Logout.\n";
        cout << setw(37) << left << "" << "===========================================\n";
        
        _PerfromMainMenueOption((_enMainMenueOptions)_ReadMainMenueOption());
    }
};