#include <iostream>
using namespace std;


enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };



float ReadNumOperation(string Massage){
    
    float Number = 0;
    
    cout << Massage;
    cin >> Number;
    
    return Number;
    
}


enOperationType ReadOperationType(){
    
    char OT = ';';
    
    cout << "Please Enter an operation Type, between These Types ( * ), ( + ), ( - ), ( / ): ";
    cin >> OT;
    
    return (enOperationType)OT;
}


float PrintCalculationResult(float Number1, float Number2, enOperationType OPtype){
    
    switch(OPtype){
        case enOperationType::Add:
            return Number1 + Number2;
        case enOperationType::Subtract:
            return Number1 - Number2;
        case enOperationType::Multiply:
            return Number1 * Number2;
        case enOperationType::Divide:
            return Number1 / Number2;
        default:
            return Number1 + Number2;
    }
}


int main()
{
    
    float Number1 = ReadNumOperation("Please Enter The first Number: ");
    float Number2 = ReadNumOperation("Please Enter The Second Number: ");
    enOperationType OPtype = ReadOperationType();
    cout << "\nResult = " << PrintCalculationResult(Number1, Number2, OPtype) << endl;
    return 0;
}