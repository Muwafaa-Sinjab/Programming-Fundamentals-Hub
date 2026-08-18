#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int RandomNumber(int from, int to)
{
    int randomNumber = rand() % (to - from + 1) + from;

    return randomNumber;
}

void FillArrayWithNumbers(int array[100], int& arrayLength)
{
    arrayLength = 10;

    array[0] = 10;
    array[1] = 10;
    array[2] = 10;
    array[3] = 50;
    array[4] = 50;
    array[5] = 70;
    array[6] = 70;
    array[7] = 70;
    array[8] = 70;
    array[9] = 90;
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

short FindNumberPositionInArray(int number, int array[100], int arrayLength)
{
    for (int index = 0; index < arrayLength; index++)
    {
        if (array[index] == number)
        {
            return index;
        }
    }

    return -1;
}

bool IsNumberInArray(int number, int array[100], int arrayLength)
{
    return FindNumberPositionInArray(number, array, arrayLength) != -1;
}

void CopyDistinctNumbers(
    int sourceArray[100],
    int destinationArray[100],
    int sourceArrayLength,
    int& destinationArrayLength)
{
    for (int index = 0; index < sourceArrayLength; index++)
    {
        if (!IsNumberInArray(
                sourceArray[index],
                destinationArray,
                destinationArrayLength))
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

    FillArrayWithNumbers(sourceArray, sourceArrayLength);

    int destinationArray[100];
    int destinationArrayLength = 0;

    cout << "Array 1 Elements:\n";
    PrintArray(sourceArray, sourceArrayLength);

    CopyDistinctNumbers(
        sourceArray,
        destinationArray,
        sourceArrayLength,
        destinationArrayLength);

    cout << "\nArray 2 Distinct Numbers:\n";
    PrintArray(destinationArray, destinationArrayLength);

    return 0;
}