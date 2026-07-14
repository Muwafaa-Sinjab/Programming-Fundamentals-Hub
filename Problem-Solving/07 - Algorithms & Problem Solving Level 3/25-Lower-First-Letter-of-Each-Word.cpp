#include <iostream>
#include <string>
#include <cctype> // For tolower()

using namespace std;

string readString(string message);
string lowerFirstLetterOfEachWord(string sentence);

int main()
{
    string text = readString("Please Enter Your String:\n");

    cout << "\nYour Text After conversion:\n";
    text = lowerFirstLetterOfEachWord(text);
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

string lowerFirstLetterOfEachWord(string sentence)
{   
    bool isFirstLetter = true;

    for (short i = 0; i < sentence.length(); i++)
    {   
        if (sentence[i] != ' ' && isFirstLetter)
        {
            // Convert the first letter of the word to lowercase
            sentence[i] = static_cast<char>(tolower(static_cast<unsigned char>(sentence[i])));
        }
        
        isFirstLetter = (sentence[i] == ' ' ? true : false);
    }

    return sentence;
}