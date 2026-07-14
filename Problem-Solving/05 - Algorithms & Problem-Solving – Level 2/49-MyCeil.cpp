#include <iostream>
#include <cmath>

using namespace std;

float GetFractionPart(float number)
{
    return number - int(number);
}

int MyCeil(float number)
{
    if (abs(GetFractionPart(number)) > 0)
    {
        if (number > 0)
        {
            return int(number) + 1;
        }
        else
        {
            return int(number);
        }
    }
    else
    {
        return number;
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

    cout << "My Ceil Result : " << MyCeil(number) << endl;
    cout << "C++ ceil Result: " << ceil(number) << endl;

    return 0;
}