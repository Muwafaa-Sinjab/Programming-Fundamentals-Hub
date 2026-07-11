//Q: Write a program to calculate Circle Area Through Diameter and print it on the screen

#include <iostream>
using namespace std;

int main()
{
    float DiameterOfCircle;
    const float PI = 3.141592653589793;
    
    cout << "Please Enter The Diameter of the Circle to give the area of it." << endl;
    cout << "Diameter: ";
    cin >>  DiameterOfCircle;
    cout << endl;
    
    cout << "The Area of the Circle is: " << "\"" << (PI * (DiameterOfCircle * DiameterOfCircle)) / 4 << "\"" << endl;

    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))


//Q: Write a program to calculate Circle Area Through Diameter and print it on the screen

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float DiameterOfCircle, Area;
    const float PI = 3.141592653589793;
    
    cout << "Please Enter The Diameter of the Circle to give the area of it." << endl;
    cout << "Diameter: ";
    cin >>  DiameterOfCircle;
    cout << endl;
    
    Area = (PI * pow(DiameterOfCircle, 2)) / 4;
    
    cout << "The Area of the Circle is: " << "\"" << ceil(Area) << "\"" << endl;

    return 0;
}


---------------------------------------------------------------------

((((((((((Update Code))))))))))

//Q: Write a program to calculate Circle Area Through Diameter by Functions and  Procedures and print it on the screen

#include <iostream>
#include <cmath>
using namespace std;

void PrintValue(float Area){
    
    cout << "The Area of the Circle is: " << "\"" << ceil(Area) << "\"" << endl;
}

float AreaCalculation(float &DiameterOfCircle, float &Area, const float PI){
    
    return Area = (PI * pow(DiameterOfCircle, 2)) / 4;
}

void ReadValue(float &DiameterOfCircle){
    
    cout << "Please Enter The Diameter of the Circle to give the area of it." << endl;
    cout << "Diameter: ";
    cin >>  DiameterOfCircle;
    cout << endl;
}

int main()
{
    float DiameterOfCircle, Area;
    const float PI = 3.141592653589793;
    
    ReadValue(DiameterOfCircle);
    AreaCalculation(DiameterOfCircle, Area, PI);
    PrintValue(Area);

    return 0;
}