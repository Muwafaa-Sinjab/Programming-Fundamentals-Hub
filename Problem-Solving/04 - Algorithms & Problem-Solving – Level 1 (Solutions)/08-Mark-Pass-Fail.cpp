#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int ReadMark(){
    
    int Mark;
    
    cout << "Please Enter Your Mark: ";
    cin >> Mark;
    
    return Mark;
}

enPassFail CheckMark(int Mark){
    
    if (Mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResult(int Mark){
    
    if (CheckMark(Mark) == enPassFail::Pass)
        cout << "Congratulations you pass" <<endl;
    else
        cout << "Unfortunately you fail" <<endl;
    
}


int main()
{
    
    PrintResult(CheckMark(ReadMark()));

    return 0;
}