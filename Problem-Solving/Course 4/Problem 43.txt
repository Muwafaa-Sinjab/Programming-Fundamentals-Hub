#include <iostream>
using namespace std;

struct stTimeInfo{
    
    int Day, Hour, Minute, Second;
};

int ReadNumNumber(string Massage){
    
    float Number = 0;
    
    cout << Massage;
    cin >> Number;
    
    return Number;
    
}


stTimeInfo ConvertTime(int TotalSecond) {
    
    stTimeInfo Convert;
    
    Convert.Day = Convert.Second / (24 * 60 * 60);
    Convert.Second %= (24 * 60 * 60);
    
    Convert.Hour = Convert.Second / (60 * 60);
    Convert.Second %= (60 * 60);
    
    Convert.Minute = Convert.Second / 60;
    Convert.Second = Convert.Second % 60;
    
    return Convert;
}

string PrintTotal(stTimeInfo Convert) {
    string Result = "Days: " + to_string(Convert.Day) +
                    ", Hours: " + to_string(Convert.Hour) +
                    ", Minutes: " + to_string(Convert.Minute) +
                    ", Seconds: " + to_string(Convert.Second);
    return Result;
}


int main() {
    
    int Seconds = ReadNumNumber("The Seconds Taken: ");
    
    stTimeInfo Time = ConvertTime(Seconds);
    cout << PrintTotal(Time) << endl;
    
    return 0;
}