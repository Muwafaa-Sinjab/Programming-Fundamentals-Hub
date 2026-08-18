#include <iostream>
using namespace std;

void ReadAndSumNumbers(int &Sum) {
    int Number;
    Sum = 0;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter number " << i << ": ";
        cin >> Number;

        if (Number >= 50) {
            continue;
        }

        Sum += Number;
    }
}

int main() {
    int Sum = 0;

    ReadAndSumNumbers(Sum);

    cout << "******************" << endl;
    cout << "The total sum is: " << Sum << endl;
    cout << "******************" << endl;

    return 0;
}