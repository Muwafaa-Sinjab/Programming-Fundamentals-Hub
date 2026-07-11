#include <iostream>
#include <string>

using namespace std;

struct sClinInfo
{
    string AccountNumber;
    string PinCode;
    string Name;
    string PhoneNum;
    double AccountBalance;
};

vector<string> SplitString(string text, string delimiter);
sClinInfo ConvertLineToRecord(string line);
void PrintClientRecord(sClinInfo Client);

int main()
{   
    sClinInfo sClient;
    string stline = "A69038#//#321#//#Muwafaa Sinjab#//#0531387404#//#43213.000000";

    cout << "\nLine Record is: " << stline;
    sClient = ConvertLineToRecord(stline);

    cout << "\n\nClient Recird:\n";
    PrintClientRecord(sClient);
   
    return 0;
}

vector<string> SplitString(string text, string delimiter)
{
    short delimiterPosition = 0;

    string currentWord;
    vector<string> words;

    while ((delimiterPosition = text.find(delimiter)) != string::npos)
    {
        currentWord = text.substr(0, delimiterPosition);

        if (currentWord != "")
        {
            words.push_back(currentWord);
        }

        text.erase(0, delimiterPosition + delimiter.length());
    }

    if (text != "")
    {
        words.push_back(text);
    }

    return words;
}

sClinInfo ConvertLineToRecord(string line)
{   
    sClinInfo Client;

    vector<string> vInputText;
    vInputText = SplitString(line, "#//#");

    Client.AccountNumber = vInputText[0];
    Client.PinCode = vInputText[1];
    Client.Name = vInputText[2];
    Client.PhoneNum = vInputText[3];
    Client.AccountBalance = stod(vInputText[4]);

    return Client;
}

void PrintClientRecord(sClinInfo Client)
{
    cout << Client.AccountNumber << endl;
    cout << Client.PinCode << endl;
    cout << Client.Name << endl;
    cout << Client.PhoneNum << endl;
    cout << Client.AccountBalance << endl;
}