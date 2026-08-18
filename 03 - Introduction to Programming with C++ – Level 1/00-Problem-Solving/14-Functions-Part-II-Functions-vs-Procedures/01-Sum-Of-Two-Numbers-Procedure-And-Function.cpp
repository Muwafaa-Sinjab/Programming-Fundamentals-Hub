#include <iostream>
using namespace std;

void PrintStars() {
    cout << "********************" << endl;
}

int SumTwoNumbers(int N1, int N2) {
    return N1 + N2;
}

int main() {
    int Number1, Number2;

    cout << "Please enter Number1?" << endl;
    cin >> Number1;

    cout << "Please enter Number2?" << endl;
    cin >> Number2;

    PrintStars();
    cout << SumTwoNumbers(Number1, Number2) << endl;

    return 0;
}