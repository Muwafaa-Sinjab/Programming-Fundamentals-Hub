#include <iostream>
#include <cmath>
using namespace std;

void ReadNumbers(float& A, float& B){
    
    cout << "Enter Number A: ";
    cin >> A;
    
    cout << "Enter Number B: ";
    cin >> B;
}


float CalcRectangleAreaThroughDiagonalAndSide(float A, float B){
    
    float Area;
    
    Area = A * ( sqrt(pow(B, 2) - pow(A, 2)) );
    
    return Area;
}


void PrintResult(float Area){
    
    cout <<"\nRectangle Area = " << Area << endl;
    
}


int main()
{
    
    float A, B;
    
    ReadNumbers(A, B);
    PrintResult(CalcRectangleAreaThroughDiagonalAndSide(A, B));
    
    return 0;
}