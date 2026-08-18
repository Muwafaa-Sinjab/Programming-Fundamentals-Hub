#include <iostream>
#include <iomanip>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int getRandomNumber(int from, int to);
void fillMatrixWithRandomNumbers(int matrix[3][3], short rows, short cols);
void printMatrix(int matrix[3][3], short rows, short cols);
bool isNumberInMatrix(int matrix[3][3], short rows, short cols, int numberToSearch);
void printIntersectedNumbers(int matrix1[3][3], int matrix2[3][3], short rows, short cols);

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

    cout << "\nThe intersected Numbers of these 2 matrices are:\n";
    printIntersectedNumbers(numberMatrix1, numberMatrix2, 3, 3);
    cout << endl;

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

bool isNumberInMatrix(int matrix[3][3], short rows, short cols, int numberToSearch)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == numberToSearch)
                return true;
        }
    }
    return false;
}

void printIntersectedNumbers(int matrix1[3][3], int matrix2[3][3], short rows, short cols)
{   
    int currentNumber;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            currentNumber = matrix1[i][j];
            
            // Check if the current element from matrix1 exists anywhere in matrix2
            if (isNumberInMatrix(matrix2, rows, cols, currentNumber))
            {
                cout << setw(2) << currentNumber << "  ";
            }
        }
    }
}

int getRandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}