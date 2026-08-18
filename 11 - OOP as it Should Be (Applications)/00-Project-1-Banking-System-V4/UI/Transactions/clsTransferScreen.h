#pragma once
#include <iostream>
#include <iomanip>
#include "../Shared/clsScreen.h"
#include "../../Core/clsBankClient.h"
#include "../../Utilities/clsInputValidate.h"


class clsTransferScreen : protected clsScreen
{
private:

    static void _PrintClientCard(clsBankClient Client)
    {
        cout << "\n" << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "                Client Card                \n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "  Full Name   : " << Client.FullName() << "\n";
        cout << setw(37) << left << "" << "  Acc. Number : " << Client.AccountNumber() << "\n";
        cout << setw(37) << left << "" << "  Balance     : " << Client.AccountBalance() << "\n";
        cout << setw(37) << left << "" << "===========================================\n";
    }

    static string _ReadAccountNumber(string Message)
    {
        string AccountNumber;

        cout << "\n" << setw(37) << left << "" << Message;
        AccountNumber = clsInputValidate::ReadString();

        while (!clsBankClient::IsClientExist(AccountNumber))
        {
            cout << setw(37) << left << "" << "Account Number Is Not Found, Choose Another: ";
            AccountNumber = clsInputValidate::ReadString();
        }

        return AccountNumber;
    }

    static float _ReadTransferAmount(clsBankClient SourceClient)
    {
        float Amount;

        cout << "\n" << setw(37) << left << "" << "Enter Transfer Amount: ";

        Amount = clsInputValidate::ReadFloatNumber("\nWrong Input Please Enter Correct One");

        while (Amount <= 0 || Amount > SourceClient.AccountBalance())
        {
            cout << setw(37) << left << ""
                 << "Amount exceeds the available balance or is invalid, Enter another Amount: ";

            Amount = clsInputValidate::ReadFloatNumber("\nWrong Input Please Enter Correct One");
        }

        return Amount;
    }

public:

    static void ShowTransfer()
    {
        _DrawScreenHeader("Transfer Screen");

        clsBankClient SourceClient =
            clsBankClient::Find(_ReadAccountNumber("Please Enter Account Number To Transfer From: "));

        _PrintClientCard(SourceClient);

        string DestinationAccount;

        do
        {
            DestinationAccount =
                _ReadAccountNumber("Please Enter Account Number To Transfer To: ");

            if (DestinationAccount == SourceClient.AccountNumber())
            {
                cout << setw(37) << left << ""
                     << "You Cannot Transfer To The Same Account.\n";
            }

        } while (DestinationAccount == SourceClient.AccountNumber());

        clsBankClient DestinationClient =
            clsBankClient::Find(DestinationAccount);

        _PrintClientCard(DestinationClient);

        float Amount = _ReadTransferAmount(SourceClient);

        cout << "\n" << setw(37) << left << ""
             << "Are you sure you want to perform this operation? y/n: ";

        char Answer = clsInputValidate::ReadChar();

        if (Answer == 'Y' || Answer == 'y')
        {
            if (SourceClient.Transfer(Amount, DestinationClient, CurrentUser.UserName()))
            {
                cout << "\n" << setw(37) << left << ""
                     << "Transfer Done Successfully.\n";
            }
            else
            {
                cout << "\n" << setw(37) << left << ""
                     << "Transfer Failed.\n";
            }

            _PrintClientCard(SourceClient);
            _PrintClientCard(DestinationClient);
        }
        else
        {
            cout << "\n" << setw(37) << left << ""
                 << "Operation was cancelled.\n";
        }
    }
};