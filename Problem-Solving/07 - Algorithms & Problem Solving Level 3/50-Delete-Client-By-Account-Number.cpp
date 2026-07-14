#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct stClient
{
    string accountNumber;
    string pinCode;
    string name;
    string phone;
    double balance;
    bool markForDelete = false;
};

const string CLIENTS_FILE_NAME = "ClientData.txt";

vector<string> splitString(string sentence, string delimiter);
stClient convertLineToRecord(string line);
string convertRecordToLine(stClient client, string separator = "#//#");
vector<stClient> loadClientsFromFile(string fileName);
void saveClientsToFile(string fileName, vector<stClient> clients);

string readAccountNumber();
void printClientDetails(stClient client);
bool findClientByAccountNumber(string accountNumber, vector<stClient> clients, stClient &client);
bool confirmDelete();
bool markClientForDeleteByAccountNumber(vector<stClient> &clients, string accountNumber);
vector<stClient> saveClientsDataToFile(string fileName, vector<stClient> clients);
bool deleteClientByAccountNumber(string accountNumber, vector<stClient> &clients);

int main()
{   
    vector<stClient> clients = loadClientsFromFile(CLIENTS_FILE_NAME);
    string accountNumber = readAccountNumber();
    
    deleteClientByAccountNumber(accountNumber, clients);
    
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

stClient convertLineToRecord(string line)
{   
    stClient client;
    vector<string> data = splitString(line, "#//#");

    client.accountNumber = data[0];
    client.pinCode       = data[1];
    client.name          = data[2];
    client.phone         = data[3];
    client.balance       = stod(data[4]);

    return client;
}

string convertRecordToLine(stClient client, string separator)
{
    string line = "";
    line += client.accountNumber + separator;
    line += client.pinCode + separator;
    line += client.name + separator;
    line += client.phone + separator;
    line += to_string(client.balance);
    return line;
}

vector<stClient> loadClientsFromFile(string fileName)
{
    fstream myFile;
    vector<stClient> clients;

    myFile.open(fileName, ios::in);

    if(myFile.is_open())
    {
        string line;
        while(getline(myFile, line))
        {
            stClient client = convertLineToRecord(line);
            clients.push_back(client);
        }
        myFile.close();
    }

    return clients;
}

void saveClientsToFile(string fileName, vector<stClient> clients)
{
    fstream myFile;
    myFile.open(fileName, ios::out); 

    if(myFile.is_open())
    {
        for (stClient &client : clients)
        {
            string line = convertRecordToLine(client);
            myFile << line << endl;
        }
        myFile.close();
    }
}

string readAccountNumber()
{
    string accountNumber;
    cout << "Please Enter Account Number: ";
    getline(cin >> ws, accountNumber);
    return accountNumber;
}

void printClientDetails(stClient client)
{   
    cout << "\n--- Client Details ---\n";
    cout << "Account Number : " << client.accountNumber << endl;
    cout << "Pin Code       : " << client.pinCode << endl;
    cout << "Client Name    : " << client.name << endl;
    cout << "Phone          : " << client.phone << endl;
    cout << "Balance        : " << client.balance << endl;
    cout << "----------------------\n";
}

bool findClientByAccountNumber(string accountNumber, vector<stClient> clients, stClient &client)
{
    for(stClient &c : clients)
    {
        if(accountNumber == c.accountNumber)
        {   
            client = c;
            return true;
        }
    }
    return false;
}

bool confirmDelete()
{   
    char answer;
    cout << "\nAre you sure you want to delete this client? Y/N: ";
    cin >> answer;
    return (answer == 'y' || answer == 'Y');
}

bool markClientForDeleteByAccountNumber(vector<stClient> &clients, string accountNumber)
{
    for(stClient &c : clients)
    {
        if(c.accountNumber == accountNumber)
        {
            c.markForDelete = true;
            return true;
        }
    }
    return false;
}

vector<stClient> saveClientsDataToFile(string fileName, vector<stClient> clients)
{
    fstream myFile;
    myFile.open(fileName, ios::out); 

    if(myFile.is_open())
    {
        string dataLine;

        for (stClient &c : clients)
        {
            if(c.markForDelete == false)
            {
                dataLine = convertRecordToLine(c);
                myFile << dataLine << endl;
            } 
        }
        myFile.close();
    }
    return clients;
}

bool deleteClientByAccountNumber(string accountNumber, vector<stClient> &clients)
{
    stClient clientToDelete;

    if(findClientByAccountNumber(accountNumber, clients, clientToDelete))
    {
        printClientDetails(clientToDelete);
        
        if(confirmDelete())
        {
            markClientForDeleteByAccountNumber(clients, accountNumber);
            saveClientsDataToFile(CLIENTS_FILE_NAME, clients);

            clients = loadClientsFromFile(CLIENTS_FILE_NAME);

            cout << "\n\nClient Deleted Successfully.";
            return true;
        }
        return false;
    }
    else
    {
        cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!";
        return false;
    }
}