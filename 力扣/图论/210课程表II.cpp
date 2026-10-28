class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        vector<int> indegree(numCourses, 0);
        for(auto p : prerequisites){
            graph[p[1]].push_back(p[0]);  
            indegree[p[0]]++;
        }
        queue<int> que;
        for(int i = 0; i < numCourses; i++){
            if(indegree[i] == 0)que.push(i);            
        }
        vector<int> res;
        while(!que.empty()){
            int cur = que.front();
            que.pop();
            res.push_back(cur);
            for(auto it : graph[cur]){
                indegree[it]--;
                if(indegree[it] == 0) que.push(it);
            }            
        }
        if(res.size() != numCourses) return {};
        return res;
    }
};
