#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber(){
    
    int Number;
    
    cout << "Enter any Number: ";
    cin >> Number;
    
    return Number;
}

void PrintNumberToPower2_3_4(int Number){
    
    cout << "\n";
    cout << Number << " to the Power of 2 is: " << pow(Number, 2) << endl;
    cout << Number << " to the Power of 3 is: " << pow(Number, 3) << endl;
    cout << Number << " to the Power of 4 is: " << pow(Number, 4) << endl;
    
}

int main()
{
    
    PrintNumberToPower2_3_4(ReadNumber());

    return 0;
}