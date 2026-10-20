#include <vector>
using namespace std;

class Solution {
    vector<int> path;
    vector<vector<int>> res;

    void dfs(vector<vector<int>>& graph, int x) {
        if (x == static_cast<int>(graph.size()) - 1) {
            res.push_back(path);
            return;
        }
        for (int next : graph[x]) {
            path.push_back(next);
            dfs(graph, next);
            path.pop_back();
        }
    }

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        path = {0};
        res.clear();
        dfs(graph, 0);
        return res;
    }
};
