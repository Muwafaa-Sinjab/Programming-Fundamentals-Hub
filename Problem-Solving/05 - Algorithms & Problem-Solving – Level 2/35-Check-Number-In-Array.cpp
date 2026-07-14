#include <iostream>

using namespace std;

int RandomNumber(int from, int to)
{
    int randomNumber = rand() % (to - from + 1) + from;

    return randomNumber;
}

void FillArrayWithRandomNumbers(int array[100], int& arrayLength)
{
    cout << "Enter number of elements: ";
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

bool IsNumberInArray(int number, int array[100], int arrayLength)
{
    return FindNumberPositionInArray(number, array, arrayLength) != -1;
}

int ReadNumber()
{
    int number;

    cout << "Please enter a number to search for? ";
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

    if (!IsNumberInArray(number, array, arrayLength))
    {
        cout << "No, Number is not Found :-(" << endl;
    }
    else
    {
        cout << "Yes, Number is Found :-)" << endl;
    }

    return 0;
}