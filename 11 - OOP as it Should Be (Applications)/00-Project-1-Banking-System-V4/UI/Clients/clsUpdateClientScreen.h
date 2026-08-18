#pragma once
#include <iostream>
#include <iomanip>
#include "../Shared/clsScreen.h"
#include "../../Core/clsBankClient.h"
#include "../../Utilities/clsInputValidate.h"

using namespace std;

class clsUpdateClientScreen : protected clsScreen
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

    static void ReadClientInfo(clsBankClient &Client)
    {
        cout << setw(37) << left << "" << "Enter First Name: ";
        Client.SetFirstName(clsInputValidate::ReadString());

        cout << setw(37) << left << "" << "Enter Last Name: ";
        Client.SetLastName(clsInputValidate::ReadString());

        cout << setw(37) << left << "" << "Enter Email: ";
        Client.SetEmail(clsInputValidate::ReadString());

        cout << setw(37) << left << "" << "Enter Phone: ";
        Client.SetPhoneNumber(clsInputValidate::ReadString());

        cout << setw(37) << left << "" << "Enter PinCode: ";
        Client.SetPinCode(clsInputValidate::ReadString());

        cout << setw(37) << left << "" << "Enter Account Balance: ";
        Client.SetAccountBalance(clsInputValidate::ReadFloatNumber("\n" + string(37, ' ') + "Invalid input, please enter a valid number: "));
    }

public:
    static void ShowUpdateClientScreen()
    {
        if(!CheckAccessRight(clsUser::enPermissions::pUpdateClients))
        {
            return;
        }

        _DrawScreenHeader("Update Client Screen");

        string AccountNumber = "";

        cout << setw(37) << left << "" << "Please Enter Account Number: ";
        AccountNumber = clsInputValidate::ReadString();

        while (!clsBankClient::IsClientExist(AccountNumber))
        {
            cout << setw(37) << left << "" << "Account Number Is Not Found, Choose Another: ";
            AccountNumber = clsInputValidate::ReadString();
        }

        clsBankClient Client = clsBankClient::Find(AccountNumber);
        _PrintClientCard(Client);

        cout << "\n" << setw(37) << left << "" << "Are you sure you want to update this client Y/N? ";

        string Answer;
        Answer = clsInputValidate::ReadString();

        if (Answer == "Y" || Answer == "y")
        {
            cout << "\n" << setw(37) << left << "" << "===========================================\n";
            cout << setw(37) << left << "" << "            Update Client Info             \n";
            cout << setw(37) << left << "" << "===========================================\n";

            ReadClientInfo(Client);

            clsBankClient::enSaveResult SaveResult;
            SaveResult = Client.Save();

            switch (SaveResult)
            {
            case clsBankClient::enSaveResult::svSucceded:
            {
                cout << "\n" << setw(37) << left << "" << "Account Updated Successfully :-)\n";
                _PrintClientCard(Client);
                break;
            }
            case clsBankClient::enSaveResult::svFaildEmptyObject:
            {
                cout << "\n" << setw(37) << left << "" << "Error: Account was not saved because it's empty.\n";
                break;
            }
                default:
                break;
            }
        }
    }
};