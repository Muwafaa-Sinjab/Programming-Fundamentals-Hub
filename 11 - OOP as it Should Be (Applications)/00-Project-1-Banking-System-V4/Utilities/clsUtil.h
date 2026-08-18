#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "clsDate.h"

using namespace std;

class clsUtil
{
public:
    static void SRand()
    {
        ::srand((unsigned)time(NULL));
    };

    static int RandomNumber(int From, int To)
    {
        int RandNum = rand() % (To - From + 1) + From;
        return RandNum; 
    }

    enum enCharType {SmallLetter = 1, CapitalLetter = 2 , Digit = 3, MixChars = 4, SpecialCharacter = 5};
    static char GetRandomCharacter(enCharType CharType)
    {
        switch (CharType)
        {
            case enCharType::SmallLetter:
            {
                return char(RandomNumber(97, 122)); 
            }
            case enCharType::CapitalLetter:
            {
                return char(RandomNumber(65, 90));
            }
            case enCharType::SpecialCharacter:
            {
                return char(RandomNumber(33, 47));
            }
            case enCharType::Digit:
            {
                return char(RandomNumber(48, 57));
            }
            case enCharType::MixChars:
            {
                return GetRandomCharacter(enCharType(RandomNumber(1, 3)));
            }
        }
        return '\0';
    }

    static string GenerateWord(enCharType CharType, short Length)
    {
        string Word = "";

        for (int Index = 1; Index <= Length; Index++)
        {
            Word += GetRandomCharacter(CharType);
        }

        return Word;
    }

    static string GenerateKey(enCharType CharType)
    {
        string Key = "";

        Key = GenerateWord(CharType, 4) + "-";
        Key += GenerateWord(CharType, 4) + "-";
        Key += GenerateWord(CharType, 4) + "-";
        Key += GenerateWord(CharType, 4);

        return Key;
    }

    static void GenerateKeys(short NumberOfKeys, enCharType CharType)
    {
        for (int KeyIndex = 1; KeyIndex <= NumberOfKeys; KeyIndex++)
        {
            cout << "Key[" << KeyIndex << "] : " << GenerateKey(CharType) << endl;
        }
    }

    static void FillArrayWithRandomNumbers(int Arr[100], int ArrLength, int From, int To) 
    {
        if(ArrLength > 100 || ArrLength < 0)
            ArrLength = 0;
        for(int i = 0 ; i < ArrLength; i++) 
        Arr[i] = RandomNumber(From, To); 

    }

    static void FillArrayWithRandomWords(string Arr[100], int ArrLength, enCharType CharType, short WordLength)
    {
        for (int i = 0; i < ArrLength; i++)
        {
            Arr[i] = GenerateWord(CharType, WordLength);
        }
    }

    static void FillArrayWithRandomKeys(string Arr[100], int ArrLength, enCharType CharType)
    {
        for (int i = 0; i < ArrLength; i++)
            Arr[i] = GenerateKey(CharType);
    }

    static void Swap(int& A, int& B)
    {
        int Temp;

        Temp = A;
        A = B;
        B = Temp;
    }

    static void Swap(double& A, double& B)
    {
        double Temp;

        Temp = A;
        A = B;
        B = Temp;
    }

    static void Swap(bool& A, bool& B)
    {
        bool Temp;

        Temp = A;
        A = B;
        B = Temp;
    }

    static void Swap(char& A, char& B)
    {
        char Temp;

        Temp = A;
        A = B;
        B = Temp;
    }

    static void Swap(string& A, string& B)
    {
        string Temp;

        Temp = A;
        A = B;
        B = Temp;
    }

    static void SwapDates(clsDate& A, clsDate& B)
    {
        clsDate Temp = A;
        A = B;
        B = Temp;
    }

    static void ShuffleArray(int Array[100], int ArrayLength)
    {
        if (ArrayLength <= 1)
        return;

        for (int Index = 0; Index < ArrayLength; Index++)
        {
            Swap(
                Array[RandomNumber(0, ArrayLength - 1)],
                Array[RandomNumber(0, ArrayLength - 1)]);
        }
    }

    static void ShuffleArray(string Array[100], int ArrayLength)
    {
        if (ArrayLength <= 1)
        return;

        for (int Index = 0; Index < ArrayLength; Index++)
        {
            Swap(
                Array[RandomNumber(0, ArrayLength - 1)],
                Array[RandomNumber(0, ArrayLength - 1)]);
        }
    }
    
    static string Tabs(short NumberOfTabs)
    {
        string T = "";

        for (int i = 1; i <= NumberOfTabs; i++)
        {
            T = T + "\t";
        }
        return T;
    }

    static string EncryptText(string Text, short EncryptionKey = 10)
    {
        for (int Index = 0; Index < Text.length(); Index++)
        {
            Text[Index] = char( (int)Text[Index] + EncryptionKey);
        }

        return Text;
    }

    static string DecryptText(string Text, short EncryptionKey = 10)
    {
        for (int Index = 0; Index < Text.length(); Index++)
        {
            Text[Index] = char( (int)Text[Index] - EncryptionKey);
        }

        return Text;
    }

    static string NumberToText(int Number)
    {
       if(Number == 0)
       {
           return "";
       }
       if(Number >= 1 && Number <= 19)
       {
           string arr[] = { "", "One","Two","Three","Four","Five","Six","Seven",
                                "Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen",
                                    "Fifteen","Sixteen","Seventeen","Eighteen","Nineteen" };
           return arr[Number] + " ";
       }
       if(Number >= 20 && Number <= 99)
       {
           string arr[] = { "","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety" };
            return arr[Number / 10] + " " + NumberToText(Number % 10);
       }
       if(Number >= 100 && Number <= 199)
       {
            return "One Hundred " + NumberToText(Number % 100);
       }
       if(Number >= 200 && Number <= 999)
       {
            return NumberToText(Number / 100) + "Hundreds " + NumberToText(Number % 100);
       }
       if(Number >= 1000 && Number <= 1999)
       {
            return "One Thousand " + NumberToText(Number % 1000);
       }
       if(Number >= 2000 && Number <= 999999)
       {
            return NumberToText(Number / 1000) + "Thousands " + NumberToText(Number % 1000);
       }
       if(Number >= 1000000 && Number <= 1999999)
       {
            return  "One Million " + NumberToText(Number % 1000000);
       }
       if(Number >= 2000000 && Number <= 999999999)
       {
            return NumberToText(Number / 1000000) + "Millions " + NumberToText(Number % 1000000);
       }
       if(Number >= 1000000000 && Number <= 1999999999)
       {
            return "One Billion " + NumberToText(Number % 1000000000);
       }
       else
       {
            return NumberToText(Number / 1000000000) + "Billions " + NumberToText(Number % 1000000000);
       }
    }
};