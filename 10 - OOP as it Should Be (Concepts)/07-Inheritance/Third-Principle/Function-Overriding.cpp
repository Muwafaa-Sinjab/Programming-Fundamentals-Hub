#include <iostream>
#include <string>

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

int main()
{
    clsDeveloper developer1(100, "Muwafaa", "Sinjab", "muwafaajs0@gmail.com", "05510011469", "SW", 5000, "Software Engineer", "C++");
    developer1.print();
    return 0;
}