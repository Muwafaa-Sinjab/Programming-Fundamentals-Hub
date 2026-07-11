#include <iostream>
#include <cmath>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

int ReadN(){
    
    int Number;
    
    cout << "Enter Any Number: ";
    cin >> Number;
    
    return Number;
}

enOddOrEven CheckOddOrEven(int Number){
    
    if (Number % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
    
}

void PrintSumOddNumbersFrom1ToN(int Number){
    
    int Sum = 0;
    for(int Counter = 1; Counter <= Number; Counter++){
        
        if (CheckOddOrEven(Counter) == enOddOrEven::Odd){
            
            Sum +=Counter;
        }
    }
    
    cout << "\nSum of odd numbers = " << Sum << endl;
}

int main()
{
    
    PrintSumOddNumbersFrom1ToN(ReadN());
    
    return 0;
}