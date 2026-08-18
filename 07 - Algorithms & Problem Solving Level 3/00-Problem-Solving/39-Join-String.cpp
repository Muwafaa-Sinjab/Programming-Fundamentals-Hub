#include <iostream>
#include <vector>
#include <string>

using namespace std;

string joinString(const vector<string>& words, string delimiter);

int main()
{
    vector<string> words = {"Ali", "Ahmed", "Muwafaa", "Taj"}; 
    
    cout << "String after join = " << joinString(words, "!!!!") << endl;

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