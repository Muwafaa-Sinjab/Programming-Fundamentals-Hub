#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

enum enQuestionLevel { Easy = 1, Med = 2, Hard = 3, Mix = 4 };
enum enOperationType { Add = 1, Sub = 2, Mul = 3, Div = 4, OpMix = 5 };

struct stAnswersResult
{
    int rightAnswers = 0;
    int wrongAnswers = 0;
};

struct stGameRound
{
    int num1;
    int num2;
    int correctAnswer;
    int playerAnswer;
    enOperationType operationType;
};

struct stQuestionRange
{
    int min;
    int max;
};

int readQuestionNumber();
enQuestionLevel readDifficultyLevel();
enOperationType readOperationType();
stQuestionRange getQuestionRangeByDifficulty(enQuestionLevel difficultyLevel);
enOperationType getActualOperation(enOperationType op);
stGameRound generateGameRound(enOperationType op, stQuestionRange range);
int getRandomNumber(int from, int to);
string getLevelName(enQuestionLevel levelName);
char getOperationName(enOperationType operationName);
void startGame();

int main()
{
    srand((unsigned)time(NULL));
    startGame();
    return 0;
}

string getLevelName(enQuestionLevel levelName)
{
    switch (levelName)
    {
    case Easy: return "Easy";
    case Med:  return "Med";
    case Hard: return "Hard";
    case Mix:  return "Mix";
    default:   return "Unknown";
    }
}

char getOperationName(enOperationType operationName)
{
    switch (operationName)
    {
    case Add:   return '+';
    case Sub:   return '-';
    case Mul:   return '*';
    case Div:   return '/';
    case OpMix: return '?';
    default:    return '?';
    }
}

void startGame()
{
    int numberOfQuestions = readQuestionNumber();
    enQuestionLevel level = readDifficultyLevel();
    enOperationType opType = readOperationType();
    stAnswersResult results = {0, 0};

    for (int i = 1; i <= numberOfQuestions; i++)
    {
        stQuestionRange range = getQuestionRangeByDifficulty(level);
        stGameRound round = generateGameRound(opType, range);

        cout << "\nQuestion [" << i << "/" << numberOfQuestions << "]" << endl;
        cout << round.num1 << endl;
        cout << round.num2 << " (" << getOperationName(round.operationType) << ")" << endl;
        cout << "___________" << endl;
        
        cin >> round.playerAnswer;

        if (round.playerAnswer == round.correctAnswer)
        {
            cout << "\033[32mCorrect!\033[0m\n";
            results.rightAnswers++;
        }
        else
        {
            cout << "\033[31mWrong! \033[0m\n";
            cout << "The right answer is = " << round.correctAnswer << "\n" << endl;
            results.wrongAnswers++;
        }
    }

    cout << "\n_______________________\n";
    if (results.rightAnswers >= results.wrongAnswers)
        cout << " Final Result is Pass ";
    else
        cout << " Final Result is Lose ";
    cout << "\n_______________________\n";

    cout << "Number of questions: " << numberOfQuestions << endl;
    cout << "Question Level     : " << getLevelName(level) << endl;
    cout << "Operation Type     : " << getOperationName(opType) << endl;
    cout << "Right Answers      : " << results.rightAnswers << endl;
    cout << "Wrong Answers      : " << results.wrongAnswers << endl;
}

enOperationType getActualOperation(enOperationType op)
{
    if (op == OpMix)
        return (enOperationType)getRandomNumber(1, 4);
    return op;
}

stGameRound generateGameRound(enOperationType op, stQuestionRange range)
{
    stGameRound round;
    enOperationType actualOp = getActualOperation(op);
    round.operationType = actualOp;
    round.num1 = getRandomNumber(range.min, range.max);
    round.num2 = getRandomNumber(range.min, range.max);

    switch (actualOp)
    {
    case Add:
        round.correctAnswer = round.num1 + round.num2;
        break;
    case Sub:
        round.correctAnswer = round.num1 - round.num2;
        break;
    case Mul:
        round.correctAnswer = round.num1 * round.num2;
        break;
    case Div:
        if (round.num2 == 0) round.num2 = 1;
        round.correctAnswer = round.num1 / round.num2;
        break;
    default:
        round.correctAnswer = round.num1 + round.num2;
        break;
    }

    return round;
}

stQuestionRange getQuestionRangeByDifficulty(enQuestionLevel difficultyLevel)
{
    stQuestionRange range;
    enQuestionLevel actualLevel = difficultyLevel;

    if (difficultyLevel == Mix)
        actualLevel = (enQuestionLevel)getRandomNumber(1, 3);

    switch (actualLevel)
    {
    case Easy:
        range.min = 1; range.max = 10;
        break;
    case Med:
        range.min = 10; range.max = 30;
        break;
    case Hard:
        range.min = 30; range.max = 50;
        break;
    default:
        range.min = 1; range.max = 10;
        break;
    }
    return range;
}

enOperationType readOperationType()
{
    int userChoice;
    do {
        cout << "Enter Operation Type [1]Add, [2]Sub, [3]Mul, [4]Div, [5]Mix: ";
        cin >> userChoice;
        if(cin.fail() || userChoice < 1 || userChoice > 5) {
            cin.clear(); cin.ignore(10000, '\n');
            cout << "Invalid input!" << endl;
        } else break;
    } while(true);
    return (enOperationType)userChoice;
}

enQuestionLevel readDifficultyLevel()
{
    int userChoice;
    do {
        cout << "Enter Question Level [1]Easy, [2]Med, [3]Hard, [4]Mix: ";
        cin >> userChoice;
        if(cin.fail() || userChoice < 1 || userChoice > 4) {
            cin.clear(); cin.ignore(10000, '\n');
            cout << "Invalid input!" << endl;
        } else break;
    } while(true);
    return (enQuestionLevel)userChoice;
}

int readQuestionNumber()
{
    int questionNumber;
    do {
        cout << "How many questions you want to answer? ";
        cin >> questionNumber;
        if(cin.fail() || questionNumber <= 0) {
            cin.clear(); cin.ignore(10000, '\n');
            cout << "Invalid input!" << endl;
        } else break;
    } while(true);
    return questionNumber;
}

int getRandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}