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

int CountNegativeNumbers(int array[100], int arrayLength)
{
    int negativeCount = 0;

    for (int index = 0; index < arrayLength; index++)
    {
        if (array[index] < 0)
        {
            negativeCount++;
        }
    }

    return negativeCount;
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100];
    int arrayLength = 0;

    FillArrayWithRandomNumbers(array, arrayLength);

    cout << "Array Elements:\n";
    PrintArrayElements(array, arrayLength);

    cout << "\nNegative Numbers Count is: "
         << CountNegativeNumbers(array, arrayLength);

    return 0;
}