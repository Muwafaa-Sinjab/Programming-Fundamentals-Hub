#include <iostream>
#include <string>

using namespace std;

void PrintLettersFromAAAtoZZZ()
{
    cout << "\n";

    string word = "";

    for (int firstLetter = 65; firstLetter <= 90; firstLetter++)
    {
        for (int secondLetter = 65; secondLetter <= 90; secondLetter++)
        {
            for (int thirdLetter = 65; thirdLetter <= 90; thirdLetter++)
            {
                word += char(firstLetter);
                word += char(secondLetter);
                word += char(thirdLetter);

                cout << word << endl;

                word = "";
            }
        }

        cout << "\n--------------------------\n";
    }
}

int main()
{
    PrintLettersFromAAAtoZZZ();

    return 0;
}