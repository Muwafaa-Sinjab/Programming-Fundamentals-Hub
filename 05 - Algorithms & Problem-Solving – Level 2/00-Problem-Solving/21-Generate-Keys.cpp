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
            return char(RandomNumber(65, 90));
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

int ReadPositiveNumber(string message)
{
    int number = 0;

    do
    {
        cout << message;
        cin >> number;

    } while (number < 0);

    return number;
}

string GenerateWord(enCharType charType, short length)
{
    string word = "";

    for (int index = 1; index <= length; index++)
    {
        word += GetRandomCharacter(charType);
    }

    return word;
}

string GenerateKey()
{
    string key = "";

    key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key += GenerateWord(enCharType::CapitalLetter, 4);

    return key;
}

void GenerateKeys(short numberOfKeys)
{
    for (int keyIndex = 1; keyIndex <= numberOfKeys; keyIndex++)
    {
        cout << "Key[" << keyIndex << "] : " << GenerateKey() << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    GenerateKeys(ReadPositiveNumber("Enter a Number Key: "));

    return 0;
}