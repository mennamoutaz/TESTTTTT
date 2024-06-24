#include "aiplayer.h"
#include "gameBoard.h"
#include <limits>
#include <iostream>

void AIPlayer::makeMove(GameBoard& board) const {
    std::cout << "AI Move:" << std::endl;
    TreeNode* root = new TreeNode;
    root->board = board;
    build_tree(root, -1); // AI is player -1

    int best_score = std::numeric_limits<int>::min();
    TreeNode* best_move = nullptr;
    for (TreeNode* child : root->children) {
        int score = minimax(child, std::numeric_limits<int>::min(), std::numeric_limits<int>::max(), false, 9); // Adjust depth of search
        if (score > best_score) {
            best_score = score;
            best_move = child;
        }
    }

    board.setValue(best_move->moveRow, best_move->moveCol, -1); // AI's move

    // Free memory
    for (TreeNode* child : root->children) {
        delete child;
    }
    delete root;
}

void AIPlayer::build_tree(TreeNode* node, int player) const {
    int winner = node->board.checkWin();
    if (winner != 0) {
        node->score = winner;
        return;
    }

    // Generate child nodes for possible moves
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (node->board.getValue(i, j) == 0) {
                TreeNode* child = new TreeNode;
                child->board = node->board;
                child->board.setValue(i, j, player);
                child->moveRow = i;
                child->moveCol = j;
                node->children.push_back(child);
                build_tree(child, -player);
            }
        }
    }
}

int AIPlayer::minimax(TreeNode* node, int alpha, int beta, bool is_max, int depth) const {
    if (node->children.empty() || depth == 0) {
        return evaluate(node->board); // Evaluate the board state
    }

    if (is_max) {
        int max_score = std::numeric_limits<int>::min();
        for (TreeNode* child : node->children) {
            int score = minimax(child, alpha, beta, false, depth - 1);
            max_score = std::max(max_score, score);
            alpha = std::max(alpha, score);
            if (alpha >= beta) {
                break;
            }
        }
        return max_score;
    } else {
        int min_score = std::numeric_limits<int>::max();
        for (TreeNode* child : node->children) {
            int score = minimax(child, alpha, beta, true, depth - 1);
            min_score = std::min(min_score, score);
            beta = std::min(beta, score);
            if (alpha >= beta) {
                break;
            }
        }
        return min_score;
    }
}

int AIPlayer::evaluate(const GameBoard& board) const {
    int result = board.checkWin();
    if (result == 1) { // If player wins, return a low score
        return -1000;
    } else if (result == -1) { // If AI wins, return a high score
        return 1000;
    } else if (result == 2) { // If it's a draw, return 0
        return 0;
    }
    // Otherwise, return a neutral score
    return 0;
}
