#include <iostream>
#include <cmath>
using namespace std;

void ReadNumbers(float& A, float& H){
    
    cout << "Enter Number A: ";
    cin >> A;
    
    cout << "Enter Number H: ";
    cin >> H;
}


float CalcTriangleArea(float A, float H){
    
    float Area;
    
    Area = (A / 2) * H;
    
    return Area;
}


void PrintResult(float Area){
    
    cout <<"\nTriangle Area = " << Area << endl;
    
}


int main()
{
    
    float A, H;
    
    ReadNumbers(A, H);
    PrintResult(CalcTriangleArea(A, H));
    
    return 0;
}