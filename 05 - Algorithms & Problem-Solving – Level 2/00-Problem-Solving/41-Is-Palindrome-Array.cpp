#include <iostream>

using namespace std;

void FillArrayWithNumbers(int array[100], int& arrayLength)
{
    arrayLength = 6;

    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 30;
    array[4] = 20;
    array[5] = 10;
}

void PrintArrayElements(int array[100], int arrayLength)
{
    for (int index = 0; index < arrayLength; index++)
    {
        cout << array[index] << " ";
    }

    cout << endl;
}

bool IsPalindromeArray(int array[100], int arrayLength)
{
    for (int index = 0; index < arrayLength; index++)
    {
        if (array[index] != array[arrayLength - index - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int array[100];
    int arrayLength = 0;

    FillArrayWithNumbers(array, arrayLength);

    cout << "Array Elements:\n";
    PrintArrayElements(array, arrayLength);

    if (IsPalindromeArray(array, arrayLength))
    {
        cout << "\nYes, array is Palindrome.\n";
    }
    else
    {
        cout << "\nNo, array is NOT Palindrome.\n";
    }

    return 0;
}