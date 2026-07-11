// Hire a Driver Case 2

#include <iostream>
#include <string>
using namespace std;


struct stInfo{
    
    int Age;
    bool HasDriverLicense;
    bool HasRecommendation;
};


stInfo ReadInfo(){
    
    stInfo Info;
    
    
    cout << "Please enter Your Age: ";
    cin >> Info.Age;
    
    cout << "Do You Have Driver License? ( 1 = Yes ), ( 0 = No ): ";
    cin >> Info.HasDriverLicense;
    
     cout << "Do You Have Recommendation? ( 1 = Yes ), ( 0 = No ): ";
    cin >> Info.HasRecommendation;
    
    return Info;
}

bool IsAccepted(stInfo Info){
    
    return (Info.Age > 21 && Info.HasDriverLicense || Info.HasRecommendation);
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