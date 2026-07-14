void copyArray(int source[100], int destination[100], int length, int &destLength) {
    for (int i = 0; i < length; i++) {
        if (!addToArray(source[i], destination, destLength)) {
            break;
        }
    }
}