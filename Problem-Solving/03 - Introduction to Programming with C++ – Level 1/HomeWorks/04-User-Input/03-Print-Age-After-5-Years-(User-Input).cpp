#include <iostream>
using namespace std;

int main()
{
	int MyAge;
	int YearsLater;

	cout << "Please Enter Your Age:" << endl;
	cin >> MyAge;
	cout << "Please Enter Number of Years:" << endl;
	cin >> YearsLater;

	int FutureAge = MyAge + YearsLater;

	cout << "After " << YearsLater << " years you will be " << FutureAge << " years old." << endl;

	return 0;
}