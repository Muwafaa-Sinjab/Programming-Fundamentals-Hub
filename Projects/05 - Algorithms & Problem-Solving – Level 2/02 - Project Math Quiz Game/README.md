# 02 Project - Math Quiz Game

This is a mental math practice application. It generates arithmetic problems based on user-defined difficulty and operation types.

## Functionality
1. **Configuration:** The user selects the number of questions, difficulty level (Easy, Medium, Hard, or Mixed), and the operation type (Add, Sub, Mul, Div, or Mixed).
2. **Operation:** The program loops through the requested number of questions, generating random numbers within the range defined by the difficulty level.
3. **Evaluation:** The program checks the user's input against the correct answer and displays a pass/fail result for each question.
4. **Report:** Displays the total correct and incorrect answers upon completion.

## Technical Structure
- **Difficulty Mapping:** Uses `GetQuestionRangeByDifficulty` to define number ranges.
- **Operation Handling:** Uses `enOperationType` to manage math functions.
- **Error Handling:** `cin.fail()` and `cin.ignore()` are used to handle invalid input.



## Technologies
- Language: C++
- Libraries: iostream, cstdlib, ctime, iomanip