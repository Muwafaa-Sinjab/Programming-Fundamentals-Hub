#include <iostream>
#include <string>

using namespace std;

int main() {
    string st1 = "43.22";
    int N1 = 20;
    double N2 = 33.5;
    float N3 = 55.23;

    double d1 = stod(st1);
    float f1 = stof(st1);
    int i1 = stoi(st1);

    string s1 = to_string(N1);
    string s2 = to_string(N2);
    string s3 = to_string(N3);
    int i2 = int(N3);

    cout << d1 << endl;
    cout << f1 << endl;
    cout << i1 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << i2 << endl;

    return 0;
}