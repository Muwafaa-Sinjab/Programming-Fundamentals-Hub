/*
Q: Write a program to ask the user to enter 
   Number and the power of it
   Then print The Number 
*/

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    short Num1, Num2;
    
    cout << "Please Enter a Number:" << endl;
    cin >> Num1;
    cout << "Please Enter The power of the Number:" << endl;
    cin >> Num2;
    
    cout << "Your Number To the Power " << Num2 << " is: " << "\"" << round(pow(Num1, Num2)) << "\"" << endl;
    return 0;
}


---------------------------------------------------------------------

((((((((((Update Code))))))))))


/*
Q: Write a program to ask the user to enter 
   Number and the power of it by Functions and  Procedures
   Then print The Number 
*/

#include <iostream>
#include <cmath> 
using namespace std;

void PrintValue(short Num2, short Result){
    
    cout << "Your Number To the Power " << Num2 << " is: " << "\"" << Result << "\"" << endl;
}

short PowerCalculaion(short Num1, short Num2, short &Result){
    
    return Result = round(pow(Num1, Num2));
}


void ReadValues(short &Num1, short &Num2){
    
    cout << "Please Enter a Number: " ;
    cin >> Num1;
    cout << "Please Enter The power of the Number: ";
    cin >> Num2;
}


int main()
{
    short Num1, Num2, Result;
    
    ReadValues(Num1, Num2);
    PowerCalculaion(Num1, Num2, Result);
    PrintValue(Num2, Result);
    
    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))

/*
Q: Write a program to ask the user to enter 
   Number and the power of it by for loops
   Then print The Number 
*/

#include <iostream>
using namespace std;


void ReaNum(short &Num, short &Power){
    
    cout << "Enter a number: ";
    cin >> Num;
    
    cout << "Enter a Power: ";
    cin >> Power;
    
    cout << "\n";
}


void PrintLoop(short Num, short Power){
    
   if (Power == 0) {
       
        cout << "The result is:\"1\"" << endl; 
   }else if ( Num == 0 ){
       
        cout << "The result is:\"0\"" << endl; 
   }else{
       
       int Multi = 1;
       
       for (int Counter = 1; Counter <= Power; Counter++){
           
            Multi = Multi * Num;
       }
       
       cout << "The result is: "<< "\"" << Multi << "\"" << endl;
   }
}

int main()
{
    
    short Num, Power;
    ReaNum(Num, Power);
    PrintLoop(Num, Power);
    
    return 0;
}