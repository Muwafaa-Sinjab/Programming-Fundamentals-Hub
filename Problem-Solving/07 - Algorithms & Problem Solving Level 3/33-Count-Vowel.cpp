#include <iostream>
#include <string>
#include <cctype>

using namespace std;

enum enVowelCharacter { A = 'a', E = 'e', I = 'i', O = 'o', U = 'u' };

string readString(string message);
bool isVowelCharacter(char character);
short countVowelsInString(string sentence);

int main()
{
    string text = readString("Please Enter a String: ");

    cout << "\nNumber of vowels = " << countVowelsInString(text) << endl;
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
    // Convert character to lowercase safely before checking
    character = static_cast<char>(tolower(static_cast<unsigned char>(character)));

    return (character == enVowelCharacter::A ||  
            character == enVowelCharacter::E ||
            character == enVowelCharacter::I ||  
            character == enVowelCharacter::O ||
            character == enVowelCharacter::U);
}

short countVowelsInString(string sentence)
{
    short counter = 0;

    for (size_t i = 0; i < sentence.length(); i++)
    {
        // Increment counter if the current character is a vowel
        if (isVowelCharacter(sentence[i]))
            counter++;
    }
    return counter;
}