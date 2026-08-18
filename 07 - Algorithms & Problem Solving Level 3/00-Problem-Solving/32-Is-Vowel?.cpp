#include <iostream>
#include <string>
#include <cctype>

using namespace std;

enum enVowelCharacter { A = 'a', E = 'e', I = 'i', O = 'o', U = 'u' };

char readChar(string message);
bool isVowelCharacter(char character);

int main()
{
    char character = readChar("Please Enter a character: ");

    if (isVowelCharacter(character))
        cout << "\nYES, Letter '" << character << "' is vowel." << endl;
    else
        cout << "\nNO, Letter '" << character << "' is NOT vowel." << endl;
        
    return 0;
}

char readChar(string message)
{
    char input;
    cout << message;
    cin >> input;
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