#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrimeStatus
{
    Prime = 1,
    NotPrime = 2
};

int RandomNumber(int from, int to)
{
    int randomNumber = rand() % (to - from + 1) + from;

    return randomNumber;
}

void FillArrayWithRandomNumbers(int array[100], int& arrayLength)
{
    cout << "Enter Number Of Elements: ";
    cin >> arrayLength;

    for (int index = 0; index < arrayLength; index++)
    {
        array[index] = RandomNumber(1, 100);
    }
}

void PrintArray(int array[100], int arrayLength)
{
    for (int index = 0; index < arrayLength; index++)
    {
        cout << array[index] << " ";
    }

    cout << "\n";
}

void AddArrayElement(int number, int array[100], int& arrayLength)
{
    arrayLength++;
    array[arrayLength - 1] = number;
}

enPrimeStatus CheckPrime(int number)
{
    if (number < 2)
    {
        return enPrimeStatus::NotPrime;
    }

    int maxDivisor = sqrt(number);

    for (int divisor = 2; divisor <= maxDivisor; divisor++)
    {
        if (number % divisor == 0)
        {
            return enPrimeStatus::NotPrime;
        }
    }

    return enPrimeStatus::Prime;
}

void CopyPrimeNumbers(
    int sourceArray[100],
    int destinationArray[100],
    int sourceArrayLength,
    int& destinationArrayLength)
{
    for (int index = 0; index < sourceArrayLength; index++)
    {
        if (CheckPrime(sourceArray[index]) == enPrimeStatus::Prime)
        {
            AddArrayElement(
                sourceArray[index],
                destinationArray,
                destinationArrayLength);
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int sourceArray[100];
    int sourceArrayLength = 0;

    FillArrayWithRandomNumbers(sourceArray, sourceArrayLength);

    int destinationArray[100];
    int destinationArrayLength = 0;

    cout << "\nArray 1 Elements:\n";
    PrintArray(sourceArray, sourceArrayLength);

    CopyPrimeNumbers(
        sourceArray,
        destinationArray,
        sourceArrayLength,
        destinationArrayLength);

    cout << "Array 2 Prime Numbers:\n";
    PrintArray(destinationArray, destinationArrayLength);

    return 0;
}