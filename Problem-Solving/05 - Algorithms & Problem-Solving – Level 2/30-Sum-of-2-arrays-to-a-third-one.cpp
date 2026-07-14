#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int RandomNumber(int from, int to)
{
    int randomNumber = rand() % (to - from + 1) + from;

    return randomNumber;
}

int ReadPositiveNumber(string message)
{
    int number = 0;

    do
    {
        cout << message;
        cin >> number;

    } while (number <= 0);

    return number;
}

void FillArrayWithRandomNumbers(int array[100], int arrayLength)
{
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

void SumArrays(
    int firstArray[100],
    int secondArray[100],
    int arrayLength,
    int sumArray[100])
{
    for (int index = 0; index < arrayLength; index++)
    {
        sumArray[index] = firstArray[index] + secondArray[index];
        cout << sumArray[index] << "  ";
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int firstArray[100];
    int secondArray[100];
    int sumArray[100];

    int arrayLength = ReadPositiveNumber("Enter Number Of Elements: ");

    FillArrayWithRandomNumbers(firstArray, arrayLength);
    FillArrayWithRandomNumbers(secondArray, arrayLength);

    cout << "\nArray 1 Elements:\n";
    PrintArrayElements(firstArray, arrayLength);

    cout << "\nArray 2 Elements:\n";
    PrintArrayElements(secondArray, arrayLength);

    cout << "\nSum of Array 1 and Array 2 Elements:\n";
    SumArrays(firstArray, secondArray, arrayLength, sumArray);

    return 0;
}