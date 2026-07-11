//Q: Check Number if it Even or Odd.

#include <iostream>
#include <string>
using namespace std;

enum enNuberType { Odd = 1, Even = 2 };

int ReadNumber(){
    
    int Num;
    
    cout << "Enter a Number, to check if it's even or odd: ";
    cin >> Num;
    
    return Num;
}

enNuberType CheckNumberType(int Num){
    
    int Result = Num % 2;
    
    if (Result == 0)
        return enNuberType::Even;
    else
        return enNuberType::Odd;
}

void PrintNumberType(enNuberType NumberType){
    
    if (NumberType == enNuberType::Even){
        
        cout << "The Number is Even" << endl;
    }else{
        
        cout << "The Number is Odd" << endl;
    }
}


int main()
{
    
   PrintNumberType(CheckNumberType(ReadNumber()));
   
    return 0;
}