#include <iostream>
using namespace std;

class clsPerson
{
private:

    int Age;
    int NumberOfKids;

public:

    string FirstName;
    string LastName;

    string GetFullName()
    {
        return FirstName + " " + LastName;
    }
};

int main()
{
    clsPerson Person1;

    Person1.FirstName = "Muwafaa";
    Person1.LastName  = "Sinjab";
    cout << Person1.GetFullName() << endl;

    return 0;
}