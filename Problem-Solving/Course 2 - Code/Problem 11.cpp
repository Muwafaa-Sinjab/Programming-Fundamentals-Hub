// Q: Write a program to ask user to enter 3 Marks,then print the Average of entered Marks and Print "PASS", if Average >= 50, atherwise print "Fail"

#include <iostream>
using namespace std;

void AverageCalculation(short &Mark1, short &Mark2, short &Mark3, short &Average){
    
    cout << "Please Enter Your First Mark: ";
    cin >> Mark1;
    cout << "Please Enter Your Second Mark: ";
    cin >> Mark2;
    cout << "Please Enter Your Third Mark: ";
    cin >> Mark3;
    
    Average = (Mark1 + Mark2 + Mark3) / 3;
    
    cout << "\n";
    cout << "*************************\n";
    
    if ( Average >= 50){
        
        cout << "Congratulations, you have PASS." << endl;
    }else{
        
        cout << "Unfortunately, You failed." << endl;
    }
    
}

int main()
{
    short Mark1, Mark2, Mark3, Average;
    
    AverageCalculation(Mark1, Mark2, Mark3, Average);
   
    return 0;
}