#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string readString(string message);
char readChar(string message);
char flipCharCase(char charToFlip);
short countSpecificLetter(string sentence, char letterToCount, bool matchCase = true);

int main()
{
    string text = readString("Please Enter a String: ");
    char character = readChar("Please Enter a character: ");

    cout << "\nLetter " << character << " count = " 
         << countSpecificLetter(text, character);
         
    cout << "\nLetter " << character << " or " << flipCharCase(character) 
         << " count = " << countSpecificLetter(text, character, false) << endl;

    return 0;
}

string readString(string message)
{
    string input;
    cout << message;
    getline(cin, input);
    return input;
}

char readChar(string message)
{
    char input;
    cout << message;
    cin >> input;
    return input;
}

short countSpecificLetter(string sentence, char letterToCount, bool matchCase)
{
    short counter = 0;

    for (char character : sentence)
    { 
        if (matchCase) 
        {
            // Strict case-sensitive comparison
            if (character == letterToCount) 
                counter++;
        } 
        else 
        {
            // Case-insensitive comparison by converting both to uppercase
            if (toupper(static_cast<unsigned char>(character)) == toupper(static_cast<unsigned char>(letterToCount))) 
                counter++;
        }
    }
    return counter;
}

char flipCharCase(char charToFlip) 
{
    return isupper(static_cast<unsigned char>(charToFlip)) 
        ? static_cast<char>(tolower(static_cast<unsigned char>(charToFlip))) 
        : static_cast<char>(toupper(static_cast<unsigned char>(charToFlip)));
}