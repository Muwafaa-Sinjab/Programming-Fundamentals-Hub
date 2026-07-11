/*
Q: Write a program to ask the user to enter 
   Number 1 - Number 2
   Then print The Two Numbers, Then Swap the Two Numbers and print Them
*/

#include <iostream>
using namespace std;

int main()
{
    short Num1, Num2;
    
    cout << "Please Enter 2 Numbers :" << endl;
    cin >> Num1; 
    cin >> Num2;
    
    cout << "*************" << endl;
    cout << "The Numbers You entered are: " << Num1 << " " << Num2 << endl;
    
    short Exchange;
    Exchange = Num1;
    Num1 = Num2 ; 
    Num2 = Exchange;
    
    cout << "And the swap of your Numbers is: " << Num1 << " " << Num2;
	return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))



/*
Q: Write a program to ask the user to enter 
   Number 1 - Number 2
   Then print The Two Numbers, Then Swap the Two Numbers by Functions and Procedures and print Them
*/

#include <iostream>
using namespace std;

void Last_Print_Of_Numbers(short Num1, short Num2){

    cout << "And the swap of your Numbers is: " << Num1 << " " << Num2;
    
}

void Swap(short &Num1, short &Num2){
    
    short Swap;
    Swap = Num1;
    Num1 = Num2 ; 
    Num2 = Swap;
}


void First_Print_Of_Numbers(short Num1, short Num2){
    
    cout << "*************" << endl;
    cout << "The Numbers You entered are: " << Num1 << " " << Num2 << endl;
    
}

void ReadNumbers(short &Num1, short &Num2){
    
    cout << "Please Enter 2 Numbers :" << endl;
    cin >> Num1; 
    cin >> Num2;
}


int main()
{
    short Num1, Num2;
    
    ReadNumbers(Num1, Num2);
    First_Print_Of_Numbers(Num1, Num2);
    Swap(Num1, Num2);
    Last_Print_Of_Numbers(Num1, Num2);
    
	return 0;
}