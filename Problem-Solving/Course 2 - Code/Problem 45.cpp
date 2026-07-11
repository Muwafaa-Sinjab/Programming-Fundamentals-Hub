/*
Q: Write a program that asks the user to enter a number representing a month (from 1 to 12),
and then displays the name of the corresponding month.

Mapping:
1 → January
2 → February
3 → March
4 → April
5 → May
6 → June
7 → July
8 → August
9 → September
10 → October
11 → November
12 → December

If the entered number is not between 1 and 12, the program should display an error message.
*/


#include <iostream>
using namespace std;

void ReadMonthNumber(short &MonthNum){
    
    cout << "Please Enter Month Number (1-12): " ;
    cin >> MonthNum;
    
}

void PrintTheMonth(short MonthNum){
    
    if( MonthNum >= 1 && MonthNum <= 12){
        
        if(MonthNum == 1){
        
            cout << "It's January" << endl;
        
        }else if (MonthNum == 2){
        
            cout << "It's February" << endl;
        
        }else if (MonthNum == 3){
        
            cout << "It's March" << endl;
        
        }else if (MonthNum == 4){
        
            cout << "It's April" << endl;
        
        }else if (MonthNum == 5){
        
            cout << "It's May" << endl;
        
        }else if (MonthNum == 6){
        
            cout << "It's June" << endl;
    
        }else if (MonthNum == 7){
        
            cout << "It's July" << endl;
    
        }else if (MonthNum == 8){
        
            cout << "It's August" << endl;
    
        }else if (MonthNum == 9){
        
            cout << "It's September" << endl;
    
        }else if (MonthNum == 10){
        
            cout << "It's October" << endl;
    
        }else if (MonthNum == 11){
        
            cout << "It's November" << endl;
    
        }else{
            
            cout << "It's December" << endl;
        
        }// end of Second ( If statment )
        
        
    }else{
        
        cout << "\n";
        cout << "Sorry, Wrong Month Number, Enter The Correct Number.";
        
    }    // end of First ( If statment )
    

} // end of Procedure

int main()
{
    short MonthNum;
    
    ReadMonthNumber(MonthNum);
    PrintTheMonth(MonthNum);
    
    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))


/*
Q: Write a program that asks the user to enter a number representing a month (from 1 to 12),
and then displays the name of the corresponding month.

The program should use a `switch` statement to map the entered number to the correct month.

Mapping:
1 → January
2 → February
3 → March
4 → April
5 → May
6 → June
7 → July
8 → August
9 → September
10 → October
11 → November
12 → December

If the entered number is not between 1 and 12, the program should display an error message:
"Sorry, Wrong Month Number, Enter The Correct Number."
*/



#include <iostream>
using namespace std;

void ReadMonthNumber(short &MonthNum){
    
    cout << "Please Enter Month Number (1-12): " ;
    cin >> MonthNum;
    
}

void PrintTheMonth(short MonthNum){
    
    
    switch (MonthNum){
        
        case 1:
        
        cout << "It's January" << endl;
        break;
        
        case 2:
        
        cout << "It's February" << endl;
        break;
        
        case 3:
        
        cout << "It's March" << endl;
        break;
        
        case 4:
        
        cout << "It's April" << endl;
        break;
        
        case 5:
        
        cout << "It's May" << endl;
        break;
        
        case 6:
        
        cout << "It's June" << endl;
        break;
        
        case 7:
        
        cout << "It's July" << endl;
        break;
        
        case 8:
        
        cout << "It's August" << endl;
        break;
        
        case 9:
        
        cout << "It's September" << endl;
        break;
        
        case 10:
        
        cout << "It's October" << endl;
        break;
        
        case 11:
        
        cout << "It's November" << endl;
        break;
        
        case 12:
        
        cout << "It's December" << endl;
        break;
        
        default:
        
        cout << "\n";
        cout << "Sorry, Wrong Month Number, Enter The Correct Number.";
        
    }


}

int main()
{
    short MonthNum;
    
    ReadMonthNumber(MonthNum);
    PrintTheMonth(MonthNum);
    
    return 0;
}