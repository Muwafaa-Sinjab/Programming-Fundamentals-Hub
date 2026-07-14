#include <iostream>
using namespace std;

int ReadATMPasscode(string Message) {
    int Number = 0;
    cout << Message;
    cin >> Number;
    return Number;
}

void ATMPasscode() {
    int Password = ReadATMPasscode("Please Enter Your Password: ");

    if (Password == 1234) {
        cout << "\nCorrect Password." << endl;
        cout << "Your Balance is: 7500" << endl;
    } else {
        cout << "\nWrong Password, Account blocked..." << endl;
    }
}

int main() {
    ATMPasscode();
    return 0;
}