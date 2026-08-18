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

    clsString(string Value)
    {
        _Value = Value;
    };

    void SetValue(string Value)
    {
        _Value = Value;
    };

    string GetValue()
    {
        return _Value;
    }

    //Functions
    static void PrintFirstLetterOfEachWord(string Sentence)
    {   
        bool IsFirstLetter = true;

        for (int i = 0; i < Sentence.length(); i++)
        {
            if (Sentence[i] != ' ' && IsFirstLetter)
            {
                cout << Sentence[i] << "  ";
            }
            
            IsFirstLetter = (Sentence[i] == ' ' ? true : false);
        }
        cout << endl;
    }

    void PrintFirstLetterOfEachWord()
    {
        clsString::PrintFirstLetterOfEachWord(_Value);
    }

    static string CapitalizeFirstLetterOfEachWord(string Sentence)
    {
        bool IsFirstLetter = true;

        for (size_t i = 0; i < Sentence.length(); i++)
        {
            if (Sentence[i] != ' ' && IsFirstLetter)
            {
                Sentence[i] = static_cast<char>(toupper(static_cast<unsigned char>(Sentence[i])));
                IsFirstLetter = false;
            }
            else if (Sentence[i] == ' ')
            {
                IsFirstLetter = true;
            }
        }

        return Sentence;
    }

    string CapitalizeFirstLetterOfEachWord()
    {
        return clsString::CapitalizeFirstLetterOfEachWord(_Value);
    }

    static string LowerFirstLetterOfEachWord(string Sentence)
    {   
        bool IsFirstLetter = true;

        for (short i = 0; i < Sentence.length(); i++)
        {   
            if (Sentence[i] != ' ' && IsFirstLetter)
            {
                Sentence[i] = static_cast<char>(tolower(static_cast<unsigned char>(Sentence[i])));
            }
            
            IsFirstLetter = (Sentence[i] == ' ' ? true : false);
        }

        return Sentence;
    }

    string LowerFirstLetterOfEachWord()
    {
        return clsString::LowerFirstLetterOfEachWord(_Value);
    }

    static string ToUpperCase(string Sentence)
    {   
        for (short i = 0; i < Sentence.length(); i++)
        {   
            if (Sentence[i] != ' ')
            {
                Sentence[i] = static_cast<char>(toupper(static_cast<unsigned char>(Sentence[i])));
            }
        }
        return Sentence;
    }

    string ToUpperCase()
    {
        return clsString::ToUpperCase(_Value);
    }

    static string ToLowerCase(string Sentence)
    {   
        for (short i = 0; i < Sentence.length(); i++)
        {   
            if (Sentence[i] != ' ')
            {
                Sentence[i] = static_cast<char>(tolower(static_cast<unsigned char>(Sentence[i])));
            }
        }
        return Sentence;
    }

    string ToLowerCase()
    {
        return clsString::ToLowerCase(_Value);
    }

    static char FlipCharCase(char CharToFlip) 
    {
        return isupper(CharToFlip) ? static_cast<char>(tolower(CharToFlip)) : static_cast<char>(toupper(CharToFlip));
    }

    static string FlipStringCase(string Sentence)
    {
        for (size_t i = 0; i < Sentence.length(); i++)
        {
            if (Sentence[i] != ' ')
            {
                Sentence[i] = FlipCharCase(Sentence[i]);
            }
        }
        return Sentence;
    }

    string FlipStringCase()
    {
        return clsString::FlipStringCase(_Value);
    }

    static size_t GetStringLength(string Sentence)
    {
        return Sentence.length();
    }

    size_t GetStringLength()
    {
        return clsString::GetStringLength(_Value);
    }

    static short CountCapitalLetters(string Sentence)
    {
        short Counter = 0;

        for (size_t i = 0; i < Sentence.length(); i++)
        {
            if (isupper(static_cast<unsigned char>(Sentence[i])))
            {
                Counter++;
            }
        }
        return Counter;
    }

    short CountCapitalLetters()
    {
        return clsString::CountCapitalLetters(_Value);
    }

    static short CountSmallLetters(string Sentence)
    {
        short Counter = 0;

        for (size_t i = 0; i < Sentence.length(); i++)
        {
            if (islower(static_cast<unsigned char>(Sentence[i])))
            {
                Counter++;
            }
        }
        return Counter;
    }

    short CountSmallLetters()
    {
        return clsString::CountSmallLetters(_Value);
    }

    static short CountSpecificLetter(string Sentence, char LetterToCount, bool MatchCase)
    {
        short Counter = 0;

        for (char Character : Sentence)
        { 
            if (MatchCase) 
            {
                if (Character == LetterToCount) 
                    Counter++;
            } 
            else 
            {
                if (toupper(static_cast<unsigned char>(Character)) == toupper(static_cast<unsigned char>(LetterToCount))) 
                    Counter++;
            }
        }
        return Counter;
    }

    short CountSpecificLetter(char LetterToCount, bool MatchCase)
    {
        return clsString::CountSpecificLetter(_Value, LetterToCount, MatchCase);
    }

    static bool IsVowel(char Character) 
    {
        Character = static_cast<char>(tolower(static_cast<unsigned char>(Character)));
        return (Character == 'a' || Character == 'e' || Character == 'i' || Character == 'o' || Character == 'u');
    }

    static short CountVowels(string Sentence)
    {
        short VowelCount = 0;
        for (char C : Sentence) 
        {
            if (IsVowel(C)) 
                VowelCount++;
        }
        return VowelCount;
    }

    short CountVowels()
    {
        return clsString::CountVowels(_Value);
    }

    static void PrintVowelsInString(string Sentence)
    {
        for (size_t i = 0; i < Sentence.length(); i++)
        {
            if (IsVowel(Sentence[i]))
                cout << setw(2) << Sentence[i] << "  ";
        }
    }

    void PrintVowelsInString()
    {
        clsString::PrintVowelsInString(_Value);
    }

    static short CountWordsInString(string Sentence)
    {
        string Delimiter = " ";
        size_t Position = 0;
        string Word;
        short Counter = 0;

        while ((Position = Sentence.find(Delimiter)) != string::npos)
        {
            Word = Sentence.substr(0, Position);

            if (Word != "")
            {
                Counter++;
            }
            
            Sentence.erase(0, Position + Delimiter.length());
        }

        if (Sentence != "")
        {
            Counter++;
        }

        return Counter;
    }

    short CountWordsInString()
    {
        return clsString::CountWordsInString(_Value);
    }

    static vector<string> Split(string S1, string Delim)
    {

        vector<string> vString;

        short pos = 0;
        string sWord; // define a string variable  

        // use find() function to get the position of the delimiters  
        while ((pos = S1.find(Delim)) != std::string::npos)
        {
            sWord = S1.substr(0, pos); // store the word   
           // if (sWord != "")
           // {
                vString.push_back(sWord);
            //}

            S1.erase(0, pos + Delim.length());  /* erase() until positon and move to next word. */
        }

        if (S1 != "")
        {
            vString.push_back(S1); // it adds last word of the string.
        }

        return vString;

    }

    vector<string> Split(string Delimiter)
    {
        return clsString::Split(_Value, Delimiter);
    }

    static string TrimLeft(string Sentence)
    {
        for (size_t i = 0; i < Sentence.length(); i++)
        {
            if (Sentence[i] != ' ')
            {
                Sentence.erase(0, i);
                return Sentence;
            }
        }
        return "";
    }

    string TrimLeft()
    {
        return clsString::TrimLeft(_Value);
    }
        
    static string TrimRight(string Sentence)
    {
        for (int i = static_cast<int>(Sentence.length()) - 1; i >= 0; i--)
        {
            if (Sentence[i] != ' ')
            {
                Sentence.erase(i + 1);
                return Sentence;
            }
        }
        return "";
    }

    string TrimRight()
    {
        return clsString::TrimRight(_Value);
    }

    static string Trim(string Sentence)
    {
        return TrimLeft(TrimRight(Sentence));
    }

    string Trim()
    {
        _Value = clsString::Trim(_Value);
        return _Value;
    }

    static string JoinString(const vector<string>& Words, string Delimiter)
    {
        string Sentence = "";

        for (const string& Word : Words)
        {
            Sentence = Sentence + Word + Delimiter;
        }

        if (!Sentence.empty())
        {
            Sentence = Sentence.substr(0, Sentence.length() - Delimiter.length());
        }
        
        return Sentence;
    }

    static string ReverseStringWords(string Sentence)
    {
        vector<string> Words = Split(Sentence, " ");
        string ReversedSentence = "";

        vector<string>::const_reverse_iterator RIterator;

        for (RIterator = Words.rbegin(); RIterator != Words.rend(); ++RIterator)
        {
            ReversedSentence += *RIterator + " ";
        }

        if (!ReversedSentence.empty())
        {
            ReversedSentence = ReversedSentence.substr(0, ReversedSentence.length() - 1);
        }

        return ReversedSentence;
    }

    string ReverseStringWords()
    {
        return clsString::ReverseStringWords(_Value);
    }

    static string ReplaceWordInString(string Sentence, string Target, string Replacement)
    {
        size_t Position = Sentence.find(Target);

        while (Position != string::npos)
        {
            Sentence = Sentence.replace(Position, Target.length(), Replacement);
            Position = Sentence.find(Target);
        }

        return Sentence;
    }

    string ReplaceWordInString(string Target, string Replacement)
    {
        return clsString::ReplaceWordInString(_Value, Target, Replacement);
    }

    static string ReplaceWordCustom(string Sentence, string Target, string Replacement, bool MatchCase)
    {
        vector<string> Words = Split(Sentence, " ");

        for (string& Word : Words)
        {
            if (MatchCase)
            {
                if (Word == Target)
                    Word = Replacement;
            }
            else
            {
                if (ToLowerCase(Word) == ToLowerCase(Target))
                    Word = Replacement;
            }
        }

        return JoinString(Words, " ");
    }

    string ReplaceWordCustom(string Target, string Replacement, bool MatchCase)
    {
        return clsString::ReplaceWordCustom(_Value, Target, Replacement, MatchCase);
    }

    static string RemovePunctuationMarks(string Sentence)
    {   
        string ResultStr = "";
        
        for (size_t i = 0; i < Sentence.length(); i++)
        {
            if (!ispunct(static_cast<unsigned char>(Sentence[i])))
            {
                ResultStr = ResultStr + Sentence[i];
            }
        }
        return ResultStr;
    }

    string RemovePunctuationMarks()
    {
        return clsString::RemovePunctuationMarks(_Value);
    }

};