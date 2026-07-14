bool addToArray(int number, int arr[100], int& arrLength) {
    if (arrLength >= 100) {
        return false;
    }
    arr[arrLength] = number;
    arrLength++;
    return true;
}