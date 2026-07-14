void printFile(const string& fileName) {
    fstream file;
    file.open(fileName, ios::in);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
}