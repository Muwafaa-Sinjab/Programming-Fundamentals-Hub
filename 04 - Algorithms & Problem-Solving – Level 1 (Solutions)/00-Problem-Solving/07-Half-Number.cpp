#include <iostream>
using namespace std;

int ReadNum(){
    
    int Num;
    
    cout << "Please Enter Your Number: ";
    cin >> Num;
    
    return Num;
}

float CalcHalfNumber(int Num){
    
    return (float) Num / 2;
}

void PrintResult(int Num){
    
    string Result = "Half of " + to_string(Num) + " is " + to_string(CalcHalfNumber(Num));
    cout << endl << Result << endl;

}


int main()
{
    
    PrintResult(ReadNum());

    return 0;
}