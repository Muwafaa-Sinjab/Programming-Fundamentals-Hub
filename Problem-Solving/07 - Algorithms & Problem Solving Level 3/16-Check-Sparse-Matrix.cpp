#include <iostream>

using namespace std;

void printMatrix(int matrix[3][3], short rows, short cols);
int countNumberInMatrix(int matrix[3][3], short rows, short cols, int numberToCount);
bool isSparseMatrix(int matrix[3][3], short rows, short cols);

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

    if (isSparseMatrix(numberMatrix, 3, 3))
        cout << "YES: It's sparse Matrix" << endl;
    else
        cout << "NO: It's not sparse Matrix" << endl;

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
            if (matrix[i][j] == numberToCount)
                counter++;
        }
    }
    return counter;
}

bool isSparseMatrix(int matrix[3][3], short rows, short cols)
{
    short matrixSize = rows * cols;
    
    // Matrix is sparse if the count of zeros is greater than half of its total elements
    return (countNumberInMatrix(matrix, rows, cols, 0) > (matrixSize / 2));
}