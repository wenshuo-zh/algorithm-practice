#include<iostream>

#include<vector>

#include<queue>

#include <algorithm>

#include <cstdlib>

#include <climits>

using namespace std;

int dir[8][2] = {-2, -1, -2, 1, 2, -1, 2, 1, -1, 2, -1, -2, 1, 2, 1, -2};

struct node{

    int x, y;

    int g;//已经走的步数

    int f;//估计总步数

};

struct cmp{

    bool operator()(node a, node b){

        return a.f > b.f;

    }

};

//启发函数，返回从当前位置[x, y]到终点[b1, b2]，估计还需要多少步

int h(int x, int y, int b1, int b2){

    int dx = abs(x - b1);

    int dy = abs(y - b2);

    return (max(dx, dy) + 1) / 2;

}

int aStar(int a1, int a2, int b1, int b2){

    priority_queue<node, vector<node>, cmp> que;

    vector<vector<int>> dist(1001, vector<int>(1001, INT_MAX));

    dist[a1][a2] = 0;

    que.push({a1, a2, 0, h(a1, a2, b1, b2)});

    while (!que.empty()) {

        node cur = que.top();

        que.pop();

        if (cur.x == b1 && cur.y == b2) return cur.g;

        for (int i = 0; i < 8; i++) {

            int nx = cur.x + dir[i][0];

            int ny = cur.y + dir[i][1];

            if (nx < 1 || nx > 1000 || ny < 1 || ny > 1000)continue;

            int newG = cur.g + 1;

            if (newG < dist[nx][ny]) {

                // 更新 dist

                // 计算新的 f

                // 将新节点加入优先队列

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

        cout << moves[b1][b2] << endl;

    }

}
