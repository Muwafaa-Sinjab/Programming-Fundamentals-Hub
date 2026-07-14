#include <iostream>
#include <string>

using namespace std;

void printMatrix(int matrix[3][3], short rows, short cols);
int countNumberInMatrix(int matrix[3][3], short rows, short cols, int numberToCount);
int readPositiveNumber(string message);

int main()
{
    int numberMatrix[3][3] = 
    {
        {2, 0, 0},
        {0, 2, 0},
        {0, 0, 2}
    };

    cout << "\nMatrix:\n";
    printMatrix(numberMatrix, 3, 3);

    int numberToCount = readPositiveNumber("Enter the Number to count in matrix: ");

    cout << "Number " << numberToCount << " is count in matrix "
         << countNumberInMatrix(numberMatrix, 3, 3, numberToCount) << " time(s)" << endl;

    return 0;
}

void printMatrix(int matrix[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
}

int countNumberInMatrix(int matrix[3][3], short rows, short cols, int numberToCount)
{
    int counter = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {   
            // Increment counter if the element matches the user's input
            if (matrix[i][j] == numberToCount)
                counter++;
        }
    }
    return counter;
}

int readPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}