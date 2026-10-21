// dfs版本
class Solution {
public:
    vector<int> path;
    vector<vector<int>> res;
    void dfs(const vector<vector<int>>& graph, int x, int n){
        if(x == n){
            res.push_back(path);
            return;
        }
        for(int i = 0; i < graph[x].size(); i++){
            path.push_back(graph[x][i]);
            dfs(graph, graph[x][i], n);
            path.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        path.push_back(0);
        dfs(graph, 0, graph.size()-1);
        return res;
    }
};
