#include <iostream>
#include <cmath>
using namespace std;

float ReadCircumference(){
    
    float L;
    
    cout << "Enter Square Side L: ";
    cin >> L;
    
    return L;
}


float CalcCircleAreaAlongTheCircumference(float L){
    
    const float PI = 3.141592653589793;
    float Area;
    
    Area = pow(L, 2) / (4 * PI);
    
    return Area;
}


void PrintResult(float Area){
    
    cout <<"\nCircle Area = " << Area << endl;
    
}


int main()
{
    
    PrintResult(CalcCircleAreaAlongTheCircumference(ReadCircumference()));
    
    return 0;
}