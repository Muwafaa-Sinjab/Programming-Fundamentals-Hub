#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string readString(string message);
char flipCharCase(char charToFlip);
string flipStringCase(string sentence);

int main()
{
    string text = readString("Please Enter a String: ");

    text = flipStringCase(text);
    
    cout << "\nString after inverting case:\n" << text << endl;

    return 0;
}

string readString(string message)
{
    string input;
    cout << message;
    getline(cin, input);
    return input;
}

char flipCharCase(char charToFlip) 
{
    return isupper(charToFlip) ? static_cast<char>(tolower(charToFlip)) : static_cast<char>(toupper(charToFlip));
}

string flipStringCase(string sentence) 
{
    for (size_t i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] != ' ')
        {
            // Flip the case of the current character using the character-level helper function
            sentence[i] = flipCharCase(sentence[i]);
        }
    }
    return sentence;
}