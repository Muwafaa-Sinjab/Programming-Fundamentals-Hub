/*
Q: Write a program that asks the user to enter two integers and an arithmetic operation 
(from the following: +, -, *, /). Then the program should display the result of applying 
the selected operation on the two numbers.

Example:
Input:
  First Number: 10
  Second Number: 5
  Operation: +

Output:
  The Result of 10 + 5 is: 15
*/



#include <iostream>
using namespace std;

void ReadNum_Operation(int &Num1, int &Num2, char &operationType){
    
    cout << "Please Enter The first Number: ";
    cin >> Num1;
    
    cout << "Please Enter The Second Number: ";
    cin >> Num2;
    
    cout << "\n";
    
    cout << "Please Enter an operation Type, between These Types ( * ), ( + ), ( - ), ( / ): ";
    cin >> operationType;
}

void PrintCalculationResult(int Num1, int Num2, char operationType){
    
    if( operationType == '-'  ){
        
        cout << "The Result of " << Num1 << " - " << Num2 << " is: " << Num1 - Num2 << endl;
        
    }else if ( operationType == '/'  ){
        
        cout << "The Result of " << Num1 << " / " << Num2 << " is: " << Num1 / Num2 << endl;
        
    }else if ( operationType == '*' ){
        
        cout << "The Result of " << Num1 << " * " << Num2 << " is: " << Num1 * Num2 << endl;
        
    }else if ( operationType == '+' ){
        
        cout << "The Result of " << Num1 << " + " << Num2 << " is: " << Num1 + Num2 << endl;
        
    }else{
        
	cout << "\n";
        cout << "Please Enter The correct operation Type";
    }
    
}

int main()
{
    int Num1, Num2;
    char operationType;
    
    ReadNum_Operation(Num1, Num2, operationType);
    PrintCalculationResult(Num1,  Num2, operationType);
    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))


/*
Q: Write a program that asks the user to enter two integers and an arithmetic operation 
(from the following: +, -, *, /). Then, the program should display the result of applying 
the selected operation on the two numbers using a switch statement.

Example:

Input:
  First Number: 10
  Second Number: 5
  Operation: +

Output:
  The Result of 10 + 5 is: 15
*/



#include <iostream>
using namespace std;

void ReadNum_Operation(int &Num1, int &Num2, char &operationType){
    
    cout << "Please Enter The first Number: ";
    cin >> Num1;
    
    cout << "Please Enter The Second Number: ";
    cin >> Num2;
    
    cout << "\n";
    
    cout << "Please Enter an operation Type, between These Types ( * ), ( + ), ( - ), ( / ): ";
    cin >> operationType;
}

void PrintCalculationResult(int Num1, int Num2, char operationType){
    
    switch (operationType){
        
        case '-':
        
            cout << "The Result of " << Num1 << " - " << Num2 << " is: " << Num1 - Num2 << endl;
            
        break;
        
        case '+':
        
            cout << "The Result of " << Num1 << " + " << Num2 << " is: " << Num1 + Num2 << endl;
            
        break;
        
        case '*':
        
            cout << "The Result of " << Num1 << " * " << Num2 << " is: " << Num1 * Num2 << endl;
            
        break;
        
        case '/':
        
            cout << "The Result of " << Num1 << " / " << Num2 << " is: " << Num1 / Num2 << endl;
            
        break;
        
        
        default:
        
        cout << "\n";
        cout << "Please Enter The correct operation Type";
    }
}

int main()
{
    int Num1, Num2;
    char operationType;
    
    ReadNum_Operation(Num1, Num2, operationType);
    PrintCalculationResult(Num1,  Num2, operationType);
    return 0;
}