#pragma once
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <iomanip>
using namespace std;

class clsString
{
private:
    string _Value;

public:
    //Constructors and SET & GET Property 
    clsString()
    {
        _Value = "";
    };

    clsString(string value)
    {
        _Value = value;
    };

    void setValue(string value)
    {
        _Value = value;
    };

    string getValue()
    {
        return _Value;
    }

    //Functions
    static void printFirstLetterOfEachWord(string sentence)
    {   
        bool isFirstLetter = true;

        for (int i = 0; i < sentence.length(); i++)
        {
            if (sentence[i] != ' ' && isFirstLetter)
            {
                cout << sentence[i] << "  ";
            }
            
            // Update flag: true if current character is a space, indicating next non-space is a first letter
            isFirstLetter = (sentence[i] == ' ' ? true : false);
        }
        cout << endl;
    }

    void printFirstLetterOfEachWord()
    {
        clsString::printFirstLetterOfEachWord(_Value);
    }

    static string capitalizeFirstLetterOfEachWord(string sentence)
    {
        bool isFirstLetter = true;

        for (size_t i = 0; i < sentence.length(); i++)
        {
            if (sentence[i] != ' ' && isFirstLetter)
            {
                // Convert character to uppercase safely using standard functions
                sentence[i] = static_cast<char>(toupper(static_cast<unsigned char>(sentence[i])));
                isFirstLetter = false;
            }
            else if (sentence[i] == ' ')
            {
                isFirstLetter = true;
            }
        }

        return sentence;
    }

    string capitalizeFirstLetterOfEachWord()
    {
        return clsString::capitalizeFirstLetterOfEachWord(_Value);
    }

    static string lowerFirstLetterOfEachWord(string sentence)
    {   
        bool isFirstLetter = true;

        for (short i = 0; i < sentence.length(); i++)
        {   
            if (sentence[i] != ' ' && isFirstLetter)
            {
                // Convert the first letter of the word to lowercase
                sentence[i] = static_cast<char>(tolower(static_cast<unsigned char>(sentence[i])));
            }
            
            isFirstLetter = (sentence[i] == ' ' ? true : false);
        }

        return sentence;
    }

    string lowerFirstLetterOfEachWord()
    {
        return clsString::lowerFirstLetterOfEachWord(_Value);
    }

    static string toUpperCase(string sentence)
    {   
        for (short i = 0; i < sentence.length(); i++)
        {   
            if (sentence[i] != ' ')
            {
                // Convert the current character to uppercase
                sentence[i] = static_cast<char>(toupper(static_cast<unsigned char>(sentence[i])));
            }
        }
        return sentence;
    }

    string toUpperCase()
    {
        return clsString::toUpperCase(_Value);
    }

    static string toLowerCase(string sentence)
    {   
        for (short i = 0; i < sentence.length(); i++)
        {   
            if (sentence[i] != ' ')
            {
                // Convert the current character to lowercase
                sentence[i] = static_cast<char>(tolower(static_cast<unsigned char>(sentence[i])));
            }
        }
        return sentence;
    }

    string toLowerCase()
    {
        return clsString::toLowerCase(_Value);
    }

    static char flipCharCase(char charToFlip) 
    {
        // Invert case: convert to lowercase if uppercase, and vice versa
        return isupper(charToFlip) ? static_cast<char>(tolower(charToFlip)) : static_cast<char>(toupper(charToFlip));
    }

    static string flipStringCase(string sentence)
    {
        for (size_t i = 0; i < sentence.length(); i++)
        {
            if (sentence[i] != ' ')
            {
                // Flip the case of the current character using the character-level helper function
                sentence[i] = flipCharCase(sentence[i]);
            }
        }
        return sentence;
    }

    string flipStringCase()
    {
        return clsString::flipStringCase(_Value);
    }

    static size_t getStringLength(string sentence)
    {
        return sentence.length();
    }

    size_t getStringLength()
    {
        return clsString::getStringLength(_Value);
    }

    static short countCapitalLetters(string sentence)
    {
        short counter = 0;

        for (size_t i = 0; i < sentence.length(); i++)
        {
            // Increment counter if the character is uppercase
            if (isupper(static_cast<unsigned char>(sentence[i])))
            {
                counter++;
            }
        }
        return counter;
    }

    short countCapitalLetters()
    {
        return clsString::countCapitalLetters(_Value);
    }

    static short countSmallLetters(string sentence)
    {
        short counter = 0;

        for (size_t i = 0; i < sentence.length(); i++)
        {
            // Increment counter if the character is lowercase
            if (islower(static_cast<unsigned char>(sentence[i])))
            {
                counter++;
            }
        }
        return counter;
    }

    short countSmallLetters()
    {
        return clsString::countSmallLetters(_Value);
    }

    static short countSpecificLetter(string sentence, char letterToCount, bool matchCase)
    {
        short counter = 0;

        for (char character : sentence)
        { 
            if (matchCase) 
            {
                // Strict case-sensitive comparison
                if (character == letterToCount) 
                    counter++;
            } 
            else 
            {
                // Case-insensitive comparison by converting both to uppercase
                if (toupper(static_cast<unsigned char>(character)) == toupper(static_cast<unsigned char>(letterToCount))) 
                    counter++;
            }
        }
        return counter;
    }

    short countSpecificLetter(char letterToCount, bool matchCase)
    {
        return clsString::countSpecificLetter(_Value, letterToCount, matchCase);
    }

    static bool isVowel(char character) 
    {
        character = static_cast<char>(tolower(static_cast<unsigned char>(character)));
        return (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u');
    }

    static short countVowels(string sentence)
    {
        short vowelCount = 0;
        for (char c : sentence) 
        {
            if (isVowel(c)) 
                vowelCount++;
        }
        return vowelCount;
    }

    short countVowels()
    {
        return clsString::countVowels(_Value);
    }

    static void printVowelsInString(string sentence)
    {
        for (size_t i = 0; i < sentence.length(); i++)
        {
            // Print the character if it matches a vowel
            if (isVowel(sentence[i]))
                cout << setw(2) << sentence[i] << "  ";
        }
    }

    void printVowelsInString()
    {
        clsString::printVowelsInString(_Value);
    }

    static short countWordsInString(string sentence)
    {
        string delimiter = " ";
        size_t position = 0;
        string word;
        short counter = 0;

        // Loop until no more delimiters are found in the sentence
        while ((position = sentence.find(delimiter)) != string::npos)
        {
            word = sentence.substr(0, position);

            if (word != "")
            {
                counter++;
            }
            
            // Erase the processed word and the delimiter from the sentence
            sentence.erase(0, position + delimiter.length());
        }

        // Count the last word if remaining
        if (sentence != "")
        {
            counter++;
        }

        return counter;
    }

    short countWordsInString()
    {
        return clsString::countWordsInString(_Value);
    }

    static vector<string> splitString(string sentence, string delimiter)
    {
        size_t position = 0;
        string word;
        vector<string> words;

        // Loop until no more delimiters are found in the sentence
        while ((position = sentence.find(delimiter)) != string::npos)
        {
            word = sentence.substr(0, position);

            if (word != "")
            {
                words.push_back(word);
            }

            // Erase the processed word and the delimiter from the sentence
            sentence.erase(0, position + delimiter.length());
        }

        // Add the last remaining word to the vector
        if (sentence != "")
        {
            words.push_back(sentence);
        }

        return words;
    }

    vector<string> splitString( string delimiter)
    {
        return clsString::splitString(_Value, delimiter);
    }

    static string trimLeft(string sentence)
    {
        for (size_t i = 0; i < sentence.length(); i++)
        {
            if (sentence[i] != ' ')
            {
                // Erase all spaces from the beginning up to the first non-space character
                sentence.erase(0, i);
                return sentence;
            }
        }
        return "";
    }

    string trimLeft()
    {
        return clsString::trimLeft(_Value);
    }
        
    static string trimRight(string sentence)
    {
        for (int i = static_cast<int>(sentence.length()) - 1; i >= 0; i--)
        {
            if (sentence[i] != ' ')
            {
                // Erase everything from after the last non-space character to the end
                sentence.erase(i + 1);
                return sentence;
            }
        }
        return "";
    }

    string trimRight()
    {
        return clsString::trimRight(_Value);
    }

    static string trim(string sentence)
    {
        // Apply both left and right trims to remove all surrounding spaces
        return trimLeft(trimRight(sentence));
    }

    string trim()
    {
        _Value = clsString::trim(_Value);
        return _Value;
    }

    static string joinString(const vector<string>& words, string delimiter)
    {
        string sentence = "";

        for (const string& word : words)
        {
            sentence = sentence + word + delimiter;
        }

        // Remove the extra trailing delimiter at the end of the sentence
        if (!sentence.empty())
        {
            sentence = sentence.substr(0, sentence.length() - delimiter.length());
        }
        
        return sentence;
    }

    static string reverseStringWords(string sentence)
    {
        vector<string> words = splitString(sentence, " ");
        string reversedSentence = "";

        // Using a reverse iterator to traverse the vector from end to beginning
        vector<string>::const_reverse_iterator rIterator;

        for (rIterator = words.rbegin(); rIterator != words.rend(); ++rIterator)
        {
            reversedSentence += *rIterator + " ";
        }

        // Remove the extra trailing space at the end of the sentence
        if (!reversedSentence.empty())
        {
            reversedSentence = reversedSentence.substr(0, reversedSentence.length() - 1);
        }

        return reversedSentence;
    }

    string reverseStringWords()
    {
        return clsString::reverseStringWords(_Value);
    }

    static string replaceWordInString(string sentence, string target, string replacement)
    {
        size_t position = sentence.find(target);

        // Loop as long as the target word is found in the sentence
        while (position != string::npos)
        {
            // Replace the target word with the replacement string
            sentence = sentence.replace(position, target.length(), replacement);
            
            // Find the next occurrence of the target word
            position = sentence.find(target);
        }

        return sentence;
    }

    string replaceWordInString(string target, string replacement)
    {
        return clsString::replaceWordInString(_Value, target, replacement);
    }

    static string replaceWordCustom(string sentence, string target, string replacement, bool matchCase)
    {
        vector<string> words = splitString(sentence, " ");

        for (string& word : words)
        {
            if (matchCase)
            {
                // Strict case-sensitive comparison
                if (word == target)
                    word = replacement;
            }
            else
            {
                // Case-insensitive comparison by converting both to lowercase
                if (toLowerCase(word) == toLowerCase(target))
                    word = replacement;
            }
        }

        return joinString(words, " ");
    }

    string replaceWordCustom(string target, string replacement, bool matchCase)
    {
        return clsString::replaceWordCustom(_Value, target, replacement, matchCase);
    }

    static string removePunctuationMarks(string sentence)
    {   
        string resultStr = "";
        
        for (size_t i = 0; i < sentence.length(); i++)
        {
            if (!ispunct(static_cast<unsigned char>(sentence[i])))
            {
                resultStr = resultStr + sentence[i];
            }
        }
        return resultStr;
    }

    string removePunctuationMarks()
    {
        return clsString::removePunctuationMarks(_Value);
    }

};