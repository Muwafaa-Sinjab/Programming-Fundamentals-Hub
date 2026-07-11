#include <iostream>
using namespace std;

void ReadTowNumbers(int& Num1, int& Num2, int& Num3){
    
    cout << "Enter First Number: ";
    cin >> Num1;
    
    cout << "Enter Second Number: ";
    cin >> Num2;
    
    cout << "Enter Third Number: ";
    cin >> Num3;
    
}

int MaxNumber(int Num1, int Num2, int Num3){
    
    if (Num1 > Num2)
        if (Num1 > Num3)
            return Num1;
        else 
            return Num2;
        
    else 
        if (Num2 > Num3)
            return Num2;
        else
            return Num3;
}


void PrintMaxNumber(int Result){
    
    cout << "\nMax Number is: " << Result;
}


int main()
{
    int Num1, Num2, Num3;
    
    ReadTowNumbers(Num1, Num2, Num3);
    PrintMaxNumber(MaxNumber(Num1, Num2, Num3));
    return 0;
}