#include <iostream>
using namespace std;

void ReadTowNumbers(int& Num1, int& Num2){
    
    cout << "Enter First Number: ";
    cin >> Num1;
    
    cout << "Enter Second Number: ";
    cin >> Num2;
    
}

int MaxNumber(int Num1, int Num2){
    
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}


void PrintMaxNumber(int Result){
    
    cout << "\nMax Number is: " << Result;
}


int main()
{
    int Num1, Num2;
    
    ReadTowNumbers(Num1, Num2);
    PrintMaxNumber(MaxNumber(Num1, Num2));
    return 0;
}