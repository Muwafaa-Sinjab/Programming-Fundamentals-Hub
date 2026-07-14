#include <iostream>
using namespace std;

enum enMonths { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };

int ReadMonthNum(string Message, int From, int To){
    
    int Number = 0;
    
    do{
        
        cout << Message;
        cin >> Number;
        
    }while(Number < From || Number > To);
    
    return Number;
    
}

enMonths ReadMonthNum(){
    
    return (enMonths)ReadMonthNum("January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12: ", 1,12);
}

string GetMonthNumber(enMonths Day){
    
    switch (Day){
        
        case enMonths::January:
            return "\nJanuary";
        case enMonths::February:
            return "\nFebruary;";
        case enMonths::March:
            return "\nMarch";
        case enMonths::April:
            return "\nApril";
        case enMonths::May:
            return "\nMay";
        case enMonths::June:
            return "\nJune";
        case enMonths::July:
            return "\nJuly";
        case enMonths::August:
            return "\nAugust";
        case enMonths::September:
            return "\nSeptember";
        case enMonths::October:
            return "\nOctober";
        case enMonths::November:
            return "\nNovember";
        case enMonths::December:
            return "\nDecember";
        default:
            return "\nnot Valid Month";
        
    }
    
}


int main()
{
    
    cout << GetMonthNumber(ReadMonthNum()) << endl;
    
    
    return 0;
}