#include <iostream>
#include <iomanip>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

// ===== Function Prototypes =====
int getRandomNumber(int from, int to);
void fillMatrixWithRandomNumbers(int matrix[3][3], short rows, short cols);
int getMatrixSum(int matrix[3][3], short rows, short cols);
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

    // Calculate and print the total sum of the matrix
    cout << "\nSum of Matrix is: " 
         << getMatrixSum(numberMatrix, 3, 3) << endl;

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

// Calculate the total sum of all elements in the matrix
int getMatrixSum(int matrix[3][3], short rows, short cols)
{
    int totalSum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            totalSum += matrix[i][j];
        }
    }
    return totalSum;
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

// ===== Low Level Function =====

// Generate a random number between "from" and "to"
int getRandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}