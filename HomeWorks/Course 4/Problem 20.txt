#include <iostream>
#include <cmath>
using namespace std;

float ReadSquareSide(){
    
    float A;
    
    cout << "Enter Square Side A: ";
    cin >> A;
    
    return A;
}


float CalcCircleAreaInscribedInSquare(float A){
    
    const float PI = 3.141592653589793;
    float Area;
    
    Area = ( PI * pow(A, 2) ) / 4;
    
    return Area;
}


void PrintResult(float Area){
    
    cout <<"\nCircle Area = " << Area << endl;
    
}


int main()
{
    
    PrintResult(CalcCircleAreaInscribedInSquare(ReadSquareSide()));
    
    return 0;
}