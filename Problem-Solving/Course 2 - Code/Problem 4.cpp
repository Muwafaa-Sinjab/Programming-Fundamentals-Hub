// Q: Write a program to ask user to enter his Age, Driver License Then Print Hired if Age >= 21, and has Driver License, Otherwise print "Rejected"

#include <iostream>
using namespace std;

void DriverRoles(short &Age, bool &DriverLicense){
    
    cout << "Please Enter Your Age: ";
    cin >> Age;
    
    cout << "Do You Have Driver License?\nEnter 0 for \"No\".\nEnter 1 for \"Yes\".  " << endl;
    cout << "Enter Your statuse: ";
    cin >> DriverLicense;
    
    cout << "\n";
    cout << "*************************\n";
    
    if ( Age >= 21 && DriverLicense == 1){
        
        cout << "Congratulations, you are Hired." << endl;
    }else{
        
        cout << "Unfortunately, You are Rejected." << endl;
    }
    
}

int main()
{
    short Age;
    bool DriverLicense;
    
   DriverRoles(Age, DriverLicense);
   
    return 0;
}