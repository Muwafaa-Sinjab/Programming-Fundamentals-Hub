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
            cout << setw(3) << matrix[i][j] << "   ";
        }
        cout << endl;
    }
}

// Calculate the sum of one specific column
int getColSum(int matrix[3][3], short colIndex, short rows)
{
    int totalSum = 0;

    for (int i = 0; i < rows; i++)
    {
        totalSum += matrix[i][colIndex];
    }

    return totalSum;
}

// Save the sum of each column into a 1D array
void saveColsSumsToArray(int sumsArray[100], int matrix[3][3], short rows, short cols)
{
    for (int j = 0; j < cols; j++)
    {
        sumsArray[j] = getColSum(matrix, j, rows);
    }
}

// Print the calculated sums from the 1D array
void printColsSums(short cols, int sumsArray[100])
{
    cout << "\nThe following are the sum of each column in matrix: " << endl;

    for (int j = 0; j < cols; j++)
    {
        cout << "Column " << j + 1 << " sum = " << sumsArray[j] << endl;
    }
}

int main()
{
    // Seed the random number generator
    srand((unsigned)time(NULL));

    int numberMatrix[3][3];
    int colsSumsArray[100];

    fillMatrixWithRandomNumbers(numberMatrix, 3, 3);

    cout << "The following is a 3x3 Matrix:" << endl;
    printMatrix(numberMatrix, 3, 3);

    // Calculate sums and save them, then print
    saveColsSumsToArray(colsSumsArray, numberMatrix, 3, 3);
    printColsSums(3, colsSumsArray);

    return 0;
}