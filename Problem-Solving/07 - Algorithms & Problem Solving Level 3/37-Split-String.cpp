#include <iostream>
#include <string>
#include <vector>

using namespace std;

string readString(string message);
vector<string> splitString(string sentence, string delimiter);

int main()
{
    string text = readString("Please Enter a String: ");

    vector<string> words = splitString(text, " ");

    cout << "\nTokens = " << words.size() << endl;

    for (const string& word : words)
    {
        cout << word << endl;
    }

    return 0;
}

string readString(string message)
{
    string input;
    cout << message;
    getline(cin, input);
    return input;
}

vector<string> splitString(string sentence, string delimiter)
{
    size_t position = 0;
    string word;
    vector<string> words;

    // Loop until no more delimiters are found in the sentence
    while ((position = sentence.find(delimiter)) != string::npos)
    {
        word = sentence.substr(0, position);

        if (word != "")
        {
            words.push_back(word);
        }

        // Erase the processed word and the delimiter from the sentence
        sentence.erase(0, position + delimiter.length());
    }

    // Add the last remaining word to the vector
    if (sentence != "")
    {
        words.push_back(sentence);
    }

    return words;
}