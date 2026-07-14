void copyReverse(const int source[100], int dest[100], int len) {
    for (int i = 0; i < len; i++) {
        dest[i] = source[len - i - 1];
    }
}