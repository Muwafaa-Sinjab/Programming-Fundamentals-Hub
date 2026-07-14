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

void FillArrayWithRandomNumbers(int array[100], int& arrayLength)
{
    for (int index = 0; index < arrayLength; index++)
    {
        array[index] = RandomNumber(1, 100);
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

void CopyArrayInReverseOrder(
    int sourceArray[100],
    int destinationArray[100],
    int arrayLength)
{
    for (int index = 0; index < arrayLength; index++)
    {
        destinationArray[index] = sourceArray[arrayLength - 1 - index];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int sourceArray[100];
    int destinationArray[100];

    int arrayLength = ReadPositiveNumber("Enter Number Of Elements: ");

    FillArrayWithRandomNumbers(sourceArray, arrayLength);

    cout << "\nArray 1 Elements:\n";
    PrintArrayElements(sourceArray, arrayLength);

    CopyArrayInReverseOrder(sourceArray, destinationArray, arrayLength);

    cout << "\nArray 2 Reverse Elements:\n";
    PrintArrayElements(destinationArray, arrayLength);

    return 0;
}