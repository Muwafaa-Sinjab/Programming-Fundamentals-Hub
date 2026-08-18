#include <iostream>

using namespace std;

void printMatrix(int matrix[3][3], short rows, short cols);
bool isScalarMatrix(int matrix[3][3], short rows, short cols);

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

    if (isScalarMatrix(numberMatrix, 3, 3))
        cout << "\nYes, the matrix is scalar" << endl;
    else
        cout << "\nNo, the matrix is NOT scalar" << endl;

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

bool isScalarMatrix(int matrix[3][3], short rows, short cols)
{
    if (rows != cols)
        return false;

    int firstDiagonalElement = matrix[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {   
            // Diagonal elements must be equal, other elements must be 0
            if (i == j && matrix[i][j] != firstDiagonalElement) return false;
            if (i != j && matrix[i][j] != 0) return false;
        }
    }
    return true;
}