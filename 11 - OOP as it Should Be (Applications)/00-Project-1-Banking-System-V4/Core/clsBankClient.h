#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "clsPerson.h"
#include "../Utilities/clsInputValidate.h"
using namespace std;

class clsBankClient : public clsPerson
{
private:
    enum enMode {EmptyMode = 0, UpdateMode = 1, AddNewMode = 2};
    enMode _Mode;

    string _AccountNumber;
    string _PinCode;
    float  _AccountBalance;
    bool   _MarkForDelete = false;

    static clsBankClient _ConvertLineToClientObject(string line, string Seperator = "#//#")
    {
        vector<string> vClientData;
        vClientData = clsString::Split(line, Seperator);

        return clsBankClient(enMode::UpdateMode, vClientData[0], vClientData[1], vClientData[2], vClientData[3],
                                    vClientData[4], vClientData[5], stod(vClientData[6]));
    }

    static clsBankClient _GetEmptyClientObject()
    {
        return clsBankClient(enMode::EmptyMode, "", "", "", "", "", "", 0);
    }

    static vector<clsBankClient> _loadClientsDateFromFile()
    {
        fstream myFile;
        vector<clsBankClient> vFileContent;

        myFile.open("../Data/ClientsData.txt", ios::in);
        if (myFile.is_open())
        {
            string line;
            while (getline(myFile, line))
            {
                clsBankClient Client = _ConvertLineToClientObject(line);
                vFileContent.push_back(Client);
            }
            myFile.close();
        }
        return vFileContent;
    }

    static string _ConvertClientObjectToLine(clsBankClient Client, string Seperator = "#//#")
    {
        string stClientRecord = "";
        stClientRecord += Client.FirstName() + Seperator;
        stClientRecord += Client.LastName() + Seperator;
        stClientRecord += Client.Email() + Seperator;
        stClientRecord += Client.PhoneNumber() + Seperator;
        stClientRecord += Client.AccountNumber() + Seperator;
        stClientRecord += Client.PinCode() + Seperator;
        stClientRecord += to_string(Client.AccountBalance()) + Seperator;
        return stClientRecord;
    }

    static void _SaveClientsDataToFile(vector<clsBankClient> vClients)
    {
        fstream myFile;
        string DataLine;
        myFile.open("../Data/ClientsData.txt", ios::out);
        if (myFile.is_open())
        {
            for (clsBankClient &C : vClients)
            {
                if(C._MarkForDelete == false)
                {
                    DataLine = _ConvertClientObjectToLine(C);
                    myFile << DataLine << endl;
                }
            }
            myFile.close();
        }
    }

    static void _AddClientDataLineToFile(string DataLine)
    {
        fstream myFile;
        myFile.open("../Data/ClientsData.txt", ios::out | ios::app);
        if (myFile.is_open())
        {
            myFile << DataLine << endl;
            myFile.close();
        }
    }

    string _PrepareTransferLogInRecord(float Amount, clsBankClient DestinationClient, string Username, string Seperator = "#//#")
    {
        string Record = "";
        Record += clsDate::GetSystemDataTimeString() + Seperator;
        Record += AccountNumber() + Seperator;
        Record += DestinationClient.AccountNumber() + Seperator;
        Record += to_string(Amount) + Seperator;
        Record += to_string(AccountBalance()) + Seperator;
        Record += to_string(DestinationClient.AccountBalance()) + Seperator;
        Record += Username;
        return Record;
    }

    void _RegisterTransferLog(float Amount, clsBankClient DestinationClient, string Username)
    {
        string stDataLine = _PrepareTransferLogInRecord(Amount, DestinationClient, Username);
        fstream MyFile;
        MyFile.open("../Data/RegisterTransferLogin.txt", ios::out | ios::app);

        if (MyFile.is_open())
        {
            MyFile << stDataLine << endl;
            MyFile.close();
        }
    }

public:
    clsBankClient(enMode Mode, string FirstName, string LastName, string Email, string PhoneNumber, string AccountNumber,
                    string PinCode, float AccountBalance) : clsPerson(FirstName, LastName, Email, PhoneNumber)
    {
        _Mode = Mode;
        _AccountNumber = AccountNumber;
        _PinCode = PinCode;
        _AccountBalance = AccountBalance;
    }

    struct stTransferLogRecord
    {
        string DateTime;
        string SourceAccountNumber;
        string DestinationAccountNumber;
        string Amount;
        string SourceBalance;
        string DestinationBalance;
        string UserName;
    };

private:

    static stTransferLogRecord _ConvertLineToTransferLogRecord(string Line, string Separator = "#//#")
    {
        stTransferLogRecord TransferLogRecord;

        vector<string> vRecordData = clsString::Split(Line, Separator);

        TransferLogRecord.DateTime                 = vRecordData[0];
        TransferLogRecord.SourceAccountNumber      = vRecordData[1];
        TransferLogRecord.DestinationAccountNumber = vRecordData[2];
        TransferLogRecord.Amount                   = vRecordData[3];
        TransferLogRecord.SourceBalance            = vRecordData[4];
        TransferLogRecord.DestinationBalance       = vRecordData[5];
        TransferLogRecord.UserName                 = vRecordData[6];

        return TransferLogRecord;
    }

    static vector<stTransferLogRecord> _LoadTransferLogDataFromFile()
    {
        fstream MyFile;
        vector<stTransferLogRecord> vTransferLogRecords;

        MyFile.open("../Data/RegisterTransferLogin.txt", ios::in);

        if (MyFile.is_open())
        {
            string Line;

            while (getline(MyFile, Line))
            {
                stTransferLogRecord TransferLogRecord =
                    _ConvertLineToTransferLogRecord(Line);

                vTransferLogRecords.push_back(TransferLogRecord);
            }

            MyFile.close();
        }

        return vTransferLogRecords;
    }
public:

    string AccountNumber()
    {
        return _AccountNumber;
    }

    void SetPinCode(string PinCode)
    {
        _PinCode = PinCode;
    }

    string PinCode()
    {
        return _PinCode;
    }

    void SetAccountBalance(float AccountBalance)
    {
        _AccountBalance = AccountBalance;
    }

    float AccountBalance()
    {
        return _AccountBalance;
    }

    bool IsEmpty()
    {
        return (_Mode == enMode::EmptyMode);
    }

    void Print()
    {
        cout << "\nClient Card:";
        cout << "\n___________________";
        cout << "\nFirstName   : " << FirstName();
        cout << "\nLastName    : " << LastName();
        cout << "\nFull Name   : " << FullName();
        cout << "\nEmail       : " << Email();
        cout << "\nPhone       : " << PhoneNumber();
        cout << "\nAcc. Number : " << _AccountNumber;
        cout << "\nPinCode     : " << _PinCode;
        cout << "\nBalance     : " << _AccountBalance;
        cout << "\n___________________\n";
    }

    static vector <stTransferLogRecord> GetTransferLogList()
    {
        return _LoadTransferLogDataFromFile();
    }

    static clsBankClient GetNewClientObject(string AccountNumber)
    {
        return clsBankClient(enMode::AddNewMode, "", "", "", "", AccountNumber, "", 0);
    }

    static clsBankClient Find(string AccountNumber)
    {
        fstream myFile;
        myFile.open("../Data/ClientsData.txt", ios::in);

        if (myFile.is_open())
        {
            string line;
            while (getline(myFile, line))
            {
                clsBankClient Client = _ConvertLineToClientObject(line);

                if(AccountNumber == Client._AccountNumber)
                {
                    myFile.close();
                    return Client;
                }
            }
            myFile.close();
        }
        return _GetEmptyClientObject();
    }

    static clsBankClient Find(string AccountNumber, string PinCode)
    {
        fstream myFile;
        myFile.open("../Data/ClientsData.txt", ios::in);

        if (myFile.is_open())
        {
            string line;
            while (getline(myFile, line))
            {
                clsBankClient Client = _ConvertLineToClientObject(line);

                if(AccountNumber == Client.AccountNumber() && PinCode == Client.PinCode())
                {
                    myFile.close();
                    return Client;
                }
            }
            myFile.close();
        }
        return _GetEmptyClientObject();
    }

    static bool IsClientExist(string AccountNumber)
    {
        clsBankClient Client = clsBankClient::Find(AccountNumber);
        return (!Client.IsEmpty());
    }

    void Update()
    {
        vector<clsBankClient> vClients;
        vClients = _loadClientsDateFromFile();

        for(clsBankClient &C : vClients)
        {
            if(C.AccountNumber() == AccountNumber())
            {
                C = *this;
                break;
            }
        }
        _SaveClientsDataToFile(vClients);
    }

    void AddNewClient()
    {
        _AddClientDataLineToFile(_ConvertClientObjectToLine(*this));
    }

    bool DeleteClient()
    {
        vector<clsBankClient> vClients;
        vClients = _loadClientsDateFromFile();

        for(clsBankClient &C : vClients)
        {
            if(C.AccountNumber() == _AccountNumber)
            {
                C._MarkForDelete = true;
                break;
            }
        }

        _SaveClientsDataToFile(vClients);

        *this = _GetEmptyClientObject();

        return true;
    }

    static vector <clsBankClient> GetClientsList()
    {
        return _loadClientsDateFromFile();
    }

    static double GetTotalBalances()
    {   
        vector <clsBankClient> vClients = GetClientsList();
        double TotalBalances = 0;
        for (clsBankClient &Client : vClients)
        {
            TotalBalances += Client.AccountBalance();
        }
        return TotalBalances;
    }

    void Deposit(float DepositAmmount)
    {
        _AccountBalance += DepositAmmount;
        Save();
    }

    bool WithDraw(float WithDrawAmmount)
    {
        if(WithDrawAmmount > _AccountBalance)
        {
            return false;
        }
        else 
        {
            _AccountBalance -= WithDrawAmmount;
            Save();
            return true;
        }
    }

    
    bool Transfer(float Amount, clsBankClient& DestinationClient, string Username)
    {
        if (Amount <= 0 || Amount > _AccountBalance)
        {
            return false;
        }

        if (DestinationClient.AccountNumber() == _AccountNumber)
        {
            return false;
        }

        WithDraw(Amount);
        DestinationClient.Deposit(Amount);
        _RegisterTransferLog(Amount, DestinationClient, Username);
        return true;
    }

    enum enSaveResult {svFaildEmptyObject = 0, svSucceded = 1, svFaildAccountNumberExist = 2};

    enSaveResult Save()
    {
        switch (_Mode)
        {
            case enMode::EmptyMode:
            {
                if(IsEmpty())
                {
                    return enSaveResult::svFaildEmptyObject;
                }
                break;
            }

            case enMode::UpdateMode:
            {
                Update();
                return enSaveResult::svSucceded;
            }

            case enMode::AddNewMode:
            {
                if(IsClientExist(_AccountNumber))
                {
                    return enSaveResult::svFaildAccountNumberExist;
                }
                else
                {
                    AddNewClient();
                    _Mode = enMode::UpdateMode;
                    return enSaveResult::svSucceded;
                }
            }
        }

        return enSaveResult::svFaildEmptyObject;
    }
};