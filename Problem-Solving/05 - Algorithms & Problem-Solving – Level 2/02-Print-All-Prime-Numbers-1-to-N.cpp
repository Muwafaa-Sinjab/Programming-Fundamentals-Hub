#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrimeStatus
{
    Prime = 1,
    NotPrime = 2
};

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

enPrimeStatus CheckPrime(int number)
{
    if (number < 2)
        return enPrimeStatus::NotPrime;

    int maxDivisor = round(number / 2);

    for (int divisor = 2; divisor <= maxDivisor; divisor++)
    {
        if (number % divisor == 0)
            return enPrimeStatus::NotPrime;
    }

    return enPrimeStatus::Prime;
}

void PrintPrimeNumbersFrom1ToN(int number)
{
    cout << "\nPrime Numbers from 1 to " << number << ":\n" << endl;

    for (int currentNumber = 1; currentNumber <= number; currentNumber++)
    {
        switch (CheckPrime(currentNumber))
        {
            case enPrimeStatus::Prime:
                cout << "Number " << currentNumber << " is Prime\n";
                break;
        }
    }
}

int main()
{
    PrintPrimeNumbersFrom1ToN(
        ReadPositiveNumber("Please enter a positive number?"));

    return 0;
}