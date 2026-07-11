/*
Q: Write a program that asks the user to enter their Total Sales for this month, 
and then displays the corresponding commission based on the following scale:

- If TotalSales is 1,000,000 or more → Commission is 1% of TotalSales
- If TotalSales is 500,000 to 999,999 → Commission is 2% of TotalSales
- If TotalSales is 100,000 to 499,999 → Commission is 3% of TotalSales
- If TotalSales is 50,000 to 99,999 → Commission is 5% of TotalSales
- If TotalSales is below 50,000 → No commission
*/


#include <iostream>
using namespace std;

void ReadSales(int &TotalSales){
    
    cout << "Please Enter Your Total Sales for this Month: ";
    cin >> TotalSales;
}

void PrintComissionStatus(int TotalSales){
    
    if( TotalSales >= 1000000 ){
        
        cout << "Your Comission is: " << 0.01 * TotalSales << endl;
    }else if ( TotalSales >= 500000  ){
        
        cout << "Your Comission is: " << 0.02 * TotalSales << endl;
    }else if ( TotalSales >= 100000 ){
        
        cout << "Your Comission is: " << 0.03 * TotalSales << endl;
    }else if ( TotalSales >= 50000 ){
        
        cout << "Your Comission is: " << 0.05 * TotalSales << endl;
    }else{
        
        cout << "Your Comission is: " << 0.0 * TotalSales << endl;
    }
    
}

int main()
{
    int TotalSales;
    
    ReadSales(TotalSales);
    PrintComissionStatus(TotalSales);
   
    return 0;
}