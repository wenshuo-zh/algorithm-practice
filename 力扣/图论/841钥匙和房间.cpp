class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);
        dfs(rooms, visited, 0);
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                return false;
            }
        }
        return true;
    }
    void dfs(const vector<vector<int>>& graph, vector<bool>& visited, int x){
        visited[x] = true;
        //遍历链表
        for(int i : graph[x]){
            if(!visited[i]){
                dfs(graph, visited, i);
            }
        }
    }
};
