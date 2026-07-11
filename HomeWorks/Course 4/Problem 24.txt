#include <iostream>
#include <cmath>
using namespace std;

short ReadAge(){
    
    short Age;
    
    cout << "Enter Your Age: ";
    cin >> Age;
    
    return Age;
}

bool ValidateNumberInRange(short Number, short From, short To){
    
    return (Number >= From && Number <= To);
}

void PrintResult(short Age){
    
    if (ValidateNumberInRange(Age, 18,  45))
        
        cout << "\n" << Age << " is Valid Age." << endl;
    else
        cout << "\n" << Age << " is Invalid Age." << endl;
}


int main()
{
    
    PrintResult(ReadAge());
    
    return 0;
}