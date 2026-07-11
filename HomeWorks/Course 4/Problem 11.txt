#include <iostream>
#include <iomanip>
using namespace std;


enum enPassOrFail { Pass = 1, Fail = 2 };


void ReadMark(int Mark[3]){
    
    
    cout << "Please Enter First Mark: ";
    cin >> Mark[0];
    
    cout << "Please Enter Second Mark: ";
    cin >> Mark[1];
    
    cout << "Please Enter First Mark: ";
    cin >> Mark[2];
    
}

int SumOfNumbers(int Mark[3]){
    
    return Mark[0] +  Mark[1] +  Mark[2];
}

float AverageOfNumbers(int Mark[3]){
    
    return (float)SumOfNumbers(Mark) / 3;
}


enPassOrFail CalcStatus(float Average){
    
    if (Average >= 50)
        return enPassOrFail::Pass;
    else
        return enPassOrFail::Fail;
}

void PrintResult(float Average){
    
    cout << fixed << setprecision(2);
    
    if (Average == enPassOrFail::Pass)
        cout << "\nYour Average of Your Marks is " << Average << " ,Congratulations you pass" << endl;
    else
        cout << "\nYour Average of Your Marks is " << Average <<  " ,Unfortunately you fail" <<endl;
    
}


int main()
{
    int Mark[3];
    
    ReadMark(Mark);
    PrintResult(AverageOfNumbers(Mark));
    return 0;
}