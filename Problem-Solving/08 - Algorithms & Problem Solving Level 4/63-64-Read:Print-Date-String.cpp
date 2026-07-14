#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct sDate { short year, month, day; };

// Prototypes
string ReadString(string message);
vector<string> SplitString(string text, string delimiter);
sDate StringToDate(string dateString);
string DateToString(sDate date);

int main() {
    string dateString = ReadString("Please Enter Date dd/mm/yyyy? ");
    sDate date = StringToDate(dateString);

    cout << "\nDay: " << date.day << "\nMonth: " << date.month << "\nYear: " << date.year << endl;
    cout << "\nYou Entered: " << DateToString(date) << endl;
    
    return 0;
}

string ReadString(string message) {
    string input;
    cout << message;
    getline(cin, input);
    return input;
}

vector<string> SplitString(string text, string delimiter) {
    short pos = 0;
    string token;
    vector<string> tokens;

    while ((pos = text.find(delimiter)) != string::npos) {
        token = text.substr(0, pos);
        if (!token.empty()) tokens.push_back(token);
        text.erase(0, pos + delimiter.length());
    }

    if (!text.empty()) tokens.push_back(text);
    return tokens;
}

sDate StringToDate(string dateString) {
    vector<string> v = SplitString(dateString, "/");
    return { (short)stoi(v[2]), (short)stoi(v[1]), (short)stoi(v[0]) };
}

string DateToString(sDate date) {
    return to_string(date.day) + "/" + to_string(date.month) + "/" + to_string(date.year);
}