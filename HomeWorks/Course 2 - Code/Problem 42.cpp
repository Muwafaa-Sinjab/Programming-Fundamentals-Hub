/*
Q: Write a program to Calculate the task duration in second and print it on screen
    Given the Time duration of a task in numbers of Days, Hours, Minutes, Seconds.  
*/

#include <iostream>
using namespace std; 

int main()
{
    short Day, Hour, Minute, Second;
    int TotalTime;
    
    cout<<"Enter These Information to Calculate the task Time taken in sec: " << endl;
    cout << "The Days Taken: ";
    cin >> Day;
    cout << "The Hours Taken: ";
    cin >> Hour;
    cout << "The Minutes Taken: ";
    cin >> Minute;
    cout << "The Seconds Taken: ";
    cin >> Second;
    
    TotalTime = (Day * 24 * 60 * 60) + (Hour * 60 * 60) + (Minute * 60) + Second;
    
    cout << "The Total time is: " << "\"" << TotalTime << "\"" << endl;

    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))

/*
Q: Write a program to Calculate the task duration in second by Functions and  Procedures and print it on screen
    Given the Time duration of a task in numbers of Days, Hours, Minutes, Seconds.  
*/

#include <iostream>
using namespace std; 

void PrintTime(int TotalTime){
    
    cout << "The Total time is: " << "\"" << TotalTime << "\"" << endl;
}

int TimeCalculation(int &TotalTime, short Day, short Hour, short Minute, short Second){
    
    return TotalTime = (Day * 24 * 60 * 60) + (Hour * 60 * 60) + (Minute * 60) + Second;
}

void ReadNumber(short &Day, short &Hour, short &Minute, short &Second){
    
    cout<<"Enter These Information to Calculate the task Time taken in sec: " << endl;
    cout << "The Days Taken: ";
    cin >> Day;
    cout << "The Hours Taken: ";
    cin >> Hour;
    cout << "The Minutes Taken: ";
    cin >> Minute;
    cout << "The Seconds Taken: ";
    cin >> Second;
}

int main()
{
    short Day, Hour, Minute, Second;
    int TotalTime;
    
    ReadNumber(Day, Hour, Minute, Second);
    TimeCalculation(TotalTime, Day, Hour, Minute, Second);
    PrintTime(TotalTime);

    return 0;
}