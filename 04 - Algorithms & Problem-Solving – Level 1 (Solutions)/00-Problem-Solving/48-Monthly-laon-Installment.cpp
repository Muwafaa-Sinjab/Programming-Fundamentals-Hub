#include <iostream>
using namespace std;

int ReadNumNumber(string Massage){
    
    float Number = 0;
    
    cout << Massage;
    cin >> Number;
    
    return Number;
    
}

int MonthPayment(int LoanAmount, int Monthlytaken){
    
    int MonthlyPayment = LoanAmount / Monthlytaken;
    return MonthlyPayment;
}

void PrintResult(int MonthlyPayment){
    
    cout << "\nYou Need to Pay " << MonthlyPayment << " in Months";
}


int main()
{
    
    int LoanAmount = ReadNumNumber("Please Enter Your Loan Amount: ");
    int Monthlytaken = ReadNumNumber("Please Enter Your Monthly Taken: ");
    
    PrintResult(MonthPayment(LoanAmount, Monthlytaken));
    
    return 0;
}