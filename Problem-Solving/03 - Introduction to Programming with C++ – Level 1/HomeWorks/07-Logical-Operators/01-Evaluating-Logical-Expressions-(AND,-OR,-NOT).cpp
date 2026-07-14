#include <iostream>
using namespace std;

int main()
{
	cout << "12 >= 12 is " << (12 >= 12) << endl;
	cout << "NOT (12 >= 12) is " << !(12 >= 12) << endl;
	cout << "1 AND 1 is " << (1 && 1) << endl;
	cout << "(7 == 7) and (7 > 5) is " << ((7 == 7) && (7 > 5)) << endl;

	cout << "12 > 7 is " << (12 > 7) << endl;
	cout << "NOT (12 < 7) is " << !(12 < 7) << endl;
	cout << "True AND 0 is " << (true && 0) << endl;
	cout << "(7 == 7) and (7 < 5) is " << ((7 == 7) && (7 < 5)) << endl;

	cout << "8 < 6 is " << (8 < 6) << endl;
	cout << "NOT (8 < 6) is " << !(8 < 6) << endl;
	cout << "0 OR 1 is " << (0 || 1) << endl;
	cout << "(7 == 7) OR (7 < 5) is " << ((7 == 7) || (7 < 5)) << endl;

	cout << "8 == 8 is " << (8 == 8) << endl;
	cout << "NOT (8 == 8) is " << !(8 == 8) << endl;
	cout << "0 OR 0 is " << (0 || 0) << endl;
	cout << "(7 < 7) OR (7 > 5) is " << ((7 < 7) || (7 > 5)) << endl;

	cout << "12 <= 12 is " << (12 <= 12) << endl;
	cout << "NOT (12 <= 12) is " << !(12 <= 12) << endl;
	cout << "Not 0 is " << (!0) << endl;
	cout << "NOT (7 == 7) and (7 > 5) is " << (!(7 == 7) && (7 > 5)) << endl;

	cout << "7 == 5 is " << (7 == 5) << endl;
	cout << "NOT (7 == 5) is " << !(7 == 5) << endl;
	cout << "Not (1 OR 0) is " << !(1 || 0) << endl;
	cout << "(7 == 7) and Not (7 < 5) is " << ((7 == 7) && !(7 < 5)) << endl;

	cout << "\n";

	cout << "(5 > 6 and 7==7) OR (1 Or 0) is " << (((5 > 6) && (7 == 7)) || (1 || 0)) << endl;
	cout << "NOT(5 > 6 and 7==7) OR (1 Or 0) is " << (!((5 > 6) && (7 == 7)) || (1 || 0)) << endl;
	cout << "NOT(5 > 6 and 7==7) OR NOT (1 Or 0) is " << (!((5 > 6) && (7 == 7)) || !(1 || 0)) << endl;
	cout << "NOT(5 > 6 OR 7==7) AND NOT (1 Or 0) is " << (!((5 > 6) || (7 == 7)) && !(1 || 0)) << endl;
	cout << "((5>6 AND 7<=8) OR (8>1 and 4<=3)) AND True is " << ((((5 > 6) && (7 <= 8)) || ((8 > 1) && (4 <= 3))) && true) << endl;
	cout << "((5>6 AND NOT(7<=8)) AND (8>1 OR 4<=3)) OR True is " << ((((5 > 6) && !(7 <= 8)) && ((8 > 1) || (4 <= 3))) || true) << endl;

	return 0;
}