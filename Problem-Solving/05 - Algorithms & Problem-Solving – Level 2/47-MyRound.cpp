#include <iostream>

using namespace std;

float GetFractionPart(float number)
{
    return number - int(number);
}

int MyRound(float number)
{
    int intPart = int(number);

    float fractionPart = GetFractionPart(number);

    if (abs(fractionPart) >= 0.5)
    {
        if (number > 0)
        {
            return ++intPart;
        }
        else
        {
            return --intPart;
        }
    }
    else
    {
        return intPart;
    }
}

float ReadNumber()
{
    float number;

    cout << "Please enter a float number: ";
    cin >> number;

    return number;
}

int main()
{
    float number = ReadNumber();

    cout << "My Round Result : " << MyRound(number) << endl;
    cout << "C++ Round Result: " << round(number) << endl;

    return 0;
}