#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string readString(string message);
string capitalizeFirstLetterOfEachWord(string sentence);

int main()
{
    string text = readString("Enter Your String: ");
    
    cout << "String after Conversion:\n";
    text = capitalizeFirstLetterOfEachWord(text);
    cout << text << endl;
    
    return 0;
}

string readString(string message)
{
    string sentence;
    cout << message;
    getline(cin, sentence);
    return sentence;
}

string capitalizeFirstLetterOfEachWord(string sentence)
{
    bool isFirstLetter = true;

    for (size_t i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] != ' ' && isFirstLetter)
        {
            // Convert character to uppercase safely using standard functions
            sentence[i] = static_cast<char>(toupper(static_cast<unsigned char>(sentence[i])));
            isFirstLetter = false;
        }
        else if (sentence[i] == ' ')
        {
            isFirstLetter = true;
        }
    }

    return sentence;
}