#include <iostream>
#include <iomanip>
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

float AverageOfNumbers(int Num[3]){
    
    return (float)SumOfNumbers(Num) / 3;
}

void PrintResult(int Total, float Average){
    
    cout << fixed << setprecision(2);
    cout << "\nTotal of Your Numbers is " << Total << endl;
    cout << "Average of Your Numbers is " << Average << endl;
}


int main()
{
    int Num[3];
    
    ReadMark(Num);
    PrintResult(SumOfNumbers(Num),AverageOfNumbers(Num));
    return 0;
}