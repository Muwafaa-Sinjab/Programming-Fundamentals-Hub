/*
Q: Write a program that asks the user to enter their grade for a certain subject (from 0 to 100), and then
displays the corresponding grade based on the following scale:

A: If the grade is between 90 and 100

B: If the grade is between 80 and 89

C: If the grade is between 70 and 79

D: If the grade is between 60 and 69

E: If the grade is between 50 and 59

F: If the grade is below 50
*/

#include <iostream>
using namespace std;

void ReadGrade(short &Grade){
    
    cout << "Please Enter Your Grade: ";
    cin >> Grade;
}

void PrintGradeStudentStatus(short Grade){
    
    if( Grade <= 100 && Grade >= 90){
        
        cout << "Your grade is: \"A\" " << endl;
    }else if ( Grade >= 80 ){
        
        cout << "Your grade is: \"B\" " << endl;
    }else if ( Grade >= 70 ){
        
        cout << "Your grade is: \"C\" " << endl;
    }else if ( Grade >= 60 ){
        
        cout << "Your grade is: \"D\" " << endl;
    }else if ( Grade >= 50 ){
        
        cout << "Your grade is: \"E\" " << endl;
    }else{
        
        cout << "Your grade is: \"F\" " << endl;
    }
    
}

int main()
{
    short Grade;
    
    ReadGrade(Grade);
    PrintGradeStudentStatus(Grade);
   
    return 0;
}