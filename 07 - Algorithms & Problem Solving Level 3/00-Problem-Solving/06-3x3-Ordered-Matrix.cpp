#include <iostream>
#include <iomanip>

using namespace std;

// Fill the matrix with ordered numbers from 1 to rows*cols
void fillMatrixWithOrderedNumbers(int matrix[3][3], short rows, short cols)
{
    short counter = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            counter++;
            matrix[i][j] = counter;
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

int main()
{
    int numberMatrix[3][3];

    fillMatrixWithOrderedNumbers(numberMatrix, 3, 3);

    cout << "The following is an ordered 3x3 Matrix:" << endl;
    printMatrix(numberMatrix, 3, 3);

    return 0;
}