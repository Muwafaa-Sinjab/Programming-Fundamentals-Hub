#include <iostream>
#include <string>

using namespace std;

long long ReadPositiveNumber(string message)
{
    int number = 0;

    do
    {
        cout << message;
        cin >> number;

    } while (number <= 0);

    return number;
}

int CountDigitFrequency(long long number, short digitToCheck)
{
    int digit = 0;
    int frequency = 0;

    while (number > 0)
    {
        digit = number % 10;
        number = number / 10;

        if (digit == digitToCheck)
            frequency++;
    }

    return frequency;
}

int main()
{
    long long number = ReadPositiveNumber("Enter Positive Number: ");
    short digitToCheck = ReadPositiveNumber("Enter the digit to check: ");

    int frequency = CountDigitFrequency(number, digitToCheck);

    cout << "\nDigit " << digitToCheck
         << " Frequency is "
         << frequency
         << " Time(s)." << endl;

    return 0;
}