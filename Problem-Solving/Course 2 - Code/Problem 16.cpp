/*
   Q: Write a program to calculate rectangle area Through Diagonal and Side Area
   of rectangle and print it on the screen  
*/

#include <iostream>
#include <cmath>
using namespace std;
int main () {
    
    float A, D, Area;
    
    cout << "Enter A: ";
    cin >> A;
    cout << "Enter B: ";
    cin >> D;
    
    Area = A * sqrt(pow(D, 2) - pow(A, 2));
    
    cout << "The Area of the rectangle is: " << "\"" << Area << "\"" << endl;
    
    return 0; 
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))

/*
   Q: Write a program to calculate rectangle area by Functions and  Procedures Through Diagonal and Side Area
   of rectangle and print it on the screen  
*/

#include <iostream>
#include <cmath>
using namespace std;

void PrintValue(float Area){
    
    cout << "The Area of the rectangle is: " << "\"" << Area << "\"" << endl;
}

float ProgramCalculation(float A, float D, float &Area ){

    return Area = A * sqrt(pow(D, 2) - pow(A, 2));
}

void PrintMassage(float &A, float &D)
{
    cout << "Please Enter A value: ";
    cin >> A;
    cout << "and also please Enter B value: ";
    cin >> D;
}



int main () {
    
    float A, D, Area;
    
    PrintMassage(A, D);
    ProgramCalculation(A, D, Area);
    PrintValue(Area);
    
    return 0; 
}