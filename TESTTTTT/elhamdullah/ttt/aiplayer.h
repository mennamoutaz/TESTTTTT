#ifndef AIPLAYER_H
#define AIPLAYER_H

#include "GameBoard.h"
#include <vector>

struct TreeNode {
    GameBoard board;
    std::vector<TreeNode*> children;
    int moveRow;
    int moveCol;
    int score;

    TreeNode() : moveRow(-1), moveCol(-1), score(0) {}
};

class AIPlayer {
public:
    void makeMove(GameBoard& board) const;

private:
    void build_tree(TreeNode* node, int player) const;
    int minimax(TreeNode* node, int alpha, int beta, bool is_max, int depth) const;
    int evaluate(const GameBoard& board) const;
};

#endif // AIPLAYER_H
