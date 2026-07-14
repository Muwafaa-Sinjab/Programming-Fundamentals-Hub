#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int RandomNumber(int from, int to)
{
    int randomNumber = rand() % (to - from + 1) + from;

    return randomNumber;
}

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

void FillArrayFrom1ToN(int array[100], int& arrayLength)
{
    for (int index = 0; index < arrayLength; index++)
    {
        array[index] = index + 1;
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

void SwapArrayElements(int& firstValue, int& secondValue)
{
    int temp;

    temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;
}

void ShuffleArray(int array[100], int arrayLength)
{
    for (int index = 0; index < arrayLength; index++)
    {
        SwapArrayElements(
            array[RandomNumber(0, arrayLength - 1)],
            array[RandomNumber(0, arrayLength - 1)]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100];
    int arrayLength = ReadPositiveNumber("Enter Number Of Elements: ");

    FillArrayFrom1ToN(array, arrayLength);

    cout << "\nArray 1 Elements:\n";
    PrintArrayElements(array, arrayLength);

    ShuffleArray(array, arrayLength);

    cout << "\nArray 1 Elements After Shuffle:\n";
    PrintArrayElements(array, arrayLength);

    return 0;
}