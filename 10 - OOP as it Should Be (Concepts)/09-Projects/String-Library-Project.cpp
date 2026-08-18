#include <iostream>
#include "clsString.h"

using namespace std;

int main()
{
    clsString string1("Muwafaa Sinjab");

    cout << string1.countSmallLetters() << endl;
    cout << clsString::countVowels("welcome to jordan"); 
    return 0;
}

