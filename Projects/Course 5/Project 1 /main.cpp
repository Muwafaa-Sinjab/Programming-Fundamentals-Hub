#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enGameChoice {Stone = 1, Paper = 2, Scissors = 3};
enum enWinner {Player = 1, Computer = 2, Draw = 3};

struct stRoundInfo
{
    short RoundNumber = 0;
    enGameChoice PlayerChoice;
    enGameChoice ComputerChoice;
    enWinner Winner;
    string WinnerName;
};

struct stGameResult
{
    short GameRounds = 0;
    short PlayerWinTimes = 0;
    short ComputerWinTimes = 0;
    short DrawTimes = 0;
    enWinner GameWinner;
    string WinnerName = "";
};

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

short ReadHowManyRounds()
{
    short GameRounds = 0;

    do
    {
        cout << "How many Rounds You want to play... 1 - 10: ";
        cin >> GameRounds;

    }while(GameRounds < 1 || GameRounds > 10);

    return GameRounds;
}

enGameChoice ReadPlayerChoice()
{
    short Choice = 1;

    do
    {
        cout << "\nYour Choice.. [1]:Stone, [2]:Paper, [3]:Scissors ??: ";
        cin >> Choice;

    }while(Choice < 1 || Choice > 3);
     
    return (enGameChoice)Choice;
}

enGameChoice GetComputerChoice()
{
    return (enGameChoice)RandomNumber(1, 3);
}

enWinner WhoWonTheRound(stRoundInfo RoundInfo)
{
    if(RoundInfo.PlayerChoice == RoundInfo.ComputerChoice)
    {
        return enWinner::Draw;
    }

    switch (RoundInfo.PlayerChoice)
    {
    case enGameChoice::Stone:
        if(RoundInfo.ComputerChoice == enGameChoice::Paper)
        {
            return enWinner::Computer;
        }
        break;
    
    case enGameChoice::Paper:
        if(RoundInfo.ComputerChoice == enGameChoice::Scissors)
        {
            return enWinner::Computer;
        }
        break;
    
    case enGameChoice::Scissors:
        if(RoundInfo.ComputerChoice == enGameChoice::Stone)
        {
            return enWinner::Computer;
        }
        break;
    }

    return enWinner::Player;
}

string WinnerName(stRoundInfo Winner)
{
    string ArrWinnerName[3] = {"Player", "Computer", "Draw"};
   // return ArrWinnerName[Winner - 1];
}

stGameResult PlayGame(short HowManyRounds)
{
    stRoundInfo RoundInfo;
    short PlayerWinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;

    for(short GameRound = 1; GameRound <= HowManyRounds; GameRound++)
    {
        cout << "\nRound [" << GameRound << "] begins:\n";
        RoundInfo.RoundNumber = GameRound;
        RoundInfo.PlayerChoice = ReadPlayerChoice();
        RoundInfo.ComputerChoice = GetComputerChoice();
        RoundInfo.Winner = WhoWonTheRound(RoundInfo);
        //RoundInfo.WinnerName
    }
};

int main()
{
    srand((unsigned)time(NULL));
    return 0;
}