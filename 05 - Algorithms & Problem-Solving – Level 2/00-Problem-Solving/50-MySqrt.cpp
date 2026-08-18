#include <iostream>
#include <cmath>

using namespace std;

float MySqrt(float number)
{
    return pow(number, 0.5);
}

float ReadNumber()
{
    float number;

    cout << "Please enter a number: ";
    cin >> number;

    return number;
}

int main()
{
    float number = ReadNumber();

    cout << "My Sqrt Result : " << MySqrt(number) << endl;
    cout << "C++ sqrt Result: " << sqrt(number) << endl;

    return 0;
}