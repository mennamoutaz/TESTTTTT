#include "gameboard.h"
#include <iostream>

GameBoard::GameBoard() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = 0;
        }
    }
}

void GameBoard::display() const {
    std::cout << "  1 2 3 " << std::endl;
    std::cout << " -------" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << i + 1 << "|";
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == 1) {
                std::cout << "X ";
            } else if (board[i][j] == -1) {
                std::cout << "O ";
            } else {
                std::cout << "- ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << " -------" << std::endl;
}

int GameBoard::checkWin() const {
    // Check rows
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] + board[i][1] + board[i][2] == 3) {
            return 1; // Player 1 wins
        } else if (board[i][0] + board[i][1] + board[i][2] == -3) {
            return -1; // Player 2 wins
        }
    }
    // Check columns
    for (int j = 0; j < 3; ++j) {
        if (board[0][j] + board[1][j] + board[2][j] == 3) {
            return 1; // Player 1 wins
        } else if (board[0][j] + board[1][j] + board[2][j] == -3) {
            return -1; // Player 2 wins
        }
    }
    // Check diagonals
    if (board[0][0] + board[1][1] + board[2][2] == 3 || board[0][2] + board[1][1] + board[2][0] == 3) {
        return 1; // Player 1 wins
    } else if (board[0][0] + board[1][1] + board[2][2] == -3 || board[0][2] + board[1][1] + board[2][0] == -3) {
        return -1; // Player 2 wins
    }
    // Check for draw
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == 0) {
                return 0; // Game is not over yet
            }
        }
    }
    return 2; // Game is a draw
}

int GameBoard::getValue(int row, int col) const {
    return board[row][col];
}

void GameBoard::setValue(int row, int col, int value) {
    board[row][col] = value;
}
