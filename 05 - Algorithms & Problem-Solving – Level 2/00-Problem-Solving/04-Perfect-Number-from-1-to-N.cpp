#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string message)
{
    int number = 0;

    cout << message;
    cin >> number;

    return number;
}

bool CheckPerfectNumber(int number)
{
    int sum = 0;

    for (int divisor = 1; divisor < number; divisor++)
    {
        if (number % divisor == 0)
        {
            sum += divisor;
        }
    }

    return sum == number;
}

void PrintPerfectNumbersFrom1ToN(int number)
{
    for (int currentNumber = 1; currentNumber <= number; currentNumber++)
    {
        if (CheckPerfectNumber(currentNumber))
        {
            cout << currentNumber << " is a perfect Number." << endl;
        }
    }
}

int main()
{
    PrintPerfectNumbersFrom1ToN(
        ReadPositiveNumber("Please enter a positive number: "));

    return 0;
}