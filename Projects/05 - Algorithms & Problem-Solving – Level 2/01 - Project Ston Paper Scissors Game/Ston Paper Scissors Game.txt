#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

enum enGameElements
{
    Stone = 1,
    Paper = 2,
    Scissors = 3
};

enum enResults
{
    Draw = 1,
    PlayerWin = 2,
    ComputerWin = 3
};

struct stGameInfo
{
    int gameRounds = 0;
    int playerResults = 0;
    int computerResults = 0;
    int drawTimes = 0;
    enResults finalWinner;
};

int GetRandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

stGameInfo CountRounds()
{
    stGameInfo gameInfo;

    do
    {
        cout << "How Many Rounds? From 1 to 10.. ";
        cin >> gameInfo.gameRounds;

        if (gameInfo.gameRounds < 1 || gameInfo.gameRounds > 10)
        {
            cout << "Invalid input! Please enter a number between 1 and 10.\n";
        }

    } while (gameInfo.gameRounds > 10 || gameInfo.gameRounds < 1);

    return gameInfo;
}

enGameElements GetPlayerChoice()
{
    int choiceInput;

    cout << "Your Choice: [1]Stone, [2]Paper, [3]Scissors: ";
    cin >> choiceInput;

    return (enGameElements)choiceInput;
}

enGameElements GetComputerChoice()
{
    return (enGameElements)GetRandomNumber(1, 3);
}

enResults PlayGameRule(enGameElements computerChoice, enGameElements playerChoice)
{
    if (computerChoice == playerChoice)
    {
        return enResults::Draw;
    }

    if ((playerChoice == enGameElements::Stone && computerChoice == enGameElements::Scissors) ||
        (playerChoice == enGameElements::Scissors && computerChoice == enGameElements::Paper) ||
        (playerChoice == enGameElements::Paper && computerChoice == enGameElements::Stone))
    {
        return enResults::PlayerWin;
    }
    else
    {
        return enResults::ComputerWin;
    }
}

string GetElementName(enGameElements element)
{
    switch (element)
    {
        case Stone:
            return "Stone";

        case Paper:
            return "Paper";

        case Scissors:
            return "Scissors";

        default:
            return "Unknown";
    }
}

string GetResultName(enResults result)
{
    switch (result)
    {
        case Draw:
            return "Draw";

        case PlayerWin:
            return "Player Win";

        case ComputerWin:
            return "Computer Win";

        default:
            return "Unknown";
    }
}

void PrintFinalResult(stGameInfo gameInfo)
{
    cout << "\t\t___________________________________________________________" << endl;
    cout << "\n\t\t\t\t+++ G a m e   O v e r +++" << endl;
    cout << "\t\t___________________________________________________________" << endl;
    cout << "\t\t_____________________[ Game Results ]______________________" << endl;

    cout << "\t\t\tGame Rounds         : " << gameInfo.gameRounds << endl;
    cout << "\t\t\tPlayer 1 won times  : " << gameInfo.playerResults << endl;
    cout << "\t\t\tComputer won times  : " << gameInfo.computerResults << endl;
    cout << "\t\t\tDraw times          : " << gameInfo.drawTimes << endl;
    cout << "\t\t\tFinal Winner        : " << GetResultName(gameInfo.finalWinner) << endl;

    cout << "\t\t___________________________________________________________" << endl;
    cout << "\n\n";
}

void StartGame()
{
    stGameInfo gameInfo = CountRounds();

    cout << "\n";

    for (int round = 1; round <= gameInfo.gameRounds; round++)
    {
        cout << "Round [" << round << "] begins:" << endl;

        enGameElements playerChoice = GetPlayerChoice();
        enGameElements computerChoice = GetComputerChoice();

        enResults result = PlayGameRule(computerChoice, playerChoice);

        if (result == Draw)
        {
            gameInfo.drawTimes++;
        }
        else if (result == PlayerWin)
        {
            gameInfo.playerResults++;
        }
        else
        {
            gameInfo.computerResults++;
        }

        cout << "\n";
        cout << "______________Round " << round << "______________" << endl;
        cout << "Player Choice   : " << GetElementName(playerChoice) << endl;
        cout << "Computer Choice : " << GetElementName(computerChoice) << endl;
        cout << "Round Winner    : " << GetResultName(result) << endl;
        cout << "___________________________________" << endl;
        cout << "\n";
    }

    if (gameInfo.playerResults > gameInfo.computerResults)
    {
        gameInfo.finalWinner = PlayerWin;
    }
    else if (gameInfo.computerResults > gameInfo.playerResults)
    {
        gameInfo.finalWinner = ComputerWin;
    }
    else
    {
        gameInfo.finalWinner = Draw;
    }

    PrintFinalResult(gameInfo);
}

int main()
{
    srand((unsigned)time(NULL));

    StartGame();

    return 0;
}