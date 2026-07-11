// Q: Write a program to ask user to enter Age,if Age between 18 and 45, Print "Valid Age" otherwise print "Invalid age".

#include <iostream>
using namespace std;

void AgeCalculater(short &age){
    
    cout << "Please Enter Your Age: ";
    cin >> age;
    
    
    cout << "\n";
    cout << "*************************\n";
    
    if ( age >= 18 && age <= 45){
        
        cout << "Congratulations, your Age is Valid." << endl;
    }else{
        
        cout << "Unfortunately, your Age is Invalid." << endl;
    }
    
}

int main()
{
    short age;
    
    AgeCalculater(age);
   
    return 0;
}