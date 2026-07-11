//Q: Write a program to calculate Triangle area and print it on the screen

#include <iostream>
using namespace std;

int main()
{
    float Length, Height;
    
    cout << "Please Enter The Length and the Height of the Triangle to give the area of it." << endl;
    cout << "Length: ";
    cin >> Length;
    cout <<"Height: ";
    cin >> Height; 
    cout << endl;
    
    cout << "The Area of the Triangle is: " << "\"" << (Length / 2) * Height << "\"" << endl;

    return 0;
}