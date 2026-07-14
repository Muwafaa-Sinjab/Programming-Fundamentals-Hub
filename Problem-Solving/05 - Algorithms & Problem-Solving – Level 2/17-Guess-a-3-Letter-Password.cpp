#include <iostream>
#include <string>

using namespace std;

string ReadCapitalLetters(string message)
{
    string password = "";

    cout << message;
    cin >> password;

    return password;
}

bool FindPassword(string password)
{
    int trialCount = 0;
    string currentWord = "";

    for (int firstLetter = 65; firstLetter <= 90; firstLetter++)
    {
        for (int secondLetter = 65; secondLetter <= 90; secondLetter++)
        {
            for (int thirdLetter = 65; thirdLetter <= 90; thirdLetter++)
            {
                trialCount++;

                currentWord += char(firstLetter);
                currentWord += char(secondLetter);
                currentWord += char(thirdLetter);

                cout << "Trail [ " << trialCount << " ]: " << currentWord << endl;

                if (password == currentWord)
                {
                    cout << "\nPassword is " << currentWord << endl;
                    cout << "Found after " << trialCount << " Trail(s).";

                    return true;
                }

                currentWord = "";
            }
        }
    }

    cout << "No True Password";

    return false;
}

int main()
{
    FindPassword(ReadCapitalLetters("Enter 3 Capital Letters: "));

    return 0;
}