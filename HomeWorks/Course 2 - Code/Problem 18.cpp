/*
   Q: Write a program to calculate the Circle Area then print is on the screen   
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    
    const float PI = 3.141592653589793;
    float R, Area;
    
    cout << "Enter R: ";
    cin >> R;
    
    Area = PI * pow(R, 2);
    
    cout << "The Area of the Circle is: " << "\"" << ceil(Area) << "\"" << endl;
    
    return 0; 
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))

/*
   Q: Write a program to calculate the Circle Area by Functions and  Procedures then print is on the screen   
*/

#include <iostream>
#include <cmath>
using namespace std;


void PrintValue(float Area){
    
    cout << "The Area of the Circle is: " << "\"" << ceil(Area) << "\"" << endl;
}

float AreaCalculation(float &R, float &Area, const float PI){
    
    return Area = PI * pow(R, 2);
}


void ReadValues(float &R){
    
    cout << "Enter The Value of R to calculate the Circle Area: ";
    cin >> R;
    
}

int main () {
    
    float R, Area;
    const float PI = 3.141592653589793;
    
   
    ReadValues(R);
    AreaCalculation(R , Area, PI);
    PrintValue(Area);

    return 0; 
}
