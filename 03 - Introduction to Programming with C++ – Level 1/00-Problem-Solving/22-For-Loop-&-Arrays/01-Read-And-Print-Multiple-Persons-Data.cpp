#include <iostream>
#include <string>
using namespace std;

struct stPerson {
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadPersonsData(stPerson Persons[100], int &Length) {
    cout << "How many persons do you want to enter?" << endl;
    cin >> Length;

    for (int i = 0; i < Length; i++) {
        cout << "Enter Person " << i + 1 << " data:" << endl;
        cout << "Enter FirstName: ";
        cin >> Persons[i].FirstName;
        cout << "Enter LastName: ";
        cin >> Persons[i].LastName;
        cout << "Enter Age: ";
        cin >> Persons[i].Age;
        cout << "Enter Phone: ";
        cin >> Persons[i].Phone;
        cout << "---------------------------" << endl;
    }
}

void PrintPersonsData(stPerson Persons[100], int Length) {
    for (int i = 0; i < Length; i++) {
        cout << "Person " << i + 1 << " Info:" << endl;
        cout << "**************************" << endl;
        cout << "FirstName: " << Persons[i].FirstName << endl;
        cout << "LastName: " << Persons[i].LastName << endl;
        cout << "Age : " << Persons[i].Age << " Years." << endl;
        cout << "Phone: " << Persons[i].Phone << endl;
        cout << "**************************" << endl;
    }
}

int main() {
    stPerson Persons[100];
    int Length = 0;

    ReadPersonsData(Persons, Length);
    PrintPersonsData(Persons, Length);

    return 0;
}