#include <iostream>
#include <string>

using namespace std;

string replaceWordInString(string sentence, string target, string replacement);

int main()
{   
    string text = "My Name is Muwafaa, I'm From Syria, Syria is a great place";
    string target = "Syria";
    string replacement = "USA";

    cout << "Original String: " << text << endl;
    cout << "Your String after replace is: " << replaceWordInString(text, target, replacement) << endl;

    return 0;
}

string replaceWordInString(string sentence, string target, string replacement)
{
    size_t position = sentence.find(target);

    // Loop as long as the target word is found in the sentence
    while (position != string::npos)
    {
        // Replace the target word with the replacement string
        sentence = sentence.replace(position, target.length(), replacement);
        
        // Find the next occurrence of the target word
        position = sentence.find(target);
    }

    return sentence;
}