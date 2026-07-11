#include <iostream>
#include <cmath>
using namespace std;

int ReadN(){
    
    int N;
    
    cout << "Enter Any Number: ";
    cin >> N;
    
    return N;
}


void PrintFrom1ToN(int N){
    
    cout << "\n";
    cout << "Range Printed Using For loops:";
    for(int Counter = 1; Counter <= N; Counter++){
        
        cout << " " << Counter;
    }
    
    
}

int main()
{
    
    PrintFrom1ToN(ReadN());
    
    return 0;
}