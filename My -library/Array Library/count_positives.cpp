int countPositives(const int arr[100], int arrLength) {
    int positiveCount = 0;
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        }
    }
    return positiveCount;
}