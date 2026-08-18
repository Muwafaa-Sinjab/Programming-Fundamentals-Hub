#pragma once
#include <iostream>
#include <iomanip>
#include "../Shared/clsScreen.h"
#include "../../Core/clsBankClient.h"

class clsTransferLogScreen : protected clsScreen
{
private:
   static void _PrintTransferLogRecord(clsBankClient::stTransferLogRecord TransferLogData)
    {
        cout << setw(8) << left << ""
            << "| " << setw(23) << left << TransferLogData.DateTime;
        cout << "| " << setw(8)  << left << TransferLogData.SourceAccountNumber;
        cout << "| " << setw(8)  << left << TransferLogData.DestinationAccountNumber;
        cout << "| " << setw(8)  << left << TransferLogData.Amount;
        cout << "| " << setw(10) << left << TransferLogData.SourceBalance;
        cout << "| " << setw(10) << left << TransferLogData.DestinationBalance;
        cout << "| " << setw(8)  << left << TransferLogData.UserName;
    }

public:

    static void ShowTransferLogList()
    {   
        vector <clsBankClient::stTransferLogRecord> vTransferLogRecord = clsBankClient::GetTransferLogList();

        string Title = "Transfer Log Screen";
        string SubTitle = "  (" + to_string(vTransferLogRecord.size()) + ") Record(s).";

        _DrawScreenHeader(Title, SubTitle);

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;

        cout << setw(8) << left << "" << "| " << setw(23) << left << "Date/Time";
        cout << "| " << setw(8)  << left << "S.Acct";
        cout << "| " << setw(8)  << left << "D.Acct";
        cout << "| " << setw(8)  << left << "Amount";
        cout << "| " << setw(10) << left << "S.Balance";
        cout << "| " << setw(10) << left << "D.Balance";
        cout << "| " << setw(8)  << left << "User" << endl;

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;

        if (vTransferLogRecord.empty())
            cout << "\t\t\t\tNo Transfer Logs Available.";
        else

            for (clsBankClient::stTransferLogRecord Record : vTransferLogRecord)
            {

                _PrintTransferLogRecord(Record);
                cout << endl;
            }

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "______________________________________________\n" << endl;
    }

};