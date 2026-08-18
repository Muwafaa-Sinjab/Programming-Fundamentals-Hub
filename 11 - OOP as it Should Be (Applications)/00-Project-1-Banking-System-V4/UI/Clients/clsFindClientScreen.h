#pragma once
#include <iostream>
#include <iomanip>
#include "../Shared/clsScreen.h"
#include "../../Core/clsBankClient.h"
#include "../../Utilities/clsInputValidate.h"

using namespace std;

class clsFindClientScreen : protected clsScreen
{
private:
    static void _PrintClientCard(clsBankClient Client)
    {
        cout << "\n" << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "                Client Card                \n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "  Acc. Number : " << Client.AccountNumber() << "\n";
        cout << setw(37) << left << "" << "  First Name  : " << Client.FirstName() << "\n";
        cout << setw(37) << left << "" << "  Last Name   : " << Client.LastName() << "\n";
        cout << setw(37) << left << "" << "  Full Name   : " << Client.FullName() << "\n";
        cout << setw(37) << left << "" << "  Email       : " << Client.Email() << "\n";
        cout << setw(37) << left << "" << "  Phone       : " << Client.PhoneNumber() << "\n";
        cout << setw(37) << left << "" << "  Pin Code    : " << Client.PinCode() << "\n";
        cout << setw(37) << left << "" << "  Balance     : " << Client.AccountBalance() << "\n";
        cout << setw(37) << left << "" << "===========================================\n";
    }

public:
    static void ShowFindClientScreen()
    {
        if(!CheckAccessRight(clsUser::enPermissions::pFindClient))
        {
            return;
        }
        
        _DrawScreenHeader("Find Client Screen");

        string AccountNumber = "";

        cout << setw(37) << left << "" << "Please Enter Account Number: ";
        AccountNumber = clsInputValidate::ReadString();

        while (!clsBankClient::IsClientExist(AccountNumber))
        {
            cout << setw(37) << left << "" << "Account Number Is Not Found, Choose Another: ";
            AccountNumber = clsInputValidate::ReadString();
        }

        clsBankClient Client = clsBankClient::Find(AccountNumber);

        if (!Client.IsEmpty())
        {
            cout << "\n" << setw(37) << left << "" << "Client Found :-)\n";
        }
        else
        {
            cout << "\n" << setw(37) << left << "" << "Client Was Not Found :-(\n";
        }

        _PrintClientCard(Client);
    }
};