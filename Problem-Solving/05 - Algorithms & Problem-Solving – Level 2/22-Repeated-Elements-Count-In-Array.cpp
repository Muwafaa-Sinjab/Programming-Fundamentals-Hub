#include <iostream>

using namespace std;

void ReadArray(int array[100], int& arrayLength)
{
    cout << "Enter number of elements: ";
    cin >> arrayLength;

    cout << "\nEnter array elements.." << endl;

    for (int index = 0; index < arrayLength; index++)
    {
        cout << "Element [" << index + 1 << "]: ";
        cin >> array[index];
    }

    cout << endl;
}

int ReadPositiveNumber(string message)
{
    int number = 0;

    do
    {
        cout << message;
        cin >> number;
        cout << "\n";

    } while (number <= 0);

    return number;
}

void PrintArray(int array[100], int arrayLength)
{
    cout << "Original Array: ";

    for (int index = 0; index < arrayLength; index++)
    {
        cout << array[index] << "  ";
    }

    cout << "\n";
}

int CountNumberOccurrences(int numberToCheck, int arrayLength, int array[100])
{
    int count = 0;

    for (int index = 0; index < arrayLength; index++)
    {
        if (numberToCheck == array[index])
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int array[100];
    int arrayLength;
    int numberToCheck;

    ReadArray(array, arrayLength);

    numberToCheck = ReadPositiveNumber("Enter The Number You want to check: ");

    PrintArray(array, arrayLength);

    cout << "Number " << numberToCheck
         << " is repeated "
         << CountNumberOccurrences(numberToCheck, arrayLength, array)
         << " Time(s)." << endl;

    return 0;
}