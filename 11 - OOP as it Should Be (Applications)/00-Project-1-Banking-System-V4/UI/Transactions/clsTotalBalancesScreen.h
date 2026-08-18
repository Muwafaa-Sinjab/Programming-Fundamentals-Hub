#pragma once
#include <iostream>
#include <iomanip>
#include "../Shared/clsScreen.h"
#include "../../Core/clsBankClient.h"
#include "../../Utilities/clsUtil.h"

class clsTotalBalancesScreen : protected clsScreen
{
private:

    static void PrintClientRecordBalanceLine(clsBankClient Client)
    {
        cout << setw(25) << left << ""
             << "| " << setw(15) << left << Client.AccountNumber()
             << "| " << setw(40) << left << Client.FullName()
             << "| " << setw(12) << left << Client.AccountBalance();
    }

public:

    static void ShowTotalBalances()
    {
        vector<clsBankClient> vClients = clsBankClient::GetClientsList();

        string Title = "Balances List Screen";
        string SubTitle = "\t    (" + to_string(vClients.size()) + ") Client(s).";

        _DrawScreenHeader(Title, SubTitle);

        cout << setw(25) << left << ""
             << "_______________________________________________________________";
        cout << "______________________\n\n";

        cout << setw(25) << left << ""
             << "| " << setw(15) << left << "Account Number"
             << "| " << setw(40) << left << "Client Name"
             << "| " << setw(12) << left << "Balance" << endl;

        cout << setw(25) << left << ""
             << "_______________________________________________________________";
        cout << "______________________\n";

        if (vClients.empty())
        {
            cout << "\n\t\t\t\tNo Clients Available In The System!\n";
        }
        else
        {
            for (clsBankClient Client : vClients)
            {
                PrintClientRecordBalanceLine(Client);
                cout << endl;
            }
        }

        cout << setw(25) << left << ""
             << "_______________________________________________________________";
        cout << "______________________\n\n";

        double TotalBalances = clsBankClient::GetTotalBalances();

        cout << setw(25) << left << ""
             << "Total Balances = " << TotalBalances << endl;

        cout << setw(25) << left << ""
             << "(" << clsUtil::NumberToText(TotalBalances) << ")" << endl;
    }
};