//Q: Write a program to calculate Circle Area Inscribed in a Square, and print it on the screen

#include <iostream>
using namespace std;

int main()
{
    float squareSide;
    const float PI = 3.141592653589793;
    
    cout << "Enter the side length of the square to find the area of the circle inscribed within it:" << endl;
    cout << "Side length: ";
    cin >> squareSide;
    cout << endl;
    
    cout << "Area of the inscribed circle: " << "\"" << (PI * (squareSide * squareSide)) / 4 << "\"" << endl;

    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))

//Q: Write a program to calculate Circle Area Inscribed in a Square, and print it on the screen

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float squareSide, Area;
    const float PI = 3.141592653589793;
    
    cout << "Enter the side length of the square to find the area of the circle inscribed within it:" << endl;
    cout << "Side length: ";
    cin >> squareSide;
    cout << endl;
    
    Area = (PI * pow(squareSide, 2)) / 4;
    
    cout << "Area of the inscribed circle: " << "\"" << ceil(Area) << "\"" << endl;

    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))

//Q: Write a program to calculate Circle Area Inscribed in a Square, by Functions and  Procedures and print it on the screen

#include <iostream>
#include <cmath>
using namespace std;

void PrintValue(float Area){
    
    cout << "Area of the inscribed circle: " << "\"" << ceil(Area) << "\"" << endl;
}

float AreaCalculation(float &squareSide, float &Area, const float PI){
    
   return Area = (PI * pow(squareSide, 2)) / 4;
}

void ReadValue(float &squareSide){
    
    cout << "Enter the side length of the square to find the area of the circle inscribed within it:" << endl;
    cout << "Side length: ";
    cin >> squareSide;
    cout << endl;
}
    
int main()
{
    float squareSide, Area;
    const float PI = 3.141592653589793;
    
    ReadValue(squareSide);
    AreaCalculation(squareSide, Area, PI);
    PrintValue(Area);
    
    return 0;
}