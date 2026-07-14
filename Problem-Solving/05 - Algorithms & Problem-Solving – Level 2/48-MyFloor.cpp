#include <iostream>
#include <cmath>

using namespace std;

int MyFloor(float number)
{
    if (number > 0)
    {
        return int(number);
    }
    else
    {
        return int(number) - 1;
    }
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

    cout << "My Floor Result : " << MyFloor(number) << endl;
    cout << "C++ floor Result : " << floor(number) << endl;

    return 0;
}