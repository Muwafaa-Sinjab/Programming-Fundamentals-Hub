
#include <iostream>
using namespace std;


float ReadNumOperation(string Massage){
    
    float Number = 0;
    
    cout << Massage;
    cin >> Number;
    
    return Number;
    
}

int RemainderPaid(float TotalBill, float CashPaid){
    
    return CashPaid - TotalBill;
}


int main()
{
    
    float TotalBill = ReadNumOperation("Enter The Total bill of the Customer: ");
    float CashPaid = ReadNumOperation("Enter The Cash Paid of the Customer: ");
    
    cout << "\nTotal Bill = " << TotalBill << endl;
    cout << "Cash Paid= " << CashPaid << "\n" << endl;
    
    cout << "The Remainder Paid of th Customer is: " << "\"" << RemainderPaid(TotalBill, CashPaid) << "\"" << endl;
    
    return 0;
}