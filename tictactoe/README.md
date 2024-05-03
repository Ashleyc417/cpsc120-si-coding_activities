# Tic Tac Toe

Design a function to determine if there is a winner in a Tic Tac Toe game played on a 3x3 board. 
The game is won if a player has filled either a row, column, or diagonal with their marker (either 'X' or 'O').

<br />

**Your job is to implement 2 functions:**

1. A function `checkWinner` that
   returns `true` if there is a winner and `false` otherwise.

2. A function `printBoard` that
   prints the game board passed into the function.

<br />

## Input:
- board: A 3x3 vector of characters representing the Tic Tac Toe board.
- Each cell contains either 'X', 'O', or ' ' (empty).

<br />

## Run Your Code

Compile using `clang++ main.cpp` or `g++ main.cpp`

Execute/Run your code using `./a.out`

<br />

## Expected Output:

```
Is there a winnner on the board?

Test Case 1: true
[X, O,  , ]
[X, O,  , ]
[X,  , O, ]

Test Case 2: false
[X, O, X, ]
[X, X, O, ]
[O, X, O, ]

Test Case 3: true
[O, X, X, ]
[X, O,  , ]
[O, X, O, ]
```
