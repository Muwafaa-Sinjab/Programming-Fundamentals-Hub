#include <iostream>

using namespace std;

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

int CountDigitFrequency(short digitToCheck, int number)
{
    int frequencyCount = 0;
    int digit = 0;

    while (number > 0)
    {
        digit = number % 10;
        number = number / 10;

        if (digitToCheck == digit)
        {
            frequencyCount++;
        }
    }

    return frequencyCount;
}

void PrintAllDigitFrequency(int number)
{
    cout << endl;

    for (int digit = 0; digit < 10; digit++)
    {
        short digitFrequency = CountDigitFrequency(digit, number);

        if (digitFrequency > 0)
        {
            cout << "Digit " << digit
                 << " Frequency is "
                 << digitFrequency
                 << " Time(s).\n";
        }
    }
}

int main()
{
    int number = ReadPositiveNumber("Please enter the main number: ");

    PrintAllDigitFrequency(number);

    cout << endl;

    return 0;
}