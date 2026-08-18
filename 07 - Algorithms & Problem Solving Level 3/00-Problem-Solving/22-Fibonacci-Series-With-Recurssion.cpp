#include <iostream>
#include <iomanip>

using namespace std;

void printFibonacciSeries(short number, int prev1, int prev2);

int main()
{
    printFibonacciSeries(10, 0, 1);
    return 0;
}

void printFibonacciSeries(short number, int prev1, int prev2)
{
    int febNumber = 0;

    if (number > 0)
    {
        febNumber = prev1 + prev2;
        prev2 = prev1;
        prev1 = febNumber;
        cout << setw(2) << febNumber << "  ";
        
        // Recursive call with decremented counter and updated previous values
        printFibonacciSeries(number - 1, prev1, prev2);
    }
}