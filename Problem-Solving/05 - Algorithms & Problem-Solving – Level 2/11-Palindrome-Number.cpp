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

void PrintResult(int number, int reversedNumber)
{
    if (number == reversedNumber)
        cout << "\nYes, it is a Palindrome number." << endl;
    else
        cout << "\nNo, it is NOT a Palindrome number.\n";
}

int main()
{
    int number = ReadPositiveNumber("Enter Positive Number: ");
    int reversedNumber = ReverseNumber(number);

    PrintResult(number, reversedNumber);

    return 0;
}