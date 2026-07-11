/*
Q: Write a program to ask the user to enter 
   Number
   Then print The Number to the power ( 2, 3, 4)
*/

#include <iostream>
using namespace std;

int main()
{
    short Num1;
    
    cout << "Please Enter a Number:" << endl;
    cin >> Num1;
    
    cout << "Your Number To the Power 2 is: " << "\"" << Num1 * Num1 << "\"" << endl;
    cout << "and the Number To the Power 3 is: " << "\"" << Num1 * Num1 * Num1 << "\"" << endl;
    cout << "and the Number To the Power 4 is: " << "\"" << Num1 * Num1 * Num1 * Num1 << "\"" << endl;
    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))

/*
Q: Write a program to ask the user to enter 
   Number
   Then print The Number to the power ( 2, 3, 4)
*/

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    short Num1 ;
    
    cout << "Please Enter a Number:" << endl;
    cin >> Num1;
    
    cout << "Your Number To the Power 2 is: " << "\"" << round(pow(Num1, 2)) << "\"" << endl;
    cout << "and the Number To the Power 3 is: " << "\"" << round(pow(Num1, 3)) << "\"" << endl;
    cout << "and the Number To the Power 4 is: " << "\"" << round(pow(Num1, 4)) << "\"" << endl;
    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))

/*
Q: Write a program to ask the user to enter 
   Number by Functions and  Procedures
   Then print The Number to the power ( 2, 3, 4)
*/

#include <cmath> 
#include <iostream>
using namespace std;


short CalculationPOW2(short Num1){
    
    return round(pow(Num1, 2));
}

short CalculationPOW3(short Num1){
    
    return round(pow(Num1, 3));
}

short CalculationPOW4(short Num1){
    
    return round(pow(Num1, 4));
}

void PrintMassage(){
    
    cout << "Please Enter a Number:" << endl;
}

int main()
{
    short Num1 ;
    
    PrintMassage();
    cin >> Num1;
    
    cout << endl;
    cout << CalculationPOW2(Num1) << endl;
    cout << CalculationPOW3(Num1) << endl;
    cout << CalculationPOW4(Num1) << endl;
    

    return 0;
}
