#include <iostream>
#include <cmath>
using namespace std;

int ReadPostiveNumber(string Massage){
    
    int Number;
    
    do {
        
        cout << Massage;
        cin >> Number;
    }while (Number < 0);
    
    
    return Number;
}


void Factorial(int Number){
    
    int Sum = 1;
    for(int Counter = 1; Counter <= Number; Number--){
        
        Sum *=  Number;
        
    }
    
    cout << "\nFactorial of Number = " << Sum << endl;
}

int main()
{
    
   Factorial(ReadPostiveNumber("Enter a Postive Number: "));
    
    return 0;
}