#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double Balance;
};

const string FILE_NAME = "ClientData.txt";

vector<string> SplitString(string text, string delimiter);
sClient ConvertLineToRecord(string line);
string ConvertRecordToLine(sClient Client, string Separator = "#//#");
vector<sClient> LoadClientsFromFile(string FileName);
void SaveClientsToFile(string FileName, vector<sClient> vClients);

string ReadAccountNumber();
void PrintClientDetails(sClient Client);
bool ConfirmUpdate();
bool UpdateClientByAccountNumber(string AccountNumber, vector<sClient> &vClients);

int main()
{   
    vector<sClient> vClients = LoadClientsFromFile(FILE_NAME);
    string AccountNumber = ReadAccountNumber();
    UpdateClientByAccountNumber(AccountNumber, vClients);
    return 0;
}

vector<string> SplitString(string text, string delimiter)
{
    short pos = 0;
    string word;
    vector<string> vWords;

    while ((pos = text.find(delimiter)) != string::npos)
    {
        word = text.substr(0, pos);
        if (word != "")
        {
            vWords.push_back(word);
        }
        text.erase(0, pos + delimiter.length());
    }

    if (text != "")
    {
        vWords.push_back(text);
    }

    return vWords;
}

sClient ConvertLineToRecord(string line)
{   
    sClient Client;
    vector<string> vData = SplitString(line, "#//#");

    Client.AccountNumber = vData[0];
    Client.PinCode       = vData[1];
    Client.Name          = vData[2];
    Client.Phone         = vData[3];
    Client.Balance       = stod(vData[4]);

    return Client;
}

string ConvertRecordToLine(sClient Client, string Separator)
{
    string line = "";
    line += Client.AccountNumber + Separator;
    line += Client.PinCode + Separator;
    line += Client.Name + Separator;
    line += Client.Phone + Separator;
    line += to_string(Client.Balance);
    return line;
}

vector<sClient> LoadClientsFromFile(string FileName)
{
    fstream MyFile;
    vector<sClient> vClients;

    MyFile.open(FileName, ios::in);

    if(MyFile.is_open())
    {
        string line;
        while(getline(MyFile, line))
        {
            sClient Client = ConvertLineToRecord(line);
            vClients.push_back(Client);
        }
        MyFile.close();
    }

    return vClients;
}

void SaveClientsToFile(string FileName, vector<sClient> vClients)
{
    fstream MyFile;
     MyFile.open(FileName, ios::out); 

    if(MyFile.is_open())
    {
        for (sClient &Client : vClients)
        {
            string line = ConvertRecordToLine(Client);
            MyFile << line << endl;
        }
        MyFile.close();
    }
}

string ReadAccountNumber()
{
    string AccountNumber;
    cout << "Please Enter Account Number: ";
    getline(cin >> ws, AccountNumber);
    return AccountNumber;
}

void PrintClientDetails(sClient Client)
{   
    cout << "\n--- Client Details ---\n";
    cout << "Account Number : " << Client.AccountNumber << endl;
    cout << "Pin Code       : " << Client.PinCode << endl;
    cout << "Client Name    : " << Client.Name << endl;
    cout << "Phone          : " << Client.Phone << endl;
    cout << "Balance        : " << Client.Balance << endl;
    cout << "----------------------\n";
}

bool ConfirmUpdate()
{   
    char Answer;
    cout << "\nAre you sure you want to update this client? Y/N: ";
    cin >> Answer;
    return (Answer == 'y' || Answer == 'Y');
}

bool UpdateClientByAccountNumber(string AccountNumber, vector<sClient> &vClients)
{
    for (sClient &Client : vClients)
    {
        if (Client.AccountNumber == AccountNumber)
        {
            PrintClientDetails(Client);

            if (!ConfirmUpdate())
            {
                cout << "\nUpdate cancelled by user.\n";
                return false;
            }

            cout << "\nEnter new data:\n";

            cout << "Enter Pin Code       : ";
            getline(cin >> ws, Client.PinCode);

            cout << "Enter Name           : ";
            getline(cin, Client.Name);

            cout << "Enter Phone Number   : ";
            getline(cin, Client.Phone);

            cout << "Enter Account Balance: ";
            cin >> Client.Balance;

            SaveClientsToFile(FILE_NAME, vClients);

            cout << "\nClient Updated Successfully.\n";
            return true;
        }
    }
    cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
    return false;
}