# 01 Project - Stone Paper Scissors Game

This project is a console-based implementation of the Stone, Paper, Scissors game. It allows the user to play against the computer for a specified number of rounds.

## Game Mechanics
1. **Setup:** The player specifies the number of rounds (1 to 10).
2. **Execution:** In each round, the player chooses Stone, Paper, or Scissors. The computer generates a choice using `rand()`.
3. **Logic:** The program compares the choices based on game rules and updates the score.
4. **Summary:** After all rounds, the program displays the total wins for the player and the computer, the number of draws, and the final winner.

## Technical Structure
- **Data Management:** Uses `stGameInfo` struct to track scores and game state.
- **Game Logic:** Implemented using `enGameElements` and `enResults` enums for better readability.
- **Validation:** Includes input checks to ensure valid round numbers and choices.



## Technologies
- Language: C++
- Libraries: iostream, cstdlib, ctime, string