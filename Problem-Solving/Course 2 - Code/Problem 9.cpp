/*
Q: Write a program to ask the user to enter 
    Number1, Number2, Number3
    Then print the sum of entered numbers
*/

#include <iostream>
using namespace std;

int main()
{
    short Num1, Num2, Num3;
    
    cout << "Please Enter Three Numbers :" << endl;
    cin >> Num1; 
    cin >> Num2;
    cin >> Num3;
    
    cout << "*************" << endl;
    cout << "The Sum of Your Numbers is " << Num1 + Num2 + Num3 << endl; 
	return 0;
}