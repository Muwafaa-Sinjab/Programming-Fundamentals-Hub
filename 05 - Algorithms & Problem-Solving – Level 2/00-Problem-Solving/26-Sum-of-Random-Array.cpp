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

int main()
{
    srand((unsigned)time(NULL));

    int array[100];
    int arrayLength;

    FillArray(array, arrayLength);

    PrintArray(array, arrayLength);

    cout << "\n\nSum of the Array is: " << SumArray(array, arrayLength);

    return 0;
}