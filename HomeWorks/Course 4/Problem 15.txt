#include <iostream>
using namespace std;

void ReadInfoForCalc(int& Length, int& width){
    
    cout << "Enter The Length: ";
    cin >> Length;
    
    cout << "Enter The width : ";
    cin >> width;
}


float CalcRectangleArea(int Length, int width){
    
    float Area;
    Area = Length * width;
    return Area;
}


void PrintResult(float Area){
    
    cout << "-----------------\n";
    cout << "The Rectangle Area is: " << Area << endl;
}


int main()
{
    int Length, width;
    
    ReadInfoForCalc(Length, width);
    PrintResult(CalcRectangleArea(Length, width));
    
    return 0;
}