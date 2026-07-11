//Q: Write a program to calculate Circle Area Inscribed in an Isosceles Triangle, and print it on the screen

#include <iostream>
using namespace std;

int main()
{
    float SideA,SideB ;
    const float PI = 3.141592653589793;
    
    cout << "Enter the sides of the isosceles triangle to calculate the area of the inscribed circle:" << endl;
    cout << "Slad A: ";
    cin >> SideA;
    cout << "Slad B: ";
    cin >> SideB; 
    cout << endl;
    
    cout << "Area of the circle: " << "\"" << ( PI * ( SideB * SideB / 4)) * ( (2 * SideA - SideB) / (2 * SideA + SideB)) << "\"" << endl;

    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))


//Q: Write a program to calculate Circle Area Inscribed in an Isosceles Triangle, and print it on the screen

#include <iostream>
#include <cmath>  
using namespace std;

int main()
{
    float SideA,SideB, Area;
    const float PI = 3.141592653589793;
    
    cout << "Enter the sides of the isosceles triangle to calculate the area of the inscribed circle:" << endl;
    cout << "Slad A: ";
    cin >> SideA;
    cout << "Slad B: ";
    cin >> SideB; 
    cout << endl;
    
    Area = (PI * (pow(SideB, 2) / 4)) * ((2 * SideA - SideB) / (2 * SideA + SideB));
    
    cout << "Area of the circle: " << "\"" << floor(Area) << "\"" << endl;

    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))


//Q: Write a program to calculate Circle Area Inscribed in an Isosceles Triangle, by Functions and  Procedures and print it on the screen

#include <iostream>
#include <cmath>  
using namespace std;

void PrintValue(float Area){
    
    cout << "Area of the circle: " << "\"" << floor(Area) << "\"" << endl;
}


float AreaCalculatoin(float SideA, float SideB, float &Area, const float PI){
    
    return  Area = (PI * (pow(SideB, 2) / 4)) * ((2 * SideA - SideB) / (2 * SideA + SideB));
}


void ReadValue(float &SideA, float &SideB){
    
    cout << "Enter the sides of the Isosceles triangle to calculate the area of the inscribed circle:" << endl;
    cout << "Slad A: ";
    cin >> SideA;
    cout << "Slad B: ";
    cin >> SideB; 
    cout << endl;
    
}



int main()
{
    float SideA,SideB, Area;
    const float PI = 3.141592653589793;
    
    ReadValue(SideA, SideB);
    AreaCalculatoin(SideA, SideB, Area, PI);
    PrintValue(Area);
    

    return 0;
}