#include <iostream>

using namespace std;

float ReadNumber()
{
    float number;

    cout << "Enter a Number: ";
    cin >> number;

    return number;
}

float MyAbs(float number)
{
    if (number > 0)
    {
        return number;
    }
    else
    {
        return number * -1;
    }
}

int main()
{
    float number = ReadNumber();

    cout << "My abs result = " << MyAbs(number) << endl;
    cout << "C++ abs result = " << abs(number) << endl;

    return 0;
}