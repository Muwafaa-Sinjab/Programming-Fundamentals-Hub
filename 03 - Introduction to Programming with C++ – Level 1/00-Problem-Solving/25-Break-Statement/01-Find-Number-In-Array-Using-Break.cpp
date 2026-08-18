#include <iostream>
#include <vector>

using namespace std;

bool FindNumber(int arr[], int size, int target, int &position) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            position = i;
            return true;
        }
    }
    return false;
}

int main() {
    int arr[10] = {10, 20, 44, 55, 33, 22, 99, 88, 99, 100};
    int target = 20;
    int position = -1;

    if (FindNumber(arr, 10, target, position)) {
        cout << "Number " << target << " is found at position: " << position << endl;
    } else {
        cout << "Number not found" << endl;
    }

    return 0;
}