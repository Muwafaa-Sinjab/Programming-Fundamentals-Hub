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

void PrintNumberPattern(int number)
{
    for (int currentNumber = 1; currentNumber <= number; currentNumber++)
    {
        for (int count = 1; count <= currentNumber; count++)
        {
            cout << currentNumber;
        }

        cout << endl;
    }
}

int main()
{
    PrintNumberPattern(ReadPositiveNumber("Enter Positive Number: "));

    return 0;
}