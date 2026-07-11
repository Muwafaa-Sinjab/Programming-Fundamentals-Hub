#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

float CalculateToDays(float Hours){
    
    return Hours / 24;
}

float CalculateToWeek(float Hours){
    
    return Hours / ( 24 * 7 );
}


int main()
{
    float Hours = ReadPositiveNumber("Please Enter Number of the Hours: ");
    cout << "\nTotal Days of Hours you enter is: " << CalculateToDays(Hours) << endl;
    cout << "Total Weeks of Hours you enter is: " << CalculateToWeek(Hours) << endl;
    return 0;
}