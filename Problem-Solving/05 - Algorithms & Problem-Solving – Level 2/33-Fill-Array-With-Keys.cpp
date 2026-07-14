#include <iostream>

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
            return char(RandomNumber(97, 122));

        case enCharType::CapitalLetter:
            return char(RandomNumber(65, 90));

        case enCharType::SpecialCharacter:
            return char(RandomNumber(33, 47));

        case enCharType::Digit:
            return char(RandomNumber(48, 57));
    }

    return '\0';
}

void PrintStringArray(string array[100], int arrayLength)
{
    cout << "\nArray Elements:\n\n";

    for (int index = 0; index < arrayLength; index++)
    {
        cout << "Array[" << index << "] : ";
        cout << array[index] << "\n";
    }

    cout << "\n";
}

string GenerateWord(enCharType charType, short length)
{
    string word;

    for (int index = 1; index <= length; index++)
    {
        word += GetRandomCharacter(charType);
    }

    return word;
}

string GenerateKey()
{
    string key;

    key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key += GenerateWord(enCharType::CapitalLetter, 4);

    return key;
}

void FillArrayWithKeys(string array[100], int arrayLength)
{
    for (int index = 0; index < arrayLength; index++)
    {
        array[index] = GenerateKey();
    }
}

int ReadPositiveNumber(string message)
{
    int number = 0;

    do
    {
        cout << message << endl;
        cin >> number;

    } while (number <= 0);

    return number;
}

int main()
{
    srand((unsigned)time(NULL));

    string array[100];
    int arrayLength = ReadPositiveNumber("How many keys do you want to generate?\n");

    FillArrayWithKeys(array, arrayLength);

    PrintStringArray(array, arrayLength);

    return 0;
}