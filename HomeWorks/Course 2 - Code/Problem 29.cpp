// Q:   Print Sum Even Numbers from 1 to N

#include <iostream>
using namespace std;


void ReaNum(short &Num){
    
    cout << "Enter a number: ";
    cin >> Num;
}

void PrintLoop(short Num){
    
    int Sum = 0;
    
    for (int counter = 1;  counter <= Num ; counter +=1 ){
        
        if(counter % 2 == 0 ){
        Sum += counter;
        }
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

// Q:   Print Sum Even Numbers from 1 to N, using while loop

#include <iostream>
using namespace std;


void ReaNum(short &Num){
    
    cout << "Enter a number: ";
    cin >> Num;
}

void PrintLoop(short Num){
    
    int Sum = 0;
    int counter = 0;
    
    
    while (counter <= Num ){
        
        if(counter % 2 == 0 ){
        Sum += counter;
        }
        
        counter++;
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
