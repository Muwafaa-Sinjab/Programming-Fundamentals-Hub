#include <iostream>
#include <iomanip>

using namespace std;

void printFibonacciSeries(short number);

int main()
{
    printFibonacciSeries(10);
    return 0;
}

void printFibonacciSeries(short number)
{
    int prev1 = 1, prev2 = 0;
    int febNumber = 0;

    cout << setw(2) << "1" << "  ";

    for (short i = 2; i <= number; i++)
    {
        // Calculate the next Fibonacci number by summing the previous two
        febNumber = prev1 + prev2;
        cout << setw(2) << febNumber << "  ";
        
        prev2 = prev1;
        prev1 = febNumber;
    }
    cout << endl;
}