#include <iostream>
using namespace std; 

float ReadNumNumber(string Massage){
    
    float Number = 0;
    
    cout << Massage;
    cin >> Number;
    
    return Number;
    
}

float TotalBill(float BillValue){
    
    return BillValue * 1.1 * 1.16;
}

void PrintResult(){
    
    float BillValue = ReadNumNumber("Enter The Bill Value of of the Customer: ");
    cout << "The Total Bill is: " << "\"" << TotalBill(BillValue) << "\"" << endl;

}


int main()
{
    
    PrintResult();
    
    return 0;
}