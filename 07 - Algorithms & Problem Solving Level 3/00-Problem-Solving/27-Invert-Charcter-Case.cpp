#include <iostream>
#include <cctype>

using namespace std;

char readChar(string message);
char flipCharCase(char charToFlip); 

int main()
{
    char character = readChar("Please Enter a Character: ");

    character = flipCharCase(character);
    
    cout << "\nCharacter after inverting case: " << character << endl;

    return 0;
}

char readChar(string message)
{
    char input;
    cout << message;
    cin >> input;
    return input;
}

char flipCharCase(char charToFlip) 
{
    // Invert case: convert to lowercase if uppercase, and vice versa
    return isupper(charToFlip) ? static_cast<char>(tolower(charToFlip)) : static_cast<char>(toupper(charToFlip));
}