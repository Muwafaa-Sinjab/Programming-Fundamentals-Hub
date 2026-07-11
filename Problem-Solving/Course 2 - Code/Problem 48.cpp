//Q: Write a program to read the loan Amount and how many months needed to settle the loan, then calculat the Monthly Installment amount

#include <iostream>
using namespace std;

int main()
{
    int loanAmount, MonthlyPayment, MonthTime;
    
    cout<<"How much the loan Amount is it? ";
    cin >> loanAmount; 
    cout << "How many Month we need to Payment Your loan? ";
    cin >> MonthTime;
    
    MonthlyPayment = loanAmount / MonthTime;
    
    cout <<  "You will need to pay " << MonthlyPayment << " every Month to finish your Loan." << endl;
    

    return 0;
}