#include <iostream>
#include <cmath>
using namespace std;

float ReadDiameter(){
    
    float D;
    
    cout << "Enter Diameter D: ";
    cin >> D;
    
    return D;
}


float CalcCircleAreaTroughDiameter(float D){
    
    const float PI = 3.141592653589793;
    float Area;
    
    Area = ( PI * pow(D, 2) ) / 4;
    
    return Area;
}


void PrintResult(float Area){
    
    cout <<"\nCircle Area Trough Diameter = " << Area << endl;
    
}


int main()
{
    
    PrintResult(CalcCircleAreaTroughDiameter(ReadDiameter)));
    
    return 0;
}