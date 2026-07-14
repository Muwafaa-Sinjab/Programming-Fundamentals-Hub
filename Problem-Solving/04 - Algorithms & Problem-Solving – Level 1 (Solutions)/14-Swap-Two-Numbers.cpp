#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2){
    
    cout << "Enter The First Number: ";
    cin >> Num1;
    
    cout << "Enter The Second Number: ";
    cin >> Num2;
}


void SwapNumbers(int& Num1, int& Num2){
    
    int Temp;
    
    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}


void PrintResult(int Num1, int Num2){
    
    cout << "\nFirst Number is: " << Num1 << endl;
    cout << "Second Number is: " << Num2 << endl;
}


int main()
{
    int Num1, Num2;
    
    
    ReadNumbers(Num1, Num2);
    PrintResult(Num1, Num2);
    SwapNumbers(Num1, Num2);
    PrintResult(Num1, Num2);
    return 0;
}