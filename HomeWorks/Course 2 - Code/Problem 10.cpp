/*
Q: Write a program to ask the user to enter:
    Mark1, Mark2, Mark3
    Then Print The Average of enterd Marks
*/

#include <iostream>
using namespace std;

int main()
{
    float Mark1, Mark2, Mark3;
    
    cout << "Please Enter Your Three Marks :" << endl;
    cin >> Mark1; 
    cin >> Mark2;
    cin >> Mark3;
    
    cout << "*************" << endl;
    cout << "The Average of Your Marks is " << ( Mark1 + Mark2 + Mark3 ) / 3 << endl; 
	return 0;
}