#include <iostream>
#include <string>

using namespace std;

string readString(string message);
char readChar(string message);
short countSpecificLetter(string sentence, char letterToCount);

int main()
{
    string text = readString("Please Enter a String: ");
    char character = readChar("Please Enter a Character: ");

    cout << "\nLetter " << character << " count = " << countSpecificLetter(text, character) << endl;
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

short countSpecificLetter(string sentence, char letterToCount)
{
    short counter = 0; 

    for (size_t i = 0; i < sentence.length(); i++)
    {
        // Increment counter if the current character matches the target letter
        if (sentence[i] == letterToCount)
            counter++;
    }
    return counter;
}