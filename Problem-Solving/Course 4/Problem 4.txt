// Hire a driver - Case 1

#include <iostream>
#include <string>
using namespace std;


struct stInfo{
    
    int Age;
    bool HasDriverLicense;
};


stInfo ReadInfo(){
    
    stInfo Info;
    
    
    cout << "Please enter Your Age: ";
    cin >> Info.Age;
    
    cout << "Do You Have Driver License? ( 1 = Yes ), ( 0 = No ): ";
    cin >> Info.HasDriverLicense;
    
    return Info;
}

bool IsAccepted(stInfo Info){
    
    return (Info.Age > 21 && Info.HasDriverLicense);
}

void PrintResult(stInfo Info){

    if (IsAccepted(Info))
        cout << "\nHierd" << endl;
    else
        cout << "\nRejected" << endl;
    
}


int main()
{
    
   PrintResult(ReadInfo());
   
    return 0;
}