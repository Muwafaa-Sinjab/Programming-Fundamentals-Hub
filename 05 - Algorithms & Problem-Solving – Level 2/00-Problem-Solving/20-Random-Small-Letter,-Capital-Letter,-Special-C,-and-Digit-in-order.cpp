#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

enum enCharType
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};

int RandomNumber(int from, int to)
{
    int randomNumber = rand() % (to - from + 1) + from;

    return randomNumber;
}

char GetRandomCharacter(enCharType charType)
{
    switch (charType)
    {
        case enCharType::SmallLetter:
        {
            return char(RandomNumber(97, 122));
        }

        case enCharType::CapitalLetter:
        {
            return char(RandomNumber(65, 99));
        }

        case enCharType::SpecialCharacter:
        {
            return char(RandomNumber(33, 47));
        }

        case enCharType::Digit:
        {
            return char(RandomNumber(48, 57));
        }
    }

    return 'c';
}

int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
    cout << GetRandomCharacter(enCharType::Digit) << endl;

    return 0;
}