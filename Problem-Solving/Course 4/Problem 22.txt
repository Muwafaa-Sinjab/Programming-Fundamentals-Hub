#include <iostream>
#include <cmath>
using namespace std;

void ReadTriangleData(float& A, float& B){
    
    cout << "Enter Triangle Side A: ";
    cin >> A;
    
    cout << "Enter Triangle Side B: ";
    cin >> B;
    
}


float CalcCircleAreaByITriangle(float A, float B){
    
    const float PI = 3.141592653589793;
    float Area;
    
    Area = (PI * (pow(B, 2) / 4)) * ((2 * A - B) / (2 * A + B));
    
    return Area;
}


void PrintResult(float Area){
    
    cout <<"\nTriangle Area = " << Area << endl;
    
}


int main()
{
    float A, B;
    
    ReadTriangleData(A, B);
    PrintResult(CalcCircleAreaByITriangle(A, B));
    
    return 0;
}