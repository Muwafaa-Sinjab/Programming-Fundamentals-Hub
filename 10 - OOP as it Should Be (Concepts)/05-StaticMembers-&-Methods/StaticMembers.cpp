#include <iostream>
#include <string>
using namespace std;

class clsPerson
{
public:
    static int counter;
    int num;

    clsPerson() {counter++;}

    void print()
    {
        cout << "\n" << num << endl;
        cout << counter << endl;
    }

    static int function1()
    {
        return 10;
    }
    int function2()
    {
        return 20;
    }
};
int clsPerson::counter = 0;

int main()
{
    
    clsPerson p1, p2, p3;

    p1.num = 10;
    p2.num = 20;
    p3.num = 30;

    p1.print();
    p2.print();
    p3.print();

    p1.counter = 500;
    p2.print();

    cout << "\nThis is the static function value:"; 
    cout << clsPerson::function1() << endl;
    return 0;
}