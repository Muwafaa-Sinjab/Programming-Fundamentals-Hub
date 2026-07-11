#include <iostream>
#include <cmath>
using namespace std;

float ReadRadious(){
    
    float R;
    
    cout << "Enter Radious R: ";
    cin >> R;
    
    return R;
}


float CalcCircleArea(float R){
    
    const float PI = 3.141592653589793;
    float Area;
    
    Area = PI * pow(R, 2);
    
    return Area;
}


void PrintResult(float Area){
    
    cout <<"\nCircle Area = " << Area << endl;
    
}


int main()
{
    
    PrintResult(CalcCircleArea(ReadRadious()));
    
    return 0;
}