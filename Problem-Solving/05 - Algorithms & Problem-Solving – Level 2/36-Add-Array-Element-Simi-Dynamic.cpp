#include <iostream>

using namespace std;

int RandomNumber(int from, int to)
{
    int randomNumber = rand() % (to - from + 1) + from;

    return randomNumber;
}

int ReadNumber()
{
    int number;

    cout << "Please enter a number? ";
    cin >> number;

    return number;
}

void AddArrayElement(int number, int array[100], int& arrayLength)
{
    arrayLength++;
    array[arrayLength - 1] = number;
}

void InputUserNumbersInArray(int array[100], int& arrayLength)
{
    bool addMore = true;

    do
    {
        AddArrayElement(ReadNumber(), array, arrayLength);

        cout << "Do you want to add more numbers? [0]:No, [1]:Yes.. ";
        cin >> addMore;

    } while (addMore);
}

void PrintArray(int array[100], int arrayLength)
{
    for (int index = 0; index < arrayLength; index++)
    {
        cout << array[index] << " ";
    }

    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100];
    int arrayLength = 0;

    InputUserNumbersInArray(array, arrayLength);

    cout << "\nArray Length: " << arrayLength << endl;

    cout << "Array Elements: ";
    PrintArray(array, arrayLength);

    return 0;
}