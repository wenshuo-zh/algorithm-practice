// visited数组、path繁琐dfs版本
class Solution {
public:
    int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    string path;
    bool res = false;

    void dfs(vector<vector<char>>& board, string& word, int x, int y, vector<vector<bool>>& visited){
        if(res) return;
        visited[x][y] = true;
        path.push_back(board[x][y]);
        if(path == word){
            res = true;
            return;
        }
        if(path.size() >= word.size()){
            path.pop_back();
            visited[x][y] = false;
            return;
        }
        for(int i = 0; i < 4; i++){
            int nextX = x + dir[i][0];
            int nextY = y + dir[i][1];
            if(nextX < 0 || nextX >= board.size() || nextY < 0 || nextY >= board[0].size()) continue;
            if(visited[nextX][nextY]) continue;
            if(board[nextX][nextY] != word[path.size()]) continue;
            dfs(board, word, nextX, nextY, visited);
        }

        path.pop_back();
        visited[x][y] = false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(board[i][j] == word[0]){
                    vector<vector<bool>> visited(m, vector<bool>(n, false));
                    path.clear();
                    dfs(board, word, i, j, visited);
                    if(res) return true;
                }
            }
        }
        return res;
    }
};

// 优化版本
class Solution {
public:
    int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
    bool dfs(vector<vector<char>>& board, string& word, int x, int y, int index ){
        if(index == word.size()-1){
            return true;
        }
        char temp = board[x][y];
        board[x][y] = '\0';
        for(int i = 0; i < 4; i++){
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];
            if(nx < 0 || nx >= board.size() || ny < 0 || ny >= board[0].size())
                continue;
            if(board[nx][ny] != word[index+1])
                continue;
            char ntemp = board[nx][ny];
            board[nx][ny] = '\0';
            bool found = dfs(board, word, nx, ny, index+1);
            board[nx][ny] = ntemp;
            if(found) return true;
        }
        board[x][y] = temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        bool res = false;
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(board[i][j] != word[0])
                    continue;
                res = dfs(board, word, i, j, 0);
                if(res)return res;
            }
        }
        return false;
    }
};
