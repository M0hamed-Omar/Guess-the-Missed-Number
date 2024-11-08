# Guess-the-Missed-Number
# Guess the Missed Number Game

This is a simple "Guess the Missed Number" game created in C++. The game presents several number sequences with a missing number. The player needs to guess the missing number in each sequence. The game offers the player 3 attempts and provides feedback based on the number of correct guesses.

## How It Works

1. The player is given four sequences of numbers, each with one missing number.
2. The player has to guess the missing number in each sequence.
3. The game tracks the player's score based on the number of correct answers.
4. At the end of the round, feedback is given based on the score:
   - 0 or 1 correct answers: "Very weak!"
   - 2 correct answers: "You just passed!"
   - 3 correct answers: "Good attempt"
   - 4 correct answers: "Fantastic!"

5. The player can attempt the game again or exit after each round.

### Example Gameplay

```
Welcome to Guess The Number game
You have just 3 attempts to answer each question
1- 2, 4, ??, 8, 10
Your answer: 6
2- 3, 6, 9, ??, 15
Your answer: 12
3- 1, 4, 9, 16, ??
Your answer: 25
4- ??, 45, 40, 35, 30
Your answer: 50

Your score is: 4 from 4
Fantastic!
Would you like to try again?
0-No  1-Yes
```

## Requirements

- A C++ compiler.

## Usage

1. Save the code in a `.cpp` file.
2. Use a C++ compiler to compile the file.
   ```bash
   g++ guess_the_missed_number.cpp -o guess_game
   ```
3. Run the executable.
   ```bash
   ./guess_game
   ```

## Notes

- The game gives the player a total of 3 attempts to guess the missing numbers.
