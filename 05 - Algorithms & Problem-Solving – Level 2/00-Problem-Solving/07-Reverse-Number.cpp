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

    } while (number <= 0);

    return number;
}

int ReverseNumber(int number)
{
    int reversedNumber = 0;
    int digit = 0;

    do
    {
        digit = number % 10;
        number = number / 10;
        reversedNumber = reversedNumber * 10 + digit;

    } while (number > 0);

    return reversedNumber;
}

int main()
{
    int number = ReadPositiveNumber("Please enter a positive number: ");
    int reversedNumber = ReverseNumber(number);

    cout << "The Reverse of the Number is: " << reversedNumber;

    return 0;
}