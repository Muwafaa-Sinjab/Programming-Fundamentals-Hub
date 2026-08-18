#include <iostream>
#include <string>

using namespace std;

enum enGender { Male, Female };
enum enMarried { Single, Married };

struct stPersonInfo {
    string Name;
    int Age;
    string City;
    string Country;
    int MonthlySalary;
    enGender Gender;
    enMarried Married;
};

int main() {
    stPersonInfo Person;

    Person.Name = "Mohammed Abu-Hadhoud";
    Person.Age = 44;
    Person.City = "Amman";
    Person.Country = "Jordan";
    Person.MonthlySalary = 5000;
    Person.Gender = enGender::Male;
    Person.Married = enMarried::Married;

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

    return 0;
}