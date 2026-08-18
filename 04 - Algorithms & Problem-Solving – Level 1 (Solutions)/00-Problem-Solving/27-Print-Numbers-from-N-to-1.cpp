#include <iostream>
#include <cmath>
using namespace std;

int ReadN(){
    
    int N;
    
    cout << "Enter Any Number: ";
    cin >> N;
    
    return N;
}


void PrintFromNTo1(int N){
    
    cout << "\n";
    cout << "Range Printed Using For loops:";
    
    for(int Counter = 1; Counter <= N; N--){
        
        cout << " " << N;
    }
    
    
}

int main()
{
    
    PrintFromNTo1(ReadN());
    
    return 0;
}