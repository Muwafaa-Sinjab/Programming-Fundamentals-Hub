#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct stClientInfo
{
    string accountNumber;
    string pinCode;
    string name;
    string phoneNumber;
    double accountBalance;
};

const string CLIENTS_FILE_NAME = "ClientData.txt";

vector<string> splitString(string sentence, string delimiter);
stClientInfo convertLineToRecord(string line);
vector<stClientInfo> loadClientsFromFile(string fileName);
string readClientAccountNumber();
void printClientDataDetails(stClientInfo client);
bool findClientByAccountNumber(string accountNumber, stClientInfo &client);

int main()
{   
    stClientInfo client;
    string accountNumber = readClientAccountNumber();
    
    if (findClientByAccountNumber(accountNumber, client))
    {
        printClientDataDetails(client);
    }
    else
    {
        cout << "\nClient with Account Number (" << accountNumber << ") Not Found!" << endl;
    }

    return 0;
}

vector<string> splitString(string sentence, string delimiter)
{
    size_t position = 0;
    string word;
    vector<string> words;

    while ((position = sentence.find(delimiter)) != string::npos)
    {
        word = sentence.substr(0, position);
        if (word != "")
        {
            words.push_back(word);
        }
        sentence.erase(0, position + delimiter.length());
    }

    if (sentence != "")
    {
        words.push_back(sentence);
    }

    return words;
}

stClientInfo convertLineToRecord(string line)
{   
    stClientInfo client;
    vector<string> clientTokens;
    clientTokens = splitString(line, "#//#");

    client.accountNumber = clientTokens[0];
    client.pinCode = clientTokens[1];
    client.name = clientTokens[2];
    client.phoneNumber = clientTokens[3];
    client.accountBalance = stod(clientTokens[4]);

    return client;
}

vector<stClientInfo> loadClientsFromFile(string fileName)
{
    fstream myFile;
    vector<stClientInfo> vFileContent;

    myFile.open(fileName, ios::in);

    if (myFile.is_open())
    {
        string line;
        stClientInfo client;

        while (getline(myFile, line))
        {
            client = convertLineToRecord(line);
            vFileContent.push_back(client);
        }
        myFile.close();
    }

    return vFileContent;
}

string readClientAccountNumber()
{
    string desiredClient;
    cout << "Please Enter Account Number: ";
    getline(cin >> ws, desiredClient);

    return desiredClient;
}

void printClientDataDetails(stClientInfo client)
{   
    cout << "\n--- Client Details ---\n";
    cout << "Account Number : " << client.accountNumber << endl;
    cout << "Pin Code       : " << client.pinCode << endl;
    cout << "Client Name    : " << client.name << endl;
    cout << "Phone          : " << client.phoneNumber << endl;
    cout << "Balance        : " << client.accountBalance << endl;
    cout << "----------------------\n";
}

bool findClientByAccountNumber(string accountNumber, stClientInfo &client)
{
    vector<stClientInfo> vClients = loadClientsFromFile(CLIENTS_FILE_NAME);

    for (stClientInfo &record : vClients)
    {
        if (accountNumber == record.accountNumber)
        {   
            client = record;
            return true;
        }
    }

    return false;
}