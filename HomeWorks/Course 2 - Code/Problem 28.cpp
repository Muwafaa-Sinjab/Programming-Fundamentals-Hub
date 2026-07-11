// Q:  Print Sum Odd Numbers from 1 to N

#include <iostream>
using namespace std;


void ReaNum(short &Num){
    
    cout << "Enter a number: ";
    cin >> Num;
}

void PrintLoop(short Num){
    
    int Sum = 0;
    
    for (int counter = 1;  counter <= Num ; counter++ ){
        
        if ( counter % 2 != 0)
        Sum = Sum + counter;
    }
    
    cout << Sum << endl;
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

// Q:  Print Sum Odd Numbers from 1 to N, using while loop

#include <iostream>
using namespace std;


void ReaNum(short &Num){
    
    cout << "Enter a number: ";
    cin >> Num;
}

void PrintLoop(short Num){
    
    
    
    int Sum = 0;
    int counter = 1;
    
    while (counter <= Num ){
        Sum = Sum + counter;
        counter +=2;
    }
    
    cout << Sum << endl;

}

int main()
{
    
    short Num;
    ReaNum(Num);
    PrintLoop(Num);
    
    return 0;
}