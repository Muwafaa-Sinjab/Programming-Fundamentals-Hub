#include <iostream>
#include <string>

using namespace std;

string readString(string message);
string trimLeft(string sentence);
string trimRight(string sentence);
string trim(string sentence);

int main()
{
    string text = readString("Please Enter a String: ");

    cout << "\nString     = [" << text << "]" << endl;
    cout << "Trim Left  = [" << trimLeft(text) << "]" << endl;
    cout << "Trim Right = [" << trimRight(text) << "]" << endl;
    cout << "Trim       = [" << trim(text) << "]" << endl; 
    
    return 0;
}

string readString(string message)
{
    string input;
    cout << message;
    getline(cin, input);
    return input;
}

string trimLeft(string sentence)
{
    for (size_t i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] != ' ')
        {
            // Erase all spaces from the beginning up to the first non-space character
            sentence.erase(0, i);
            return sentence;
        }
    }
    return "";
}
    
string trimRight(string sentence)
{
    for (int i = static_cast<int>(sentence.length()) - 1; i >= 0; i--)
    {
        if (sentence[i] != ' ')
        {
            // Erase everything from after the last non-space character to the end
            sentence.erase(i + 1);
            return sentence;
        }
    }
    return "";
}

string trim(string sentence)
{
    // Apply both left and right trims to remove all surrounding spaces
    return trimLeft(trimRight(sentence));
}