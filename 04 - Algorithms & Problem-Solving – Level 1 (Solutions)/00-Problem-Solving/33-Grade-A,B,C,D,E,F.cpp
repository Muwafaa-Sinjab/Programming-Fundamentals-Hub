#include <iostream>
#include <cmath>
using namespace std;


int ReadGrad(int From, int To){
    
    int Grade;
    
    do{
        cout << "Enter Your Grade: ";
        cin >> Grade;
        
    }while(Grade < From || Grade > To);
    
    return Grade;
    
}

char GradeDegree(int Grade){
    
    if (Grade >= 90)
        return 'A';
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else
        return 'F';
    
    
}


int main(){
    
    int Grade = ReadGrad(0, 100);
    char Result = GradeDegree(Grade);
    
    cout << "\nResult is: " << Result << endl;
    
    return 0;
}