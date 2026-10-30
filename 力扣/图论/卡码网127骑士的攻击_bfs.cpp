#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int dir[8][2] = {-2, -1, -2, 1, 2, -1, 2, 1, -1, 2, -1, -2, 1, 2, 1, -2};
void bfs(int a1, int a2, int b1, int b2, vector<vector<int>>& moves){
    queue<pair<int, int>> que;
    que.push({a1, a2});
    while(!que.empty()){
        pair<int, int> cur = que.front();
        que.pop();
        if(cur.first == b1 && cur.second == b2)break;
        for(int i = 0; i < 8; i++){
            int nx = cur.first + dir[i][0];
            int ny = cur.second + dir[i][1];
            if(nx < 1 || nx > 1000 || ny < 1 || ny > 1000)continue;
            if(!moves[nx][ny]){
                moves[nx][ny] = moves[cur.first][cur.second] + 1;
                que.push({nx, ny}); 
            }
        }        
    }
}
int main(){
    int n;
    cin >> n;
    int a1, a2, b1, b2;
    while(n--){
        cin >> a1 >> a2 >> b1 >> b2;
        vector<vector<int>> moves(1001, vector<int>(1001, 0));
        bfs(a1, a2, b1, b2, moves);
        cout << moves[b1][b2] << endl;
    }
}
