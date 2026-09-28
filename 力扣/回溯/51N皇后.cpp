// 回溯：逐行放置皇后，只检查已放置的上方区域
class Solution {
public:
    vector<vector<string>> res;

    bool isValid(const vector<string>& board, int row, int col) {
        int n = board.size();
        for (int i = 0; i < row; ++i)
            if (board[i][col] == 'Q') return false;
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
            if (board[i][j] == 'Q') return false;
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j)
            if (board[i][j] == 'Q') return false;
        return true;
    }

    void backtracking(vector<string>& board, int row) {
        if (row == board.size()) {
            res.push_back(board);
            return;
        }
        for (int col = 0; col < board.size(); ++col) {
            if (!isValid(board, row, col)) continue;
            board[row][col] = 'Q';
            backtracking(board, row + 1);
            board[row][col] = '.';
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        backtracking(board, 0);
        return res;
    }
};
