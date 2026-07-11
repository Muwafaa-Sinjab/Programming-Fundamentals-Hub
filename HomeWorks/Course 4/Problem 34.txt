#include <iostream>
using namespace std;

float ReadSales(){
    
    int TotalSales;
    
    cout << "Please Enter Your Total Sales for this Month: ";
    cin >> TotalSales;
    
    return TotalSales;
}

float ComissionPersentage(int TotalSales){
    
    if( TotalSales >= 1000000 )
        return 0.01;
        
    else if ( TotalSales >= 500000  )
        return 0.02;
        
    else if ( TotalSales >= 100000 )
        return 0.03;
        
    else if ( TotalSales >= 50000 )
        return 0.05;
        
    else
        return 0.0;
}

float PrintComissionStatus(int TotalSales){
    
    return ComissionPersentage(TotalSales) * TotalSales;
    
    
}

int main()
{
    float TotalSales = ReadSales();
    
    cout << "Your Comission Persentage is: " << ComissionPersentage(TotalSales) << endl;
    cout << "Your Comission is: " << PrintComissionStatus(TotalSales)  << endl;
  
    return 0;
}