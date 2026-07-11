//Q: Write a program to Read a TotalBill and CashPaid and calculate the remainder to be paid back 

#include <iostream>
using namespace std;

int main()
{
    float TotalBill, CashPaid;
    
    cout << "Enter The Total bill of the Customer: ";
    cin >> TotalBill;
    cout << "Enter The Cash Paid of the Customer: ";
    cin >> CashPaid;
    
    cout << "The Remainder Paid of th Customer is: " << "\"" << CashPaid - TotalBill << "\"" << endl;
    
    return 0;
}