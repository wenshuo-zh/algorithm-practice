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
    bool isTreeAfterMoving(vector<vector<int>>& edges, int deleteEdge){
        init(edges.size());
        for(int i = 0; i < edges.size(); i++){
            if(i == deleteEdge)continue;
            if(isSame(edges[i][0], edges[i][1]))return false;
            join(edges[i][0], edges[i][1]);
        }
        return true;
    }
    vector<int> getRemoveEdge(const vector<vector<int>>& edges){
        init(edges.size());
        for(int i = 0; i < edges.size(); i++){
            if(isSame(edges[i][0], edges[i][1]))return{edges[i][0], edges[i][1]};
            else join(edges[i][0], edges[i][1]);
        }
        return {0, 0};
    }
    vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges) {
        //统计节点入度的数组
        vector<int> inDegree(edges.size()+1, 0);
        for(int i = 0; i < edges.size(); i++){
            inDegree[edges[i][1]]++;
        }
        //记录入度为2的节点，倒叙因为要优先删除最后的边
        vector<int> vec;
        for(int i = edges.size()-1; i >= 0; i--){
            if(inDegree[edges[i][1]] == 2){
                vec.push_back(i);
            }
        }
        if(vec.size() > 0){
            if(isTreeAfterMoving(edges, vec[0]))
                return {edges[vec[0]][0], edges[vec[0]][1]};
            else return {edges[vec[1]][0], edges[vec[1]][1]};
        }
        //有环的情况
        return getRemoveEdge(edges);
    }
};
