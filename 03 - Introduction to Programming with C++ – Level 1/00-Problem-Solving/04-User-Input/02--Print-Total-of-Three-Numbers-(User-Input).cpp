#include <iostream>
using namespace std;

int main()
{
	int Num1, Num2, Num3;

	cout << "Please Enter the first Number:" << endl;
	cin >> Num1;
	cout << "Please Enter the second Number:" << endl;
	cin >> Num2;
	cout << "Please Enter the third Number:" << endl;
	cin >> Num3;

	int Total = Num1 + Num2 + Num3;

	cout << "\n";
	cout << Num1 << " +\n";
	cout << Num2 << " +\n";
	cout << Num3 << endl;
	cout << "________________\n";
	cout << "Total = " << Total << endl;

	return 0;
}