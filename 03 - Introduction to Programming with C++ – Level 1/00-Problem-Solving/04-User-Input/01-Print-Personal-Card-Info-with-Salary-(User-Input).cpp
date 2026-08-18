#include <iostream>
using namespace std;

int main()
{
	string MyName;
	int MyAge;
	string MyCity;
	string MyCountry;
	int MonthSalary;
	char Gender;
	int Married;

	cout << "Please Enter Your Name:" << endl;
	cin >> MyName;
	cout << "Please Enter Your Age:" << endl;
	cin >> MyAge;
	cout << "Please Enter Your City:" << endl;
	cin >> MyCity;
	cout << "Please Enter Your Country:" << endl;
	cin >> MyCountry;
	cout << "Please Enter Your Monthly Salary:" << endl;
	cin >> MonthSalary;
	cout << "Please Enter Your Gender Character:" << endl;
	cin >> Gender;
	cout << "Are you Married? (1 = Yes, 0 = No):" << endl;
	cin >> Married;

	cout << "**************************************\n";
	cout << "Name: " << MyName << endl;
	cout << "Age  : " << MyAge << " Years" << endl;
	cout << "City : " << MyCity << endl;
	cout << "Country: " << MyCountry << endl;
	cout << "Monthly Salary : " << MonthSalary << endl;
	cout << "Yearly Salary: " << MonthSalary * 12 << endl;
	cout << "Gender: " << Gender << endl;
	cout << "Married : " << Married << endl;
	cout << "**************************************\n";

	return 0;
}