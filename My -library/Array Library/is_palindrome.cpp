bool isPalindrome(const int arr[100], int len) {
    for (int i = 0; i < len / 2; i++) {
        if (arr[i] != arr[len - i - 1]) {
            return false;
        }
    }
    return true;
}