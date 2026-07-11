// Q: Write a Program to ask the user to Enter his/her name and print it on screen

#include <iostream>
#include <string>
using namespace std;


string Read_And_Print_Name(string Name){
 
    
    return "Your Name is: " + Name;
}

void PrintTheNeed(){
    
     cout << "Enter your name: "; 
}


int main()
{
    string Name;
    
    
    PrintTheNeed();
    cin >> Name;
    
    cout << Read_And_Print_Name(Name) << endl;
 
    return 0;
}