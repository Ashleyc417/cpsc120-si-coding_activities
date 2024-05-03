#include <iostream>
#include <vector>

bool checkWinner(std::vector<std::vector<char>> &board) {
  // Remember: board[row][column]

  // Go through board
  for (int i = 0; i < 3; i++) {
    // Check Win by Row:
    // 1. Current spot is not empty.
    // 2. Current spot is equal to 1 spot over.
    // 3. Current spot is equal to 2 spot over.
    if (board[i][0] != ' ' && board[i][0] == board[i][1] &&
        board[i][1] == board[i][2]) {
      return true;
    }

    // Check for Win by Column:
    // 1. Current spot is not empty.
    // 2. Current spot is equal to same index 1 spot below.
    // 3. Current spot is equal to same index 2 spots below.
    if (board[0][i] != ' ' && board[0][i] == board[1][i] &&
        board[1][i] == board[2][i]) {
      return true;
    }
  }

  // Check Primary Diagonal
  if (board[0][0] != ' ' && board[0][0] == board[1][1] &&
      board[1][1] == board[2][2]) {
    return true;
  }
  // Check Secondary Diagonal
  if (board[0][2] != ' ' && board[0][2] == board[1][1] &&
      board[1][1] == board[2][0]) {
    return true;
  }

  return false;
}

/* Could have also implemented printBoard like this:
 * void printBoard(std::vector<std::vector<char>> &board) {
 * // Loop through each row
 * for (int i = 0; i < board.size(); i++) {
 *   std::cout << "[";
 *
 *   // Loop through each element within row
 *   for (int j = i; j <board[0].size(); j++) {
 *     std::cout << board[i] << ", ";
 *   }
 *
 *    std::cout << "]\n";
 * }
 * std::cout << "\n";
 * }
 */

void printBoard(std::vector<std::vector<char>> &board) {
  // Loop through each row
  for (std::vector<char> row : board) {
    std::cout << "[";

    // Loop through each element within row
    for (char piece : row) {
      std::cout << piece << ", ";
    }

    std::cout << "]\n";
  }
  std::cout << "\n";
}

int main() {
  std::cout << "Is there a winnner on the board?\n\n";

  // Test Cases
  std::vector<std::vector<char>> board1 = {
      {'X', 'O', ' '}, {'X', 'O', ' '}, {'X', ' ', 'O'}};
  std::cout << "Test Case 1: " << (checkWinner(board1) ? "true" : "false")
            << "\n";
  printBoard(board1);

  std::vector<std::vector<char>> board2 = {
      {'X', 'O', 'X'}, {'X', 'X', 'O'}, {'O', 'X', 'O'}};
  std::cout << "Test Case 2: " << (checkWinner(board2) ? "true" : "false")
            << "\n";
  printBoard(board2);

  std::vector<std::vector<char>> board3 = {
      {'O', 'X', 'X'}, {'X', 'O', ' '}, {'O', 'X', 'O'}};
  std::cout << "Test Case 3: " << (checkWinner(board3) ? "true" : "false")
            << "\n";
  printBoard(board3);

  return 0;
}
