#include <iostream>
using namespace std;


float ReadNumOperation(string Massage){
    
    float Number = 0;
    
    cout << Massage;
    cin >> Number;
    
    return Number;
    
}


float PrintNumbers(){
    
    float Number = 0; float Sum = 0; 
    int Counter = 1;
    do {
        
        Number = ReadNumOperation("Enter Number " + to_string(Counter) + ": ")  ;
        
        if(Number == -99){
            break;
        }
        
        Sum += Number;
        Counter++;
        
    }while(true);
    
    return Sum;
}


int main()
{
    float Result = PrintNumbers();
    cout << endl << "Result = " << Result << endl;
    return 0;
}