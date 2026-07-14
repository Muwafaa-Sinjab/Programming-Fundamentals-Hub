#include <iostream>
#include <string>

using namespace std;

struct stClientInfo
{
    string accountNumber;
    string pinCode;
    string name;
    string phoneNumber;
    double accountBalance;
};

stClientInfo readClientInfo();
string convertRecordToLine(stClientInfo client, string separator);

int main()
{   
    stClientInfo client;
    client = readClientInfo();
   
    cout << "\n" << convertRecordToLine(client, "#//#") << endl;
    return 0;
}

stClientInfo readClientInfo()
{
    stClientInfo client;

    cout << "Enter Your Account Number: ";
    cin >> client.accountNumber;

    cout << "Enter Your Pin Code: ";
    cin >> client.pinCode;

    cin.ignore();
    cout << "Enter Your Name: ";
    getline(cin, client.name);

    cout << "Enter Your Phone Number: ";
    cin >> client.phoneNumber;

    cout << "Enter Your Account Balance: ";
    cin >> client.accountBalance;

    return client;
}

string convertRecordToLine(stClientInfo client, string separator)
{
    string clientRecord = "";
    
    clientRecord += client.accountNumber + separator;
    clientRecord += client.pinCode + separator;
    clientRecord += client.name + separator;
    clientRecord += client.phoneNumber + separator;
    clientRecord += to_string(client.accountBalance);

    return clientRecord;
}