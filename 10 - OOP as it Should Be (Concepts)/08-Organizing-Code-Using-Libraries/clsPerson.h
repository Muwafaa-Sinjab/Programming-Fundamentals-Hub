#pragma once
#include <iostream>
using namespace std;

class clsPerson
{
private:
    // Person Info:
    int  _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:

    clsPerson(short ID, string firstName, string lastName, string email, string phone)
    {
        _ID        = ID;
        _FirstName = firstName;
        _LastName  = lastName;
        _Email     = email;
        _Phone     = phone;
    }

    // Read Only Property
    int ID()
    {
        return _ID;
    }

    // Property Set
    void setFirstName(string firstName)
    {
        _FirstName = firstName;
    }

    // Property Get
    string firstName()
    {
        return _FirstName;
    }

    // Property Set
    void setLastName(string lastName)
    {
        _LastName = lastName;
    }
    // Property Get
    string lastName()
    {
        return _LastName;
    }

    // Property Set
    void setEmail(string email)
    {
        _Email = email;
    }

    // Property Get
    string email()
    {
        return _Email;
    }

    // Property Set
    void setPhone(string phone)
    {
        _Phone = phone;
    }

    // Property Get
    string phone()
    {
        return _Phone;
    }

    string fullName()
    {
        return _FirstName + " " + _LastName; 
    }

    void print()
    {
        cout << "\tInfo" << endl;
        cout << "======================================" << endl;
        cout << "ID        : " << _ID << endl;
        cout << "FirstName : " << _FirstName << endl;
        cout << "LastName  : " << _LastName << endl;
        cout << "FullName  : " << fullName() << endl;
        cout << "Email     : " << _Email << endl;
        cout << "Phone     : " << _Phone << endl;
        cout << "======================================" << endl;
    }

    void sendEmail(string subject, string body)
    {
        cout << "\nThe Following message sent successfully to email: " << "\""<< _Email << "\""<< endl;
        cout << "Subject : " << subject << endl;
        cout << "Body    : " << body << endl;
    }

    void sendSMS(string textMassage)
    {
        cout << "\nThe Following SMS sent successfully to phone: " << "\""<< _Phone << "\""<< endl;
        cout << textMassage << endl;
    }
};