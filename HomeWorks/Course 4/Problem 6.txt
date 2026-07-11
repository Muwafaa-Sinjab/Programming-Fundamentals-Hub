// FullName

#include <iostream>
#include <string>
using namespace std;


struct stInfo{
    
    string FisrtName;
    string LastName;
};

stInfo ReadNameInfo(){
    
    stInfo Info;
    
    cout << "Please enter Fisrt Name: ";
    cin >> Info.FisrtName;
    
    cout << "Please enter Last Name: ";
    cin >> Info.LastName;
    
    return Info;
}

string MakeFullName(stInfo Info){


    string FullName = Info.FisrtName + " " + Info.LastName;
    return FullName;
}

void PrintFullName(string FullName){

    cout << "Your Full Name is: " <<  FullName;
}


int main()
{
    
    PrintFullName(MakeFullName(ReadNameInfo()));
   
    return 0;
}