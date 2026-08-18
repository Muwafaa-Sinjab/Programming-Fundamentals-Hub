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

void PrintArrayElements(int array[100], int arrayLength)
{
    for (int index = 0; index < arrayLength; index++)
    {
        cout << array[index] << " ";
    }

    cout << endl;
}

void CopyArray(int sourceArray[100], int destinationArray[100], int arrayLength)
{
    for (int index = 0; index < arrayLength; index++)
    {
        destinationArray[index] = sourceArray[index];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int sourceArray[100];
    int sourceArrayLength;

    FillArrayWithRandomNumbers(sourceArray, sourceArrayLength);

    int destinationArray[100];

    CopyArray(sourceArray, destinationArray, sourceArrayLength);

    cout << "\nArray 1 Elements:\n";
    PrintArrayElements(sourceArray, sourceArrayLength);

    cout << "\nArray 2 Elements After Copy:\n";
    PrintArrayElements(destinationArray, sourceArrayLength);

    return 0;
}