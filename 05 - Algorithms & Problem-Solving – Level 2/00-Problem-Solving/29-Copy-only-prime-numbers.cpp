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

void FillArrayWithRandomNumbers(int sourceArray[100], int& arrayLength)
{
    cout << "Enter Number Of Elements: ";
    cin >> arrayLength;

    for (int index = 0; index < arrayLength; index++)
    {
        sourceArray[index] = RandomNumber(1, 100);
    }
}

void PrintArrayElements(int array[100], int arrayLength)
{
    for (int index = 0; index < arrayLength; index++)
    {
        cout << array[index] << " ";
    }

    cout << endl;
}

enPrimeStatus CheckPrime(int number)
{
    if (number < 2)
        return enPrimeStatus::NotPrime;

    int maxDivisor = sqrt(number);

    for (int divisor = 2; divisor <= maxDivisor; divisor++)
    {
        if (number % divisor == 0)
            return enPrimeStatus::NotPrime;
    }

    return enPrimeStatus::Prime;
}

void CopyOnlyPrimeNumbers(
    int sourceArray[100],
    int destinationArray[100],
    int sourceArrayLength,
    int& destinationArrayLength)
{
    int destinationIndex = 0;

    for (int index = 0; index < sourceArrayLength; index++)
    {
        if (CheckPrime(sourceArray[index]) == enPrimeStatus::Prime)
        {
            destinationArray[destinationIndex] = sourceArray[index];
            destinationIndex++;
        }
    }

    destinationArrayLength = destinationIndex;
}

int main()
{
    srand((unsigned)time(NULL));

    int sourceArray[100];
    int sourceArrayLength;

    FillArrayWithRandomNumbers(sourceArray, sourceArrayLength);

    int destinationArray[100];
    int destinationArrayLength;

    CopyOnlyPrimeNumbers(
        sourceArray,
        destinationArray,
        sourceArrayLength,
        destinationArrayLength);

    cout << "\nArray 1 Elements:\n";
    PrintArrayElements(sourceArray, sourceArrayLength);

    cout << "\nPrime Numbers in Array 2:\n";
    PrintArrayElements(destinationArray, destinationArrayLength);

    return 0;
}