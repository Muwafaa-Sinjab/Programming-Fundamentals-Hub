#include <iostream>
using namespace std;

int ReadNumNumber(string Massage){
    
    float Number = 0;
    
    cout << Massage;
    cin >> Number;
    
    return Number;
    
}

int MonthTook(int LoanAmount, int MonthlyPayment){
    
    int MonthTook = LoanAmount / MonthlyPayment;
    return MonthTook;
}

void PrintResult(int MonthTook){
    
    cout << "\nTime Taken To finish your loan is: " << MonthTook << " - Months";
}



int main()
{
    
    int LoanAmount = ReadNumNumber("Please Enter Your Loan Amount: ");
    int MonthlyPayment = ReadNumNumber("Please Enter Your MonthlyPayment: ");
    
    PrintResult(MonthTook(LoanAmount, MonthlyPayment));
    
    return 0;
}