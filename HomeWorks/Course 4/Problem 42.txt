#include <iostream>
using namespace std;

struct stTimeInfo {
    int Day, Hour, Minute, Second;
};

stTimeInfo ReadTimes() {
    stTimeInfo AllTime;

    cout << "Enter These Information to Calculate the task Time taken in sec: " << endl;
    cout << "The Days Taken: ";
    cin >> AllTime.Day;
    cout << "The Hours Taken: ";
    cin >> AllTime.Hour;
    cout << "The Minutes Taken: ";
    cin >> AllTime.Minute;
    cout << "The Seconds Taken: ";
    cin >> AllTime.Second;

    return AllTime;
}

int TimeCalculation(stTimeInfo Time) {
    int TotalTime = (Time.Day * 24 * 60 * 60) + 
                    (Time.Hour * 60 * 60) + 
                    (Time.Minute * 60) + 
                    Time.Second;
    return TotalTime;
}

void PrintTime(stTimeInfo Time, int TotalTime) {
    cout << "The Total time in seconds is: \"" << TotalTime << "\"" << endl;
}

int main() {
    stTimeInfo Time = ReadTimes();
    int TotalTime = TimeCalculation(Time);
    PrintTime(Time, TotalTime);

    return 0;
}