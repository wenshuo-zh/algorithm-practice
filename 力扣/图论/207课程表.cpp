class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indegree(numCourses, 0);
        vector<vector<int>> graph(numCourses);
        for(auto p : prerequisites){
            indegree[p[0]]++;
            graph[p[1]].push_back(p[0]);
        }
        queue<int> que;
        for(int i = 0; i < numCourses; i++){
            if(indegree[i] == 0){
                que.push(i);
            }
        }
        int count = 0;
        while(!que.empty()){
            int cur = que.front();
            que.pop();
            count++;
            for(int i = 0; i < graph[cur].size(); i++){
                int next = graph[cur][i];
                indegree[next]--;
                if(indegree[next] == 0)que.push(next);
            }
        }
        if(count == numCourses)return true;
        else return false;
    }
};
