#include <iostream>

using namespace std;

int RandomNumber(int from, int to)
{
    int randomNumber = rand() % (to - from + 1) + from;

    return randomNumber;
}

void FillArrayWithRandomNumbers(int array[100], int& arrayLength)
{
    cout << "\nEnter number of elements:\n";
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

int ReadNumber()
{
    int number;

    cout << "\nPlease enter a number to search for? ";
    cin >> number;

    return number;
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100];
    int arrayLength;

    FillArrayWithRandomNumbers(array, arrayLength);

    cout << "\nArray 1 Elements:\n";
    PrintArray(array, arrayLength);

    int number = ReadNumber();

    cout << "\nNumber you are looking for is: " << number << endl;

    short numberPosition = FindNumberPositionInArray(number, array, arrayLength);

    if (numberPosition == -1)
    {
        cout << "The number is not found :-(\n";
    }
    else
    {
        cout << "The number found at position: " << numberPosition << endl;
        cout << "The number found its order  : " << numberPosition + 1 << endl;
    }

    return 0;
}