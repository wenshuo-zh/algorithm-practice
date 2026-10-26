class Solution {
public:
    vector<int> father;
    void init(const int& n){
        father.resize(n);
        for(int i = 0; i < n; i++){
            father[i] = i;
        }
    }
    int find(int u){
        if(u == father[u])return u;
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
        father[u] = v;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        init(n);
        for(int i = 0; i < edges.size(); i++){
            join(edges[i][0], edges[i][1]);
        }
        if(isSame(source, destination))return true;
        else return false;
    }
};
