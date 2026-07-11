// Q: Print Numbers from N to 1

#include <iostream>
using namespace std;


void ReaNum(short &Num){
    
    cout  << "Enter any Number You want the see count from it to 1: ";
    cin >> Num;
}

void PrintLoop(short Num){
    
    for (int counter = 1; Num >= counter; Num--){
        
        cout << Num << endl;
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


// Q: Print Numbers from N to 1, using while loop

#include <iostream>
using namespace std;


void ReaNum(short &Num){
    
    cout  << "Enter any Number You want the see count from it to 1: ";
    cin >> Num;
}

void PrintLoop(short Num){
    
    
    int counter = 1;
    while (Num >= counter){
        
        cout << Num << endl;
        Num--;
    }

}

int main()
{
    
    short Num;
    ReaNum(Num);
    PrintLoop(Num);
    
    return 0;
}