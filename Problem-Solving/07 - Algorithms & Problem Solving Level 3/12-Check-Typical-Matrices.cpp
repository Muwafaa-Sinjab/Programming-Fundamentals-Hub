#include <iostream>
#include <iomanip>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int getRandomNumber(int from, int to);
void fillMatrixWithRandomNumbers(int matrix[3][3], short rows, short cols);
bool areMatricesTypical(int matrix1[3][3], int matrix2[3][3], short rows, short cols);
void printMatrix(int matrix[3][3], short rows, short cols);

int main()
{
    srand((unsigned)time(NULL));

    int numberMatrix1[3][3];
    int numberMatrix2[3][3];

    fillMatrixWithRandomNumbers(numberMatrix1, 3, 3);
    cout << "\nMatrix 1:\n";
    printMatrix(numberMatrix1, 3, 3);

    fillMatrixWithRandomNumbers(numberMatrix2, 3, 3);
    cout << "\nMatrix 2:\n";
    printMatrix(numberMatrix2, 3, 3);

    if (areMatricesTypical(numberMatrix1, numberMatrix2, 3, 3))
        cout << "\nYes, Matrices are equal." << endl;
    else
        cout << "\nNO, Matrices are NOT equal." << endl;

    return 0;
}

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

bool areMatricesTypical(int matrix1[3][3], int matrix2[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // Check cell by cell; returns false immediately if any pair does not match
            if (matrix1[i][j] != matrix2[i][j])
                return false;
        }
    }
    return true;
}

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

int getRandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}