//Q: Write a program to calculate Circle Area Along the Circumference, and print it on the screen

#include <iostream>
using namespace std;

int main()
{
    float circumference;
    const float PI = 3.141592653589793;
    
    cout << "Enter the circumference of the circle to calculate its area:" << endl;
    cout << "Circumference: ";
    cin >> circumference;
    cout << endl;
    
    cout << "Area of the circle: " << "\"" << (circumference * circumference) / (4 * PI) << "\"" << endl;

    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))

//Q: Write a program to calculate Circle Area Along the Circumference, and print it on the screen

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float circumference, Area;
    const float PI = 3.141592653589793;
    
    cout << "Enter the circumference of the circle to calculate its area:" << endl;
    cout << "Circumference: ";
    cin >> circumference;
    cout << endl;
    
    Area = pow(circumference, 2) / (4 * PI);
    
    cout << "Area of the circle: " << "\"" << floor(Area) << "\"" << endl;

    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))

//Q: Write a program to calculate Circle Area Along the Circumference, by Functions and  Procedures and print it on the screen

#include <iostream>
#include <cmath>
using namespace std;

void PrintValue(float Area){
    
    cout << "Area of the circle: " << "\"" << floor(Area) << "\"" << endl;
}


float AreaCalculation(float circumference, float &Area, const float PI){
    
    return Area = pow(circumference, 2) / (4 * PI);
}

void ReadValue(float &circumference){
    
    cout << "Enter the circumference of the circle to calculate its area." << endl;
    cout << "Circumference: ";
    cin >> circumference;
    cout << endl;
}

int main()
{
    float circumference, Area;
    const float PI = 3.141592653589793;
    
    ReadValue(circumference);
    AreaCalculation(circumference, Area, PI);
    PrintValue(Area);
    

    return 0;
}