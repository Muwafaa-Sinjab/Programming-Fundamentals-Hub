/*
Q: Write a program that asks the user to enter a number representing a day of the week (from 1 to 7),
and then displays the name of the corresponding day.

Mapping:
1 → Sunday
2 → Monday
3 → Tuesday
4 → Wednesday
5 → Thursday
6 → Friday
7 → Saturday

If the entered number is not between 1 and 7, the program should display an error message.
*/




#include <iostream>
using namespace std;

void ReadDayNumber(short &DayNum){
    
    cout << "Please Enter Day Number: ";
    cin >> DayNum;
    
}

void PrintTheDay(short DayNum){
    
    if( DayNum >= 1 && DayNum <= 7){
        
        if(DayNum == 1){
        
            cout << "It's Sunday" << endl;
        
        }else if (DayNum == 2){
        
            cout << "It's Monday" << endl;
        
        }else if (DayNum == 3){
        
            cout << "It's Tuesday" << endl;
        
        }else if (DayNum == 4){
        
            cout << "It's Wednesday" << endl;
        
        }else if (DayNum == 5){
        
            cout << "It's Thursday" << endl;
        
        }else if (DayNum == 6){
        
            cout << "It's Friday" << endl;
    
        }else{
        
            cout << "It's Saturday" << endl;
        
        }// end of Second ( If statment )
        
        
    }else{
        
        cout << "\n";
        cout << "Sorry, Wrong Day Number.";
        
    }    // end of First ( If statment )
    

} // end of Procedure

int main()
{
    short DayNum;
    
    ReadDayNumber(DayNum);
    PrintTheDay(DayNum);
    
    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))


/*
Q: Write a program that asks the user to enter a number representing a day of the week (from 1 to 7),
and then displays the name of the corresponding day. 

The program should use a `switch` statement to map the entered number to the correct day of the week.

The program should display the following mapping:
1 → Sunday
2 → Monday
3 → Tuesday
4 → Wednesday
5 → Thursday
6 → Friday
7 → Saturday

If the entered number is not between 1 and 7, the program should display an error message:
"Error: Please enter a valid day number between 1 and 7."
*/



#include <iostream>
using namespace std;

void ReadDayNumber(short &DayNum){
    
    cout << "Please Enter Day Number: ";
    cin >> DayNum;
    
}

void PrintTheDay(short DayNum){
    
    
    switch (DayNum){
        
        case 1:
        
        cout << "It's Sunday" << endl;
        
        break;
        
        case 2:
        
        cout << "It's Monday" << endl;
        
        break;
        
        case 3:
        
        cout << "It's Tuesday" << endl;
        
        break;
        
        case 4:
        
        cout << "It's Wednesday" << endl;
        
        break;
        
        case 5:
        
        cout << "It's Thursday" << endl;
        
        break;
        
        case 6:
        
        cout << "It's Friday" << endl;
        
        break;
        
        case 7:
        
        cout << "It's Saturday" << endl;
        
        break;
        
        default:
        
        cout << "\n";
        cout << "Sorry, Wrong Day Number.";
        
    }
} 

int main()
{
    short DayNum;
    
    ReadDayNumber(DayNum);
    PrintTheDay(DayNum);
    
    return 0;
}