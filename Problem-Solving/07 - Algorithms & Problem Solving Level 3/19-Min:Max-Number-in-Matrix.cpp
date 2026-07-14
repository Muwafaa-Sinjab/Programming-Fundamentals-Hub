#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int getRandomNumber(int from, int to);
void fillMatrixWithRandomNumbers(int matrix[3][3], short rows, short cols);
void printMatrix(int matrix[3][3], short rows, short cols);
int getMinNumberInMatrix(int matrix[3][3], short rows, short cols);
int getMaxNumberInMatrix(int matrix[3][3], short rows, short cols);

int main()
{
    srand((unsigned)time(NULL));

    int numberMatrix[3][3];
    
    fillMatrixWithRandomNumbers(numberMatrix, 3, 3);
    cout << "\nMatrix 1:\n";
    printMatrix(numberMatrix, 3, 3);

    cout << "\nMinimum Number of matrix is: "
         << getMinNumberInMatrix(numberMatrix, 3, 3) << endl;

    cout << "\nMaximum Number of matrix is: "
         << getMaxNumberInMatrix(numberMatrix, 3, 3) << endl;

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

int getMinNumberInMatrix(int matrix[3][3], short rows, short cols)
{   
    int minNumber = matrix[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // Update minNumber if a smaller element is found
            if (matrix[i][j] < minNumber)
                minNumber = matrix[i][j];
        }
    }
    return minNumber;
}

int getMaxNumberInMatrix(int matrix[3][3], short rows, short cols)
{
    int maxNumber = matrix[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // Update maxNumber if a larger element is found
            if (matrix[i][j] > maxNumber)
                maxNumber = matrix[i][j];
        }
    }
    return maxNumber;
}

int getRandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}