#include <iostream>
using namespace std;

struct stBiggyBankContent {
    float Pennies, Nickels, Dimes, Quarters, Dollars;
}; 

stBiggyBankContent ReadMoneyInfo() {
    stBiggyBankContent BiggyBank;

    cout << "Please Enter These Informations to calculate Your Money" << endl;
    cout << "Your Pennies: ";
    cin >> BiggyBank.Pennies;

    cout << "Your Nickels: ";
    cin >> BiggyBank.Nickels;

    cout << "Your Dimes: ";
    cin >> BiggyBank.Dimes;

    cout << "Your Quarters: ";
    cin >> BiggyBank.Quarters;

    cout << "Your Dollars: ";
    cin >> BiggyBank.Dollars;

    return BiggyBank;
}

float TotalPennies(stBiggyBankContent Bank) {
    return (Bank.Pennies * 1) + (Bank.Nickels * 5) + (Bank.Dimes * 10) +
           (Bank.Quarters * 25) + (Bank.Dollars * 100);
}

float TotalDollars(stBiggyBankContent Bank) {
    return TotalPennies(Bank) / 100;
}

int main() {
    stBiggyBankContent Bank = ReadMoneyInfo();

    cout << "\nYour Total Pennies are: \"" << TotalPennies(Bank) << "\"" << endl;
    cout << "Your Total Dollars are: \"" << TotalDollars(Bank) << "\"" << endl;

    return 0;
}
