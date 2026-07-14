// write mode (delete what was in the file already and create the new text)
void writeToFile(const string& fileName, const string& content) {
    fstream file;
    file.open(fileName, ios::out);
    if (file.is_open()) {
        file << content << endl;
        file.close();
    }
}