#include <iostream>
#include <string>
#include <vector>

using namespace std;

string readString(string message);
vector<string> splitString(string sentence, string delimiter);
string reverseStringWords(string sentence);

int main()
{   
    string text = readString("Enter Your String: ");
    cout << "\nYour string after reverse is: " << reverseStringWords(text) << endl;

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

string reverseStringWords(string sentence)
{
    vector<string> words = splitString(sentence, " ");
    string reversedSentence = "";

    // Using a reverse iterator to traverse the vector from end to beginning
    vector<string>::const_reverse_iterator rIterator;

    for (rIterator = words.rbegin(); rIterator != words.rend(); ++rIterator)
    {
        reversedSentence += *rIterator + " ";
    }

    // Remove the extra trailing space at the end of the sentence
    if (!reversedSentence.empty())
    {
        reversedSentence = reversedSentence.substr(0, reversedSentence.length() - 1);
    }

    return reversedSentence;
}