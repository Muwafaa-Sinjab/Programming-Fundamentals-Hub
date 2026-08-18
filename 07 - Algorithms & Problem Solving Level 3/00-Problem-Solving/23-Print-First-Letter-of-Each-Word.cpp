#include <iostream>
#include <string>

using namespace std;

string readString(string message);
void printFirstLetterOfEachWord(string sentence);

int main()
{   
    printFirstLetterOfEachWord(readString("Enter Your String: "));
    return 0;
}

string readString(string message)
{
    string sentence; 
    cout << message;
    getline(cin, sentence);
    return sentence;
}

void printFirstLetterOfEachWord(string sentence)
{   
    bool isFirstLetter = true;

    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] != ' ' && isFirstLetter)
        {
            cout << sentence[i] << "  ";
        }
        
        // Update flag: true if current character is a space, indicating next non-space is a first letter
        isFirstLetter = (sentence[i] == ' ' ? true : false);
    }
    cout << endl;
}