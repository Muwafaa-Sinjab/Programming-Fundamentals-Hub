#include <iostream>
#include <iomanip>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

// Generate a random number between "from" and "to"
int getRandomNumber(int from, int to)
{
    int randomNumber = rand() % (to - from + 1) + from;
    return randomNumber;
}

// Fill the matrix with random numbers
void fillMatrixWithRandomNumbers(int matrix[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = getRandomNumber(1, 100);
        }
    }
}

// Print the matrix elements
void printMatrix(int matrix[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(3) << matrix[i][j] << "    ";
        }
        cout << endl;
    }
}

// Calculate the sum of one specific row
int getRowSum(int matrix[3][3], short rowIndex, short cols)
{
    int totalSum = 0;

    for (int j = 0; j < cols; j++)
    {
        totalSum += matrix[rowIndex][j];
    }

    return totalSum;
}

// Save the sum of each row into a 1D array
void saveRowsSumsToArray(int sumsArray[3], int matrix[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        sumsArray[i] = getRowSum(matrix, i, cols);
    }
}

// Print the calculated sums from the 1D array
void printRowsSums(short rows, int sumsArray[3])
{
    cout << "\nThe following are the sum of each row in matrix:" << endl;

    for (int i = 0; i < rows; i++)
    {
        cout << "Row " << i + 1 << " sum = " << sumsArray[i] << endl;
    }
}

int main()
{
    // Seed the random number generator
    srand((unsigned)time(NULL));

    int numberMatrix[3][3];
    int rowsSumsArray[3];

    fillMatrixWithRandomNumbers(numberMatrix, 3, 3);

    cout << "The following is a 3x3 Matrix:" << endl;
    printMatrix(numberMatrix, 3, 3);

    // Calculate sums and save them, then print
    saveRowsSumsToArray(rowsSumsArray, numberMatrix, 3, 3);
    printRowsSums(3, rowsSumsArray);

    return 0;
}