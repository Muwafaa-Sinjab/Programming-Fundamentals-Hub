#include <iostream>
#include <string>
#include "clsPerson.h"
#include "clsEmployee.h"
#include "clsDeveloper.h"

using namespace std;

int main()
{
    clsDeveloper developer1(100, "Muwafaa", "Sinjab", "muwafaajs0@gmail.com", "05510011469", "SW", 5000, "Software Engineer", "C++");
    developer1.print();
    return 0;
}