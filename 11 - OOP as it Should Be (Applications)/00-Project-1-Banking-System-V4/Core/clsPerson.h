#pragma once
#include <iostream>
using namespace std;

class clsPerson
{
private:
    string _FirstName;
    string _LastName;
    string _Email;
    string _PhoneNumber;
public:

    clsPerson(string FirstName, string LastName, string Email, string PhoneNumber)
    {
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _PhoneNumber = PhoneNumber;
    };

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    };

    string FirstName()
    {
        return _FirstName;
    };
    
    void SetLastName(string LastName)
    {
        _LastName = LastName;
    };

    string LastName()
    {
        return _LastName;
    };

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }
    void SetEmail(string Email)
    {
        _Email = Email;
    };

    string Email()
    {
        return _Email;
    };

    void SetPhoneNumber(string PhoneNumber)
    {
        _PhoneNumber = PhoneNumber;
    };

    string PhoneNumber()
    {
        return _PhoneNumber;
    };
};