#include <iostream>
#include <string>

using namespace std;

class clsEmployee
{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _Phone;
    string _Salary;
    string _Department;

public:
    // Parameterized Constructor
    clsEmployee(int ID, string firstname, string lastname, string title, string email, string phone, string salary, string department)
    {
        _ID = ID;
        _FirstName = firstname;
        _LastName = lastname;
        _Title = title;
        _Email = email;
        _Phone = phone;
        _Salary = salary;
        _Department = department;
    }

    // Read Only
    int ID()
    {
        return _ID;
    }

    // Property Set for First Name
    void setFirstName(string firstname)
    {
        _FirstName = firstname;
    }

    // Property Get for First Name
    string firstName()
    {
        return _FirstName;
    }

    // Property Set for Last Name
    void setLastName(string lastname)
    {
        _LastName = lastname;
    }

    // Property Get for Last Name
    string lastName()
    {
        return _LastName;
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

    // Property Set for Email
    void setEmail(string email)
    {
        _Email = email;
    }

    // Property Get for Email
    string email()
    {
        return _Email;
    }

    // Property Set for Phone
    void setPhone(string phone)
    {
        _Phone = phone;
    }

    // Property Get for Phone
    string phone()
    {
        return _Phone;
    }

    // Property Set for Salary
    void setSalary(string salary)
    {
        _Salary = salary;
    }

    // Property Get for Salary
    string salary()
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

    string fullName()
    {
        return _FirstName + " " + _LastName;
    }

    void print()
    {
        cout << "\tInfo" << endl;
        cout << "======================================" << endl;
        cout << "ID         : " << _ID << endl;
        cout << "FirstName  : " << _FirstName << endl;
        cout << "LastName   : " << _LastName << endl;
        cout << "FullName   : " << fullName() << endl;
        cout << "Title      : " << _Title << endl;
        cout << "Email      : " << _Email << endl;
        cout << "Phone      : " << _Phone << endl;
        cout << "Salary     : " << _Salary << endl;
        cout << "Department : " << _Department << endl;
        cout << "======================================" << endl;
    }

    void sendEmail(string subject, string body)
    {
        cout << "\nThe Following massage sent successfuly to email: " << "\""<< _Email << "\""<< endl;
        cout << "Subject : " << subject << endl;
        cout << "Body    : " << body << endl;
    }

    void sendSMS(string textMassage)
    {
        cout << "\nThe Following SMS sent successfuly to phone: " << "\""<< _Phone << "\""<< endl;
        cout << textMassage << endl;
    }

};

int main()
{
    clsEmployee employee1(110, "Muwafaa", "Sinjab", "Software Developer", "namimjs@gmail.com", "0531387404", "15000", "IT Department");

    employee1.print();
    employee1.sendEmail("Welcome", "Hello Muwafaa, welcome to the team!");
    employee1.sendSMS("Your salary has been processed.");
    return 0;
}