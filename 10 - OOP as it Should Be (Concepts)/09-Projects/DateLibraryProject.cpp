#include <iostream>
#include "clsDate.h"
#include "clsString.h"
using namespace std;

int main()
{   
    clsDate date1;
    clsDate date2("21/2/2022");
    clsDate date3(12,6,2004);
    clsDate date4(250, 2022);

    date4.print();

    return 0;
}

