#include <iostream>
#include <string>

using namespace std;

string readString(string message);
void printEachWordInString(string sentence);

int main()
{
    string text = readString("Please Enter a String: ");
    
    printEachWordInString(text);

    return 0;
}

string readString(string message)
{
    string input;
    cout << message;
    getline(cin, input);
    return input;
}

void printEachWordInString(string sentence)
{
    string delimiter = " ";
    size_t position = 0;
    string word;

    // Loop until no more delimiters are found in the sentence
    while ((position = sentence.find(delimiter)) != string::npos)
    {
        word = sentence.substr(0, position);

        if (word != "")
        {
            cout << word << endl;
        }
        
        // Erase the processed word and the delimiter from the sentence
        sentence.erase(0, position + delimiter.length());
    }

    // Print the last word if remaining
    if (sentence != "")
    {
        cout << sentence << endl;
    }
}