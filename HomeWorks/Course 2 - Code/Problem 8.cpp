// Q: Write a program to ask user to enter his Mark, Then Print PASS if mark > 50, Otherwise print "Fail"

#include <iostream>
using namespace std;

void PassOrFailCalculation(float &Mark){
    
    cout << "Please Enter Your Mark: ";
    cin >> Mark;
    
    if (Mark >= 50){
        
        cout << "Congratulations, you have PASS." << endl;
    }else{
        
        cout << "Unfortunately, You failed." << endl;
    }
    
}

int main()
{
    float Mark;
    
    PassOrFailCalculation(Mark);
   
    return 0;
}