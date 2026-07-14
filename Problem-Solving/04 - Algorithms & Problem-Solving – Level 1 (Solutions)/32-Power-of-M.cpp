#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber(string Massage){
    
    int Number;
    
    do{
        
        cout << Massage;
        cin >> Number;
        
    }while(Number < 0);
    
    return Number;
}

int ReadPower(){
    
    int Power;
    
    cout << "Please Enter The Power Of the Number: ";
    cin >> Power;
    
    return Power;
}

int PowerOfNum(int Number, int Power){
    
    if (Power == 0){
        return 1;
    }
    
    
    int P = 1;
    
    for (int counter = 1; counter <= Power; counter++){
        
        P *= counter;
    } 
    
    return P;
}




int main()
{
    
    int Number = ReadNumber("Please Enter Positive Number: ");
    int Power = ReadPower();
    
    cout << "\nThe Result is: " << PowerOfNum(Number, Power) << endl;
    return 0;

}