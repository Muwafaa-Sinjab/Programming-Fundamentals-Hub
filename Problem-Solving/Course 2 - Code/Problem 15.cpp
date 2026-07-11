//Q: Write a program to calculate Rectangle area and print it on the screen

#include <iostream>
using namespace std;

int main()
{
    float Length, Height;
    
    cout << "Please Enter The Length and the Height of the Rectangle to give the area of it." << endl;
    cout << "Length: ";
    cin >> Length;
    cout <<"Height: ";
    cin >> Height; 
    cout << endl;
    
    cout << "The Area of the Rectangle is: " << "\"" << Length * Height << "\"" << endl;

    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))


//Q: Write a program to calculate Rectangle area by Functions and Procedures and print it on the screen

#include <iostream>
using namespace std;

void PrintValue(float Area){
    
    cout << "The Area of the Rectangle is: " << "\"" << Area << "\"" << endl;
}


int RectangleCalculate(float &Length, float &Height, float &Area){
    
    return Area = Length * Height;
}


void ReadValue(float &Length, float &Height){
    
    cout << "Please Enter The Length and the Height of the Rectangle to give the area of it." << endl;
    cout << "Length: ";
    cin >> Length;
    cout <<"Height: ";
    cin >> Height; 
    cout << endl;
    
}


int main()
{
    float Length, Height, Area;
    
    ReadValue(Length, Height);
    RectangleCalculate(Length, Height, Area);
    PrintValue(Area);
    return 0;
}