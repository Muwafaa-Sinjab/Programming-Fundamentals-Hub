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

void PrintSumEvenNumbersFrom1ToN(int Number){
    
    int Sum = 0;
    for(int Counter = 1; Counter <= Number; Counter++){
        
        if (CheckOddOrEven(Counter) == enOddOrEven::Even){
            
            Sum +=Counter;
        }
    }
    
    cout << "\nSum of Even numbers = " << Sum << endl;
}

int main()
{
    
    PrintSumEvenNumbersFrom1ToN(ReadN());
    
    return 0;
}