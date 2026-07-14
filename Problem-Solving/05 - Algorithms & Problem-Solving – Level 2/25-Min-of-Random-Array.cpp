#include <iostream>

using namespace std;

int RandomNumber(int from, int to)
{
    int randomNumber = rand() % (to - from + 1) + from;

    return randomNumber;
}

void FillArray(int array[100], int& arrayLength)
{
    cout << "Enter Number of Elemnts: ";
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
        cout << array[index] << "  ";
    }
}

int FindMinNumber(int array[100], int arrayLength)
{
    int minNumber = array[0];

    for (int index = 0; index < arrayLength; index++)
    {
        if (array[index] < minNumber)
        {
            minNumber = array[index];
        }
    }

    return minNumber;
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100];
    int arrayLength;

    FillArray(array, arrayLength);

    PrintArray(array, arrayLength);

    cout << "\nMin Number is: " << FindMinNumber(array, arrayLength);

    return 0;
}