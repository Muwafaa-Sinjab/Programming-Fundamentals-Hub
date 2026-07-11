#include <iostream>
using namespace std;

int ReadATMPasscode(string Message) {
    int Number = 0;
    cout << Message;
    cin >> Number;
    return Number;
}

void ATMPasscode() {
    int Password;
    int TriesLeft = 3;

    do {
        Password = ReadATMPasscode("Please Enter Your Password: ");
        
        if (Password == 1234) {
            cout << "\nCorrect Password.\n";
            cout << "Your Balance is: 7500" << endl;
            break; 
        } else {
            TriesLeft--;
            if (TriesLeft == 0) {
                cout << "\nYour Account is blocked..." << endl;
                break;
            } else {
                cout << "\nWrong Password, Try Again..." << endl;
                cout << "Tries Left: " << TriesLeft << "\n" << endl;
            }
        }
    } while (TriesLeft > 0);
}

int main() {
    ATMPasscode();
    return 0;
}