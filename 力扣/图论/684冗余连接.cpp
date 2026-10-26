class Solution {
public:
vector<int> father;
    void init(const int& n){
        father.resize(n+1);
        for(int i = 0; i <= n; i++){
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
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        init(edges.size());
        for(int i = 0; i < edges.size(); i++){
            if(isSame(edges[i][0], edges[i][1])){
                return{edges[i][0], edges[i][1]};
            }
            join(edges[i][0], edges[i][1]);
        }
        return {0, 0};
    }
};
