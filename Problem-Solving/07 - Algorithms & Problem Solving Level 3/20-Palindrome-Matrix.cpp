#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int getRandomNumber(int from, int to);
void printMatrix(int matrix[3][3], short rows, short cols);
bool isPalindromeMatrix(int matrix[3][3], short rows, short cols);

int main()
{
    srand((unsigned)time(NULL));

    int numberMatrix[3][3] = {{1, 0, 1}, {2, 0, 2}, {3, 4, 3}};
    
    cout << "\nMatrix 1:\n";
    printMatrix(numberMatrix, 3, 3);

    if (isPalindromeMatrix(numberMatrix, 3, 3))
        cout << "\nYES: It's Palindrome." << endl;
    else
        cout << "\nNO: It's NOT Palindrome." << endl;

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

bool isPalindromeMatrix(int matrix[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols / 2; j++)
        {
            // Compare elements from the beginning and end of each row
            if (matrix[i][j] != matrix[i][cols - 1 - j])
                return false;
        }
    }
    return true;
}

int getRandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}