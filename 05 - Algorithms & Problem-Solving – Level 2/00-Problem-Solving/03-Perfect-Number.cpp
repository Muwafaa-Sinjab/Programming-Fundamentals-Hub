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

void PrintPerfectNumber(int number)
{
    if (CheckPerfectNumber(number))
        cout << number << " is a perfect Number." << endl;
    else
        cout << number << " is not a perfect Number." << endl;
}

int main()
{
    PrintPerfectNumber(ReadPositiveNumber("Please enter a positive number: "));

    return 0;
}