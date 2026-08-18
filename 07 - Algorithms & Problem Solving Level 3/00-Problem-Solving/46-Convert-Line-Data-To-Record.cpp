#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct stClientInfo
{
    string accountNumber;
    string pinCode;
    string name;
    string phoneNumber;
    double accountBalance;
};

vector<string> splitString(string sentence, string delimiter);
stClientInfo convertLineToRecord(string line, string delimiter);
void printClientRecord(stClientInfo client);

int main()
{   
    stClientInfo client;
    string lineRecord = "A69038#//#321#//#Muwafaa Sinjab#//#0531387404#//#43213.000000";

    cout << "\nLine Record is: " << lineRecord;
    client = convertLineToRecord(lineRecord, "#//#");

    cout << "\n\nClient Record:\n";
    printClientRecord(client);
   
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

stClientInfo convertLineToRecord(string line, string delimiter)
{   
    stClientInfo client;
    vector<string> clientTokens;
    
    clientTokens = splitString(line, delimiter);

    client.accountNumber = clientTokens[0];
    client.pinCode = clientTokens[1];
    client.name = clientTokens[2];
    client.phoneNumber = clientTokens[3];
    client.accountBalance = stod(clientTokens[4]);

    return client;
}

void printClientRecord(stClientInfo client)
{
    cout << client.accountNumber << endl;
    cout << client.pinCode << endl;
    cout << client.name << endl;
    cout << client.phoneNumber << endl;
    cout << client.accountBalance << endl;
}