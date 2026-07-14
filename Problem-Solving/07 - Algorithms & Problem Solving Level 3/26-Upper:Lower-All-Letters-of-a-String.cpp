#include <iostream>
#include <string>
#include <cctype>
#include <ctime> // For time()

using namespace std;

string readString(string message);
string toUpperCase(string sentence);
string toLowerCase(string sentence);

int main()
{
    srand((unsigned)time(NULL));
    
    string text = readString("Please Enter Your String:\n");

    cout << "\nText in Uppercase:\n";
    text = toUpperCase(text);
    cout << text << endl;

    cout << "\nText in Lowercase:\n";
    text = toLowerCase(text);
    cout << text << endl;

    return 0;
}

string readString(string message)
{
    string sentence = "";
    cout << message;
    getline(cin, sentence);
    return sentence;
}

string toUpperCase(string sentence)
{   
    for (short i = 0; i < sentence.length(); i++)
    {   
        if (sentence[i] != ' ')
        {
            // Convert the current character to uppercase
            sentence[i] = static_cast<char>(toupper(static_cast<unsigned char>(sentence[i])));
        }
    }
    return sentence;
}

string toLowerCase(string sentence)
{   
    for (short i = 0; i < sentence.length(); i++)
    {   
        if (sentence[i] != ' ')
        {
            // Convert the current character to lowercase
            sentence[i] = static_cast<char>(tolower(static_cast<unsigned char>(sentence[i])));
        }
    }
    return sentence;
}