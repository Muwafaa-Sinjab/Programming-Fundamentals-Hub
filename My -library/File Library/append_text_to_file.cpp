// append mode (don't delete what was in the file already and create the new text with the old one)
void appendToFile(const string& fileName, const string& content) {
    fstream file;
    file.open(fileName, ios::out | ios::app);
    if (file.is_open()) {
        file << content << endl;
        file.close();
    }
}