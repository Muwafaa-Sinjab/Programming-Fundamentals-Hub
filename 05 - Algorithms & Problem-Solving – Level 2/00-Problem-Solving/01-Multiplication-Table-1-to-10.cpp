#include <iostream>

using namespace std;

void PrintMultiplicationHeader()
{
    cout << "\n\n\t\t\t Multiplication Table From 1 to 10\n" << endl;

    for (int column = 1; column <= 10; column++)
    {
        cout << "\t" << column;
    }

    cout << "\n-----------------------------------------------------------------------------------\n";
}

string GetColumnSeparator(int row)
{
    if (row < 10)
        return "   |";
    else
        return "  |";
}

void PrintMultiplicationTable()
{
    PrintMultiplicationHeader();

    for (int row = 1; row <= 10; row++)
    {
        cout << "\n" << row << GetColumnSeparator(row) << "\t";

        for (int column = 1; column <= 10; column++)
        {
            cout << row * column << "\t";
        }
    }
}

int main()
{
    PrintMultiplicationTable();

    return 0;
}