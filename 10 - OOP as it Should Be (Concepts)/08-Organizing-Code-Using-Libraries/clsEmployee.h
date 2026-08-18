#pragma once
#include <iostream>
#include <string>
#include "clsPerson.h"
using namespace std;

class clsEmployee : public clsPerson 
{
private:
    string _Title;
    float _Salary;
    string _Department;

public:

    clsEmployee(short ID,  string firstName, string lastName, string email, string phone, string title, float salary, string department) 
    : clsPerson (ID, firstName, lastName, email, phone)
    {
        _Title = title;
        _Salary = salary;
        _Department = department;
    }
    // Property Set for Title

    void setTitle(string title)
    {
        _Title = title;
    }

    // Property Get for Title
    string title()
    {
        return _Title;
    }

    // Property Set for Salary
    void setSalary(float salary)
    {
        _Salary = salary;
    }

    // Property Get for Salary
    float salary()
    {
        return _Salary;
    }

    // Property Set for Department
    void setDepartment(string department)
    {
        _Department = department;
    }

    // Property Get for Department
    string department()
    {
        return _Department;
    }

    void print()
    {
        cout << "\tInfo" << endl;
        cout << "======================================" << endl;
        cout << "ID        : " << ID() << endl;
        cout << "FirstName : " << firstName() << endl;
        cout << "LastName  : " << lastName() << endl;
        cout << "FullName  : " << fullName() << endl;
        cout << "Email     : " << email() << endl;
        cout << "Phone     : " << phone() << endl;
        cout << "Title     : " << _Title << endl;
        cout << "Salary    : " << _Salary << endl;
        cout << "Department: " << _Department << endl;
        cout << "======================================" << endl;
    }
};