/* Q: Write a program that asks the user to enter a password. If the password is `1234`, the
program should display the account balance (`7000`). Otherwise, it should print an error message: "Wrong Password".**
*/

#include <iostream>
using namespace std;

void ATMpaswwordChecker(short &Paswword){
    
    cout << "Please Enter Your Paswword: ";
    cin >> Paswword;
    
    
    cout << "\n";
    cout << "*************************\n";
    
    if ( Paswword == 1234 ){
        
        cout << "Your Balance is: 7000" << endl;
    }else{
        
        cout << "Wrong Paswword." << endl;
    }
    
}

int main()
{
    short Paswword;
    
    ATMpaswwordChecker(Paswword);
   
    return 0;
}