#include <iostream>
#include <iomanip>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

// ===== Function Prototypes =====
int getRandomNumber(int from, int to);
void fillMatrixWithRandomNumbers(int matrix[3][3], short rows, short cols);
int getMatrixSum(int matrix[3][3], short rows, short cols);
bool areMatricesEqualBySum(int matrix1[3][3], int matrix2[3][3], short rows, short cols);
void printMatrix(int matrix[3][3], short rows, short cols);

// ===== main =====
int main()
{
    // Seed the random number generator
    srand((unsigned)time(NULL));

    int numberMatrix1[3][3];
    int numberMatrix2[3][3];

    fillMatrixWithRandomNumbers(numberMatrix1, 3, 3);
    cout << "\nMatrix 1:\n";
    printMatrix(numberMatrix1, 3, 3);

    fillMatrixWithRandomNumbers(numberMatrix2, 3, 3);
    cout << "\nMatrix 2:\n";
    printMatrix(numberMatrix2, 3, 3);

    // Check if the sums of both matrices are equal
    if (areMatricesEqualBySum(numberMatrix1, numberMatrix2, 3, 3))
        cout << "\nYes, Matrices have the SAME SUM." << endl;
    else
        cout << "\nNO, Matrices are NOT equal." << endl;

    return 0;
}

// ===== High / Mid Level Functions =====

// Fill the matrix with random numbers
void fillMatrixWithRandomNumbers(int matrix[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = getRandomNumber(1, 10);
        }
    }
}

// Compare the total sum of two matrices
bool areMatricesEqualBySum(int matrix1[3][3], int matrix2[3][3], short rows, short cols)
{
    return getMatrixSum(matrix1, rows, cols) == getMatrixSum(matrix2, rows, cols);
}

// Calculate the total sum of all elements in the matrix
int getMatrixSum(int matrix[3][3], short rows, short cols)
{
    int totalSum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0;