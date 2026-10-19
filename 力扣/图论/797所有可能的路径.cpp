#include <vector>
using namespace std;
class Solution { vector<int> path; vector<vector<int>> res; void dfs(vector<vector<int>>& g,int x){ if(x==(int)g.size()-1){res.push_back(path);return;} for(int y:g[x]){path.push_back(y);dfs(g,y);path.pop_back();} } public: vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph){path={0};res.clear();dfs(graph,0);return res;} };
