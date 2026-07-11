// Q:   Factorial of N!

#include <iostream>
using namespace std;


void ReaNum(short &Num){
    
    cout << "Enter a number: ";
    cin >> Num;
}

void PrintLoop(short Num){
    
    int Factorail = 1;
    
    for (int counter = 1;  Num >= counter ; Num-- ){
        
        Factorail = Factorail * Num;
    }
    
    cout << Factorail << endl;
}

int main()
{
    
    short Num;
    ReaNum(Num);
    PrintLoop(Num);
    
    return 0;
}

-----------------------------------------------------------------

((((((((((Update Code))))))))))

// Q:   Factorial of N!, using while loop

#include <iostream>
using namespace std;


void ReaNum(short &Num){
    
    cout << "Enter a number: ";
    cin >> Num;
}

void PrintLoop(short Num){
    
    int Factorail = 1;
    int counter =1; 
    
    while (Num >= counter){
        
        Factorail = Factorail * Num;
        Num--;
    }
    
    cout << Factorail << endl;
}

int main()
{
    
    short Num;
    ReaNum(Num);
    PrintLoop(Num);
    
    return 0;
}