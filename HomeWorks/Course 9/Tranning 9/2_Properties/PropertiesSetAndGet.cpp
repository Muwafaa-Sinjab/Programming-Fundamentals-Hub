#include <iostream>
using namespace std;

class clsPerson
{
private:
    string _FirstName;
    string _LastName;

public:
    // Property Set
    void SetFirstName(const string &FirstName)
    {
        _FirstName = FirstName;
    }

    void SetLastName(const string &LastName)
    {
        _LastName = LastName;
    }

    // Property Get
    string GetFirstName()
    {
        return _FirstName;
    }

    string GetLastName()
    {
        return _LastName;
    }

    string GetFullName()
    {
        return _FirstName + " " + _LastName;
    }

};

int main()
{

    clsPerson Person1;

    Person1.SetFirstName("Muwafaa");
    Person1.SetLastName("Sinjab");
    cout << Person1.GetFullName();
    return 0;
}