/*
Q: Write a program that input the number of Seconds and change it to Days, Hours, Minutes.  
*/

#include <iostream>
using namespace std; 

int main()
{
    int Day, Hour, Minute, Second, TotalSecond;
    
    cout<<"Enter the time in  \"sec\" to Calculate the task Time: " << endl;
    cout << "The Seconds Taken: ";
    cin >> TotalSecond;
    
    Day = TotalSecond / (24 * 60 * 60 );
    TotalSecond = TotalSecond % (24 * 60 * 60 );
    
    Hour = TotalSecond / (60 * 60);
    TotalSecond = TotalSecond % (60 * 60);
    
    Minute = TotalSecond / (60);
    Second = TotalSecond % (60);
    
    cout << "The Time Taken is: " << Day << ":" << Hour << ":" << Minute << ":" << Second << endl; 
    

    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))

#include <iostream>
using namespace std;

void TotalTime(int Day, int Hour, int Minute, int Second) {
    cout << "The Time Taken is: " 
         << Day << " Days, " 
         << Hour << " Hours, " 
         << Minute << " Minutes, " 
         << Second << " Seconds" 
         << endl;
}

void ReadTotalSec(int &TotalSecond) {
    cout << "Enter the time in seconds to calculate the task time: ";
    cin >> TotalSecond;
}

void ConvertTime(int TotalSecond, int &Day, int &Hour, int &Minute, int &Second) {
    Day = TotalSecond / (24 * 60 * 60);
    TotalSecond %= (24 * 60 * 60);
    
    Hour = TotalSecond / (60 * 60);
    TotalSecond %= (60 * 60);
    
    Minute = TotalSecond / 60;
    Second = TotalSecond % 60;
}

int main() {
    int Day, Hour, Minute, Second, TotalSecond;
    
    ReadTotalSec(TotalSecond);
    ConvertTime(TotalSecond, Day, Hour, Minute, Second);
    TotalTime(Day, Hour, Minute, Second);
    
    return 0;
}