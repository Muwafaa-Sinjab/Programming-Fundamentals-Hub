// Q: Print Numbers from 1 to N

#include <iostream>
using namespace std;


void ReaNum(short &Num){
    
    cout  << "Enter any Number You want the see count from 1 to it: ";
    cin >> Num;
}

void PrintLoop(short Num){
    
    for (int counter = 1; counter <= Num; counter++){
        
        cout << counter << endl;
    }
    
}

int main()
{
    
    short Num;
    ReaNum(Num);
    PrintLoop(Num);
    
    return 0;
}

---------------------------------------------------------------------

((((((((((Update Code))))))))))

// Q: Print Numbers from 1 to N, using while loop

#include <iostream>
using namespace std;


void ReaNum(short &Num){
    
    cout  << "Enter any Number You want the see count from 1 to it: ";
    cin >> Num;
}

void PrintLoop(short Num){
    
    int counter = 1;
    
    while (counter <= Num){
        
        cout << counter << endl;
        counter++;
    }
    
}

int main()
{
    
    short Num;
    ReaNum(Num);
    PrintLoop(Num);
    
    return 0;
}