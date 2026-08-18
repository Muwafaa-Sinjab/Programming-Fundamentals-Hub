#include <iostream>
#include <string>

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

int ReverseNumber(int number)
{
    int digit = 0;
    int reversedNumber = 0;

    while (number > 0)
    {
        digit = number % 10;
        number = number / 10;
        reversedNumber = reversedNumber * 10 + digit;
    }

    return reversedNumber;
}

void PrintDigits(int number)
{
    int digit = 0;

    while (number > 0)
    {
        digit = number % 10;
        number = number / 10;

        cout << digit << endl;
    }
}

int main()
{
    PrintDigits(ReverseNumber(ReadPositiveNumber("Enter Positive Number: ")));

    return 0;
}