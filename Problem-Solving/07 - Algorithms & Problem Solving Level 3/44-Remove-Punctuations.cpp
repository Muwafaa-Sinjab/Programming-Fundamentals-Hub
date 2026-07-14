#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string removePunctuationMarks(string sentence);

int main()
{   
    string text = "My Name is Muwafaa, I'm from Syria, and it's a nice place";

    cout << text << endl;
    cout << removePunctuationMarks(text) << endl;
    
    return 0;
}

string removePunctuationMarks(string sentence)
{   
    string resultStr = "";
    
    for (size_t i = 0; i < sentence.length(); i++)
    {
        if (!ispunct(static_cast<unsigned char>(sentence[i])))
        {
            resultStr = resultStr + sentence[i];
        }
    }
    return resultStr;
}