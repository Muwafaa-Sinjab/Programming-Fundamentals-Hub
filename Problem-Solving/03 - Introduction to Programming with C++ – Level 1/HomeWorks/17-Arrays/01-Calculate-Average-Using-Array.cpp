#include <iostream>
using namespace std;

void ReadGrades(float Grades[3]) {
    cout << "Please Enter Grade1?" << endl;
    cin >> Grades[0];

    cout << "Please Enter Grade2?" << endl;
    cin >> Grades[1];

    cout << "Please Enter Grade3?" << endl;
    cin >> Grades[2];
}

float CalculateAverage(float Grades[3]) {
    return (Grades[0] + Grades[1] + Grades[2]) / 3;
}

void PrintAverage(float Average) {
    cout << "********************" << endl;
    cout << "The average of grades is " << Average << endl;
}

int main() {
    float Grades[3];

    ReadGrades(Grades);
    PrintAverage(CalculateAverage(Grades));

    return 0;
}