// 回溯：找到一个可行解后立即返回
class Solution {
public:
    bool isValid(const vector<vector<char>>& board, int row, int col, char num) {
        for (int i = 0; i < 9; ++i) {
            if (board[row][i] == num || board[i][col] == num) return false;
        }
        int startRow = row / 3 * 3;
        int startCol = col / 3 * 3;
        for (int i = startRow; i < startRow + 3; ++i)
            for (int j = startCol; j < startCol + 3; ++j)
                if (board[i][j] == num) return false;
        return true;
    }

    bool backtracking(vector<vector<char>>& board) {
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] != '.') continue;
                for (char num = '1'; num <= '9'; ++num) {
                    if (!isValid(board, i, j, num)) continue;
                    board[i][j] = num;
                    if (backtracking(board)) return true;
                    board[i][j] = '.';
                }
                return false;
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        backtracking(board);
    }
};
