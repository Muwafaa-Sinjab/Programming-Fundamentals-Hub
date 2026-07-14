#include <iostream>
#include <iomanip>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

// ===== Function Prototypes =====
int getRandomNumber(int from, int to);
void fillMatrixWithRandomNumbers(int matrix[3][3], short rows, short cols);
void multiplyMatricesElementByElement(int matrix1[3][3], int matrix2[3][3], int resultMatrix[3][3], short rows, short cols);
void printMatrix(int matrix[3][3], short rows, short cols);

// ===== main =====
int main()
{
    // Seed the random number generator
    srand((unsigned)time(NULL));

    int numberMatrix1[3][3];
    int numberMatrix2[3][3];
    int resultMatrix[3][3];

    fillMatrixWithRandomNumbers(numberMatrix1, 3, 3);
    fillMatrixWithRandomNumbers(numberMatrix2, 3, 3);

    cout << "\nMatrix 1:" << endl;
    printMatrix(numberMatrix1, 3, 3);

    cout << "\nMatrix 2:" << endl;
    printMatrix(numberMatrix2, 3, 3);

    // Multiply matrices element by element
    multiplyMatricesElementByElement(numberMatrix1, numberMatrix2, resultMatrix, 3, 3);

    cout << "\nResults:" << endl;
    printMatrix(resultMatrix, 3, 3);

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

// Multiply each cell in matrix1 by the same cell in matrix2
void multiplyMatricesElementByElement(int matrix1[3][3], int matrix2[3][3], int resultMatrix[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            resultMatrix[i][j] = matrix1[i][j] * matrix2[i][j];
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
            cout << setw(2) << setfill('0') << matrix[i][j] << "  ";
        }
        cout << endl;
    }
}

// ===== Low Level Function =====

// Generate a random number between "from" and "to"
int getRandomNumber(int from, int to)
{
    int randomNumber = rand() % (to - from + 1) + from;
    return randomNumber;
}