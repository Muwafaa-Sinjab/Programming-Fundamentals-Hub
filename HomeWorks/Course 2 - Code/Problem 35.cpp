/*
Q: Write a program to ask the user to enter 
   Pennies, Nickels, Dimes, Quarters, Dollars 
   Then calculate the total Pennies and dolars and print them on the screen 
   
   Penne = 1 
   Nickle = 5
   Dime = 10
   Quarter = 25
   Dollar = 100
*/

#include <iostream>
using namespace std;

int main()
{
    float Pennies, Nickels, Dimes, Quarters, Dollars  ;
    
    cout << "Please Enter a These Informations to calculate Your Money" << endl;
    cout << "Your Pennies: ";
    cin >> Pennies;
    cout << "Your Nickels: ";
    cin >> Nickels;
    cout << "Your Dimes: ";
    cin >> Dimes;
    cout << "Your Quarters: ";
    cin >> Quarters;
    cout << "Your Dollars: ";
    cin >> Dollars;
    
    cout << "Your Total Pennies are: " << "\"" << (Pennies * 1) + (Pennies * 5) + (Pennies * 10) + (Pennies * 25) + (Pennies * 100) << "\"" << endl;
    float TotalPennise = (Pennies * 1) + (Pennies * 5) + (Pennies * 10) + (Pennies * 25) + (Pennies * 100);
    cout << "Your Total Dollars are: " << "\"" <<TotalPennise / 100 << "\"" << endl;
    
    
    return 0;
}