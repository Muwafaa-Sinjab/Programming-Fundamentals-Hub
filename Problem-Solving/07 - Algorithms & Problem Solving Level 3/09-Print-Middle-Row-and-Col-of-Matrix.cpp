#include <iostream>
#include <iomanip>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

// ===== Function Prototypes =====
int getRandomNumber(int from, int to);
void fillMatrixWithRandomNumbers(int matrix[3][3], short rows, short cols);
int getMatrixElement(int matrix[3][3], short rowIndex, short colIndex);
void printMiddleRow(int matrix[3][3], short rows, short cols);
void printMiddleCol(int matrix[3][3], short rows, short cols);
void printMatrix(int matrix[3][3], short rows, short cols);

// ===== main =====
int main()
{
    // Seed the random number generator
    srand((unsigned)time(NULL));

    int numberMatrix[3][3];

    fillMatrixWithRandomNumbers(numberMatrix, 3, 3);

    cout << "\nMatrix:\n";
    printMatrix(numberMatrix, 3, 3);

    cout << "\nMiddle Row of Matrix:\n";
    printMiddleRow(numberMatrix, 3, 3);

    cout << "\nMiddle Cols of Matrix:\n";
    printMiddleCol(numberMatrix, 3, 3);

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

// Print only the middle row of the matrix
void printMiddleRow(int matrix[3][3], short rows, short cols)
{
    short middleRowIndex = rows / 2;
    for (int j = 0; j < cols; j++)
    {
        cout << setw(2) << setfill('0') << getMatrixElement(matrix, middleRowIndex, j) << "  ";
    }
    cout << endl;
}

// Print only the middle column of the matrix
void printMiddleCol(int matrix[3][3], short rows, short cols)
{
    short middleColIndex = cols / 2;
    for (int i = 0; i < rows; i++)
    {
        cout << setw(2) << setfill('0') << getMatrixElement(matrix, i, middleColIndex) << "  ";
    }
    cout << endl;
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

// ===== Low Level Functions =====

// Get a specific element from the matrix using indices
int getMatrixElement(int matrix[3][3], short rowIndex, short colIndex)
{
    return matrix[rowIndex][colIndex];
}

// Generate a random number between "from" and "to"
int getRandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}