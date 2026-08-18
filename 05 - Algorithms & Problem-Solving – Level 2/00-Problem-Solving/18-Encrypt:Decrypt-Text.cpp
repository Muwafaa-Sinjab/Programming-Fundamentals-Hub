#include <iostream>
#include <string>

using namespace std;

string ReadText()
{
    string text = "";

    cout << "Please enter a Text: ";
    getline(cin, text);

    return text;
}

string EncryptText(string text, short encryptionKey)
{
    for (int index = 0; index <= text.length(); index++)
    {
        text[index] = char((int)text[index] + encryptionKey);
    }

    return text;
}

string DecryptText(string text, short encryptionKey)
{
    for (int index = 0; index <= text.length(); index++)
    {
        text[index] = char((int)text[index] - encryptionKey);
    }

    return text;
}

int main()
{
    const short encryptionKey = 2;

    string text = ReadText();
    string encryptedText = EncryptText(text, encryptionKey);
    string decryptedText = DecryptText(encryptedText, encryptionKey);

    cout << "Original Text = " << text << endl;
    cout << "Text After Encryption = " << encryptedText << endl;
    cout << "Text After Decryption = " << decryptedText << endl;

    return 0;
}