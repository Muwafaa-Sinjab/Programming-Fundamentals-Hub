//Q: Write a program to calculate Circle Area circle Described Around an Arbitrary Triangle, and print it on the screen

#include <iostream>
#include <cmath>  
using namespace std;

int main()
{
    float FirstSideLengthA, SecondSideLengthB, ThirdSideLengthC, p, Denominator, Numerator, Area;
    const float PI = 3.141592653589793;
    
    cout << "Enter the lengths of the three sides of the triangle to calculate the area of the circumscribed circle." << endl;
    
    cout << "Enter the length of the first side of the triangle: ";
    cin >> FirstSideLengthA;

    cout << "Enter the length of the second side of the triangle: ";
    cin >> SecondSideLengthB;

    cout << "Enter the length of the third side of the triangle: ";
    cin >> ThirdSideLengthC;
 
    cout << endl;
    
    p = (FirstSideLengthA + SecondSideLengthB + ThirdSideLengthC) / 2;
    Numerator = (FirstSideLengthA * SecondSideLengthB * ThirdSideLengthC);
    Denominator = sqrt(p *(p-FirstSideLengthA) * (p-SecondSideLengthB) *(p-ThirdSideLengthC));
    Area = (Numerator / (4 * Denominator));
    Area = pow(Area, 2);
    Area = PI * Area;
    
    cout << "Area of the circle: " << "\"" << round(Area) << "\"" << endl;

    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))

//Q: Write a program to calculate Circle Area circle Described Around an Arbitrary Triangle, by Functions and  Procedures and print it on the screen

#include <iostream>
#include <cmath>  
using namespace std;

void PrintValue(float Area){
    
    cout << "Area of the circle: " << "\"" << round(Area) << "\"" << endl;
}

float Area2Calculation(float Area, const float PI){
    
    return PI * Area;
}


float Area1Calculation(float FirstSideLengthA, float SecondSideLengthB, float ThirdSideLengthC, float p, float &Area){
    
    return Area = pow((FirstSideLengthA * SecondSideLengthB * ThirdSideLengthC) / 
           (4 * sqrt(p * (p - FirstSideLengthA) * (p - SecondSideLengthB) * (p - ThirdSideLengthC))), 2);
}


void ReadValues(float &FirstSideLengthA, float &SecondSideLengthB, float &ThirdSideLengthC){
    
    cout << "Enter the lengths of the three sides of the triangle to calculate the area of the circumscribed circle." << endl;
    
    cout << "Enter the length of the first side of the triangle: ";
    cin >> FirstSideLengthA;

    cout << "Enter the length of the second side of the triangle: ";
    cin >> SecondSideLengthB;

    cout << "Enter the length of the third side of the triangle: ";
    cin >> ThirdSideLengthC;
 
    cout << endl;
}


int main()
{
    float FirstSideLengthA, SecondSideLengthB, ThirdSideLengthC, Area;
    const float PI = 3.141592653589793;
    
    
    ReadValues(FirstSideLengthA, SecondSideLengthB, ThirdSideLengthC);
    float p = (FirstSideLengthA + SecondSideLengthB + ThirdSideLengthC) / 2;
    Area1Calculation(FirstSideLengthA, SecondSideLengthB, ThirdSideLengthC, p, Area);
    Area2Calculation(Area, PI);
    Area = Area2Calculation(Area, PI);
    PrintValue(Area);
    
    return 0;
}