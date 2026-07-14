#include <iostream>
#include <string>
#include <vector>
#include <cctype> // For tolower()

using namespace std;

string readString(string message);
vector<string> splitString(string sentence, string delimiter);
string joinString(const vector<string>& words, string delimiter);
string toLowerCase(string sentence);
string replaceWordCustom(string sentence, string target, string replacement, bool matchCase = true);

int main()
{   
    string text = "My Name is Muwafaa, I'm From Syria , Syria is a great place";
    string target = "syria";
    string replacement = "USA";

    cout << "Original String: " << text << endl;
    cout << "Replace with match case is:     " << replaceWordCustom(text, target, replacement) << "\n";
    cout << "Replace without match case is:  " << replaceWordCustom(text, target, replacement, false) << "\n";

    return 0;
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

string joinString(const vector<string>& words, string delimiter)
{
    string sentence = "";

    for (const string& word : words)
    {
        sentence = sentence + word + delimiter;
    }

    // Remove the extra trailing delimiter at the end of the sentence
    if (!sentence.empty())
    {
        sentence = sentence.substr(0, sentence.length() - delimiter.length());
    }
    
    return sentence;
}

string toLowerCase(string sentence)
{
    for (size_t i = 0; i < sentence.length(); i++)
    {
        sentence[i] = static_cast<char>(tolower(static_cast<unsigned char>(sentence[i])));
    }
    return sentence;
}

string replaceWordCustom(string sentence, string target, string replacement, bool matchCase)
{
    vector<string> words = splitString(sentence, " ");

    for (string& word : words)
    {
        if (matchCase)
        {
            // Strict case-sensitive comparison
            if (word == target)
                word = replacement;
        }
        else
        {
            // Case-insensitive comparison by converting both to lowercase
            if (toLowerCase(word) == toLowerCase(target))
                word = replacement;
        }
    }

    return joinString(words, " ");
}