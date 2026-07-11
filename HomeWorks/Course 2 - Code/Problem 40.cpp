/*
Q: A resaurant charges 10% services fee and 16% sales tax.

   Write a program to read a Bill Value and add service fee and sales tax to it 
   and print the Total Bill on the screen 
*/

#include <iostream>
using namespace std; 
int main()
{
    float BillValue, TotalBill;
    
    cout<<"Enter The Bill Value of of the Customer: ";
    cin >> BillValue;
    
    TotalBill = BillValue * 1.1 * 1.16;
    
    cout << "The Total Bill is: " << "\"" << TotalBill << "\"" << endl;

    return 0;
}