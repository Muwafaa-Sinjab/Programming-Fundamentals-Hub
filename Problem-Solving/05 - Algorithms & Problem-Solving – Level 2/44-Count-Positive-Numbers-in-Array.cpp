#include <iostream>
#include <ctime>

using namespace std;

int RandomNumber(int from, int to)
{
    int randomNumber = rand() % (to - from + 1) + from;

    return randomNumber;
}

void FillArrayWithRandomNumbers(int array[100], int& arrayLength)
{
    cout << "Enter Number of Elements: ";
    cin >> arrayLength;

    for (int index = 0; index < arrayLength; index++)
    {
        array[index] = RandomNumber(-100, 100);
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

int CountPositiveNumbers(int array[100], int arrayLength)
{
    int positiveCount = 0;

    for (int index = 0; index < arrayLength; index++)
    {
        if (array[index] > 0)
        {
            positiveCount++;
        }
    }

    return positiveCount;
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100];
    int arrayLength = 0;

    FillArrayWithRandomNumbers(array, arrayLength);

    cout << "Array Elements:\n";
    PrintArrayElements(array, arrayLength);

    cout << "\nPositive Numbers Count is: "
         << CountPositiveNumbers(array, arrayLength);

    return 0;
}