#include <iostream>
#include <string>

using namespace std;

string readString(string message);
short countWordsInString(string sentence);

int main()
{
    string text = readString("Please Enter a String: ");
    
    cout << "\nThe number of words in your string is: " << countWordsInString(text) << endl;

    return 0;
}

string readString(string message)
{
    string input;
    cout << message;
    getline(cin, input);
    return input;
}

short countWordsInString(string sentence)
{
    string delimiter = " ";
    size_t position = 0;
    string word;
    short counter = 0;

    // Loop until no more delimiters are found in the sentence
    while ((position = sentence.find(delimiter)) != string::npos)
    {
        word = sentence.substr(0, position);

        if (word != "")
        {
            counter++;
        }
        
        // Erase the processed word and the delimiter from the sentence
        sentence.erase(0, position + delimiter.length());
    }

    // Count the last word if remaining
    if (sentence != "")
    {
        counter++;
    }

    return counter;
}