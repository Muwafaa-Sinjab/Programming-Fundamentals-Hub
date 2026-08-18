#include <iostream>
#include <cmath>
using namespace std;

void ReadTriangleData(float& A, float& B, float& C){
    
    cout << "Enter Triangle Side A: ";
    cin >> A;
    
    cout << "Enter Triangle Side B: ";
    cin >> B;
    
    cout << "Enter Triangle Side C: ";
    cin >> C;
}


float CalcCircleAreaByITriangle(float A, float B, float C){
    
    const float PI = 3.141592653589793;
    const float p = (A + B + C) / 2;
    
    float T;
    T = (A * B * C) / (4 * (sqrt( p * (p - A) * (p - B) * (p - C))));
    
    float Area;
    Area = PI * pow(T, 2) ;
    
    return Area;
}


void PrintResult(float Area){
    
    cout <<"\nTriangle Area = " << Area << endl;
    
}


int main()
{
    float A, B, C;
    
    ReadTriangleData(A, B, C);
    PrintResult(CalcCircleAreaByITriangle(A, B, C));
    
    return 0;
}