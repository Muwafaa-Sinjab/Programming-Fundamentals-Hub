#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int getRandomNumber(int from, int to);
void fillMatrixWithRandomNumbers(int matrix[3][3], short rows, short cols);
void printMatrix(int matrix[3][3], short rows, short cols);
bool isNumberInMatrix(int matrix[3][3], short rows, short cols, int numberToSearch);

int main()
{
    srand((unsigned)time(NULL));

    int numberMatrix[3][3];
    
    fillMatrixWithRandomNumbers(numberMatrix, 3, 3);
    cout << "\nMatrix:\n";
    printMatrix(numberMatrix, 3, 3);

    int numberToSearch;
    cout << "\nPlease enter the number to look for in matrix: ";
    cin >> numberToSearch;

    if (isNumberInMatrix(numberMatrix, 3, 3, numberToSearch))
        cout << "YES: It's in Matrix" << endl;
    else
        cout << "NO: It's not in Matrix" << endl;

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
            // Return true immediately if the element is found
            if (matrix[i][j] == numberToSearch)
                return true;
        }
    }
    return false;
}

int getRandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}