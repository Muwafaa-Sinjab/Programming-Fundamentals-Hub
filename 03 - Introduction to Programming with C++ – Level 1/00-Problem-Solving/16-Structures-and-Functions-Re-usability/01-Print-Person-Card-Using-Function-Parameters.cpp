#include <iostream>
#include <string>
using namespace std;

struct stPerson {
    string Name;
    int Age;
    string City;
    string Country;
    int MonthlySalary;
    char Gender;
    bool Married;
};

void PrintPersonCard(stPerson Person) {
    cout << "************************************" << endl;
    cout << "Name: " << Person.Name << endl;
    cout << "Age : " << Person.Age << " Years." << endl;
    cout << "City : " << Person.City << endl;
    cout << "Country: " << Person.Country << endl;
    cout << "Monthly Salary : " << Person.MonthlySalary << endl;
    cout << "Yearly Salary : " << Person.MonthlySalary * 12 << endl;
    cout << "Gender: " << Person.Gender << endl;
    cout << "Married : " << Person.Married << endl;
    cout << "************************************" << endl;
}

int main() {
    stPerson Person;

    Person.Name = "Mohammed Abu-Hadhoud";
    Person.Age = 44;
    Person.City = "Amman";
    Person.Country = "Jordan";
    Person.MonthlySalary = 5000;
    Person.Gender = 'M';
    Person.Married = 1;

    PrintPersonCard(Person);

    return 0;
}