#include <iostream>
#include <vector>
#include <string>

using namespace std;

string joinString(const vector<string>& words, string delimiter);
string joinString(const string arrayWords[], short arraySize, string delimiter);

int main()
{
    vector<string> wordsVector = {"Ali", "Ahmed", "Muwafaa", "Taj"}; 
    string wordsArray[] = {"Ali", "Ahmed", "Muwafaa", "Taj"};

    cout << "String after join in vector = " << joinString(wordsVector, "!!!!") << endl;
    cout << "String after join in array  = " << joinString(wordsArray, 4, "!!!!") << endl;
    
    return 0;
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

string joinString(const string arrayWords[], short arraySize, string delimiter)
{
    string sentence = "";

    for (short i = 0; i < arraySize; i++)
    {
        sentence = sentence + arrayWords[i] + delimiter;
    }

    // Remove the extra trailing delimiter at the end of the sentence
    if (!sentence.empty())
    {
        sentence = sentence.substr(0, sentence.length() - delimiter.length());
    }
    
    return sentence;
}