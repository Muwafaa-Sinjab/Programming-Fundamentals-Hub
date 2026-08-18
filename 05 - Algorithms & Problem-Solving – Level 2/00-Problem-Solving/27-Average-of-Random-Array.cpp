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

int SumArray(int array[100], int arrayLength)
{
    int sum = 0;

    for (int index = 0; index < arrayLength; index++)
    {
        sum += array[index];
    }

    return sum;
}

float AverageOfArray(int array[100], int arrayLength)
{
    return SumArray(array, arrayLength) / arrayLength;
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100];
    int arrayLength;

    FillArray(array, arrayLength);

    PrintArray(array, arrayLength);

    cout << "\n\nAverage of the Array is: "
         << AverageOfArray(array, arrayLength);

    return 0;
}