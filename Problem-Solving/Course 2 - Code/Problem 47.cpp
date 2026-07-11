//Q: Write a program to read the loan Amount and Monthly Payment and Calculate how many month you need to settle the loan .  /

#include <iostream>
using namespace std;

int main()
{
    int loanAmount, MonthlyPayment, MonthTime;
    
    cout<<"How much the loan Amount is it? ";
    cin >> loanAmount; 
    cout << "How much the Monthly Payment will be? : ";
    cin >> MonthlyPayment;
    
    MonthTime = loanAmount / MonthlyPayment;
    
    cout <<  "You will need " << MonthTime << " to finish your Loan." << endl;
    

    return 0;
}