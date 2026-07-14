#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string readString(string message);
size_t getStringLength(string sentence);
short countCapitalLetters(string sentence);
short countSmallLetters(string sentence);

int main()
{
    string text = readString("Please Enter a String: ");

    size_t stringLength = getStringLength(text);
    cout << "\nString Length = " << stringLength << endl;

    cout << "\nCapital Letters Count = " << countCapitalLetters(text);
    cout << "\nSmall Letters Count = " << countSmallLetters(text) << endl;

    return 0;
}

string readString(string message)
{
    string input;
    cout << message;
    getline(cin, input);
    return input;
}

size_t getStringLength(string sentence)
{
    return sentence.length();
}

short countCapitalLetters(string sentence)
{
    short counter = 0;

    for (size_t i = 0; i < sentence.length(); i++)
    {
        // Increment counter if the character is uppercase
        if (isupper(static_cast<unsigned char>(sentence[i])))
        {
            counter++;
        }
    }
    return counter;
}

short countSmallLetters(string sentence)
{
    short counter = 0;

    for (size_t i = 0; i < sentence.length(); i++)
    {
        // Increment counter if the character is lowercase
        if (islower(static_cast<unsigned char>(sentence[i])))
        {
            counter++;
        }
    }
    return counter;
}