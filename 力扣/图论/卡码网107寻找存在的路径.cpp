#include<iostream>
#include<vector>
using namespace std;
int n;
vector<int> father;
void init(){
    father.resize(n+1);
    for(int i = 0; i <= n; i++){
        father[i] = i;
    }
}
int find(int u){
    if(father[u] == u)return u;
    else father[u] = find(father[u]);
    return father[u];
}
bool isSame(int u, int v){
    u = find(u);
    v = find(v);
    return u == v;
}
void join(int u, int v){
    u = find(u);
    v = find(v);
    if(u == v)return;
    else father[v] = u;
}
int main(){
    int m, source, destination;
    cin >> n >> m;
    init();
    while(m--){
        int s, t;
        cin >> s >> t;
        join(s, t);
    }
    cin >> source >> destination;
    if(isSame(source, destination))cout << 1;
    else cout << 0;
}
