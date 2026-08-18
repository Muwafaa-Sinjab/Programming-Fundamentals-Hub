#pragma once
#include <iostream>
#include <iomanip>
#include "../Shared/clsScreen.h"
#include "../../Core/clsBankClient.h"
#include "../../Utilities/clsInputValidate.h"

using namespace std;

class clsDeleteClientScreen : protected clsScreen
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
    static void ShowDeleteClientScreen()
    {
        if(!CheckAccessRight(clsUser::enPermissions::pDeleteClient))
        {
            return;
        }

        _DrawScreenHeader("Delete Client Screen");

        string AccountNumber = "";

        cout << setw(37) << left << "" << "Please Enter Account Number: ";
        AccountNumber = clsInputValidate::ReadString();

        while (!clsBankClient::IsClientExist(AccountNumber))
        {
            cout << setw(37) << left << "" << "Account Number Is Not Found, Choose Another: ";
            AccountNumber = clsInputValidate::ReadString();
        }

        clsBankClient ClientToDelete = clsBankClient::Find(AccountNumber);
        _PrintClientCard(ClientToDelete);

        cout << "\n" << setw(37) << left << "" << "Are you sure you want to delete this client Y/N? ";
        
        string Answer;
        Answer = clsInputValidate::ReadString();

        if (Answer == "Y" || Answer == "y")
        {
            if (ClientToDelete.DeleteClient())
            {
                cout << "\n" << setw(37) << left << "" << "Client Deleted Successfully :-)\n";
                _PrintClientCard(ClientToDelete);
            }
            else
            {
                cout << "\n" << setw(37) << left << "" << "Error: Client Was Not Deleted\n";
            }
        }
    }
};