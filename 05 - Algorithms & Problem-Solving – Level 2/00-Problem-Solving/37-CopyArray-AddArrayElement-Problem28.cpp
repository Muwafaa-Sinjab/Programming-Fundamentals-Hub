#include <iostream>

using namespace std;

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

void CopyArrayByUsingAddArrayElement(
    int sourceArray[100],
    int destinationArray[100],
    int sourceArrayLength,
    int& destinationArrayLength)
{
    for (int index = 0; index < sourceArrayLength; index++)
    {
        AddArrayElement(
            sourceArray[index],
            destinationArray,
            destinationArrayLength);
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

    CopyArrayByUsingAddArrayElement(
        sourceArray,
        destinationArray,
        sourceArrayLength,
        destinationArrayLength);

    cout << "\nArray 1 Elements: ";
    PrintArray(sourceArray, sourceArrayLength);

    cout << "Array 2 Elements: ";
    PrintArray(destinationArray, destinationArrayLength);

    return 0;
}