#include <iostream>
using namespace std;

void ReadMark(int Num[3]){
    
    
    cout << "Please Enter First Number: ";
    cin >> Num[0];
    
    cout << "Please Enter Second Number: ";
    cin >> Num[1];
    
    cout << "Please Enter First Number: ";
    cin >> Num[2];
    
}

int SumOfNumbers(int Num[3]){
    
    return Num[0] +  Num[1] +  Num[2];
}

void PrintResult(int Result){
    
    cout << "\nTotal of Your Numbers is " << Result << endl;
    
}


int main()
{
    int Num[3];
    
    ReadMark(Num);
    PrintResult(SumOfNumbers(Num));
    return 0;
}