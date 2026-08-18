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

void PrintReversedOrder(int number)
{
    int digit = 0;

    do
    {
        digit = number % 10;
        number = number / 10;

        cout << digit << endl;

    } while (number > 0);
}

int main()
{
    PrintReversedOrder(ReadPositiveNumber("Please enter a positive number: "));

    return 0;
}