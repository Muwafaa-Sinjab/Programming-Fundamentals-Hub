#include <iostream>
using namespace std;

enum enWeekDays { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7 };

int ReadWeekDay(string Message, int From, int To){
    
    int Number = 0;
    
    do{
        
        cout << Message;
        cin >> Number;
        
    }while(Number < From || Number > To);
    
    return Number;
    
}

enWeekDays ReadWeekDay(){
    
    return (enWeekDays)ReadWeekDay("Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7: ", 1,7);
}

string GetDauOfWeek(enWeekDays Day){
    
    switch (Day){
        
        case enWeekDays::Sunday:
            return "\nSunday";
        case enWeekDays::Monday:
            return "\nMonday;";
        case enWeekDays::Tuesday:
            return "\nTuesday";
        case enWeekDays::Wednesday:
            return "\nWednesday";
        case enWeekDays::Thursday:
            return "\nThursday";
        case enWeekDays::Friday:
            return "\nFriday";
        case enWeekDays::Saturday:
            return "\nSaturday";
        default:
            return "\nnot Valid Day";
        
    }
    
}


int main()
{
    
    cout << GetDauOfWeek(ReadWeekDay()) << endl;
    
    
    return 0;
}