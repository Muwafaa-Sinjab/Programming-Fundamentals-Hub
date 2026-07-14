int countOdds(const int arr[100], int arrLength) {
    int oddCount = 0;
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount;
}