#include <iostream>
using namespace std;

class clsPerson
{
private:
    int _ID = 10198394;
    string _FirstName;
    string _LastName;

public:

    //Read only Property, It's when we use only "GET Property" without "SET Property".
    int GetID()
    {
        return _ID;
    }

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
    cout << Person1.GetFullName() << endl;

    // Just Read
    cout << Person1.GetID() << endl;
    return 0;
}