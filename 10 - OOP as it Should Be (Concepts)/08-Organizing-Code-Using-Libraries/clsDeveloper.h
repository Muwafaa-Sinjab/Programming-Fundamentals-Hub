#pragma once
#include <iostream>
#include <string>
#include "clsPerson.h"
#include "clsEmployee.h"

using namespace std;

class clsDeveloper : public clsEmployee
{
private:
    string _mainProgrammingLanguage;
public:
    clsDeveloper(short ID,  string firstName, string lastName, string email, string phone, string title, float salary, string department, string mainProgrammingLanguage)
        : clsEmployee (ID, firstName, lastName, email, phone, title, salary, department)
        {
            _mainProgrammingLanguage = mainProgrammingLanguage;
        }

    void setMainProgrammingLanguage(string mainProgrammingLanguage)
    {
        _mainProgrammingLanguage = mainProgrammingLanguage;
    }

    string mainProgrammingLanguage()
    {
        return _mainProgrammingLanguage;
    }

    void print()
    {
        cout << "\tInfo" << endl;
        cout << "======================================" << endl;
        cout << "ID         : " << ID() << endl;
        cout << "FirstName  : " << firstName() << endl;
        cout << "LastName   : " << lastName() << endl;
        cout << "FullName   : " << fullName() << endl;
        cout << "Email      : " << email() << endl;
        cout << "Phone      : " << phone() << endl;
        cout << "Title      : " << title() << endl;
        cout << "Salary     : " << salary() << endl;
        cout << "Department : " << department() << endl;
        cout << "Main Programming Language : " << _mainProgrammingLanguage << endl;
        cout << "======================================" << endl;
    }
};