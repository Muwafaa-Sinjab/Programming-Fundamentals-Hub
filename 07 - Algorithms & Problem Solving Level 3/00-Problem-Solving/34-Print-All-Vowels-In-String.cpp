#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

using namespace std;

string readString(string message);
bool isVowelCharacter(char character);
void printVowelsInString(string sentence);

int main()
{
    string text = readString("Please Enter a String: ");

    cout << "\nVowels of String are = ";
    printVowelsInString(text);         
    cout << endl;
    
    return 0;
}

string readString(string message)
{
    string input;
    cout << message;
    getline(cin, input);
    return input;
}

bool isVowelCharacter(char character)
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    
    // Convert character to lowercase safely before checking
    character = static_cast<char>(tolower(static_cast<unsigned char>(character)));

    for (char v : vowels)
    {
        if (character == v)
        {
            return true;
        }
    }
    return false;  
}

void printVowelsInString(string sentence)
{
    for (size_t i = 0; i < sentence.length(); i++)
    {
        // Print the character if it matches a vowel
        if (isVowelCharacter(sentence[i]))
            cout << setw(2) << sentence[i] << "  ";
    }
}