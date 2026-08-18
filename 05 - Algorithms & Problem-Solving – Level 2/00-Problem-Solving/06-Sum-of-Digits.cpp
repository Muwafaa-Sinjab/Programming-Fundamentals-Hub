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

int SumOfDigits(int number)
{
    int sum = 0;
    int digit = 0;

    do
    {
        digit = number % 10;
        number = number / 10;
        sum += digit;

    } while (number > 0);

    return sum;
}

void PrintSumOfDigits(int sum)
{
    cout << "Sum of Digits is: " << sum << endl;
}

int main()
{
    int number = ReadPositiveNumber("Please enter a positive number: ");
    int sum = SumOfDigits(number);

    PrintSumOfDigits(sum);

    return 0;
}