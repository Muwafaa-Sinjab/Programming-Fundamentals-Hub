#include <iostream>
#include <string>

using namespace std;

struct PersonInfo {
    string Name;
    int Age;
    string City;
    string Country;
    int MonthlySalary;
    char Gender;
    bool Married;
};

int main() {
    PersonInfo p;

    p.Name = "Mohammed Abu-Hadhoud";
    p.Age = 44;
    p.City = "Amman";
    p.Country = "Jordan";
    p.MonthlySalary = 5000;
    p.Gender = 'M';
    p.Married = 1;

    cout << "************************************" << endl;
    cout << "Name: " << p.Name << endl;
    cout << "Age : " << p.Age << " Years." << endl;
    cout << "City : " << p.City << endl;
    cout << "Country: " << p.Country << endl;
    cout << "Monthly Salary : " << p.MonthlySalary << endl;
    cout << "Yearly Salary : " << p.MonthlySalary * 12 << endl;
    cout << "Gender: " << p.Gender << endl;
    cout << "Married : " << p.Married << endl;
    cout << "************************************" << endl;

    return 0;
}