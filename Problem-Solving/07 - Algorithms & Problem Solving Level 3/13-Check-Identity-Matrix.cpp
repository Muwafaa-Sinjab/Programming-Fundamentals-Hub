#include <iostream>

using namespace std;

void printMatrix(int matrix[3][3], short rows, short cols);
bool isIdentityMatrix(int matrix[3][3], short rows, short cols);

int main()
{
    int numberMatrix[3][3] = {{1, 4, 0}, {1, 1, 0}, {5, 6, 1}};

    cout << "\nMatrix:\n";
    printMatrix(numberMatrix, 3, 3);

    if (isIdentityMatrix(numberMatrix, 3, 3))
        cout << "\nYes, the matrix is identity" << endl;
    else
        cout << "\nNo, the matrix is NOT identity" << endl;

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

bool isIdentityMatrix(int matrix[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // Check diagonal cells are 1, and other cells are 0
            if (i == j && matrix[i][j] != 1) return false;
            if (i != j && matrix[i][j] != 0) return false;
        }
    }
    return true;
}