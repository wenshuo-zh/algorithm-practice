class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> inDegree(numCourses, 0);//入度数组
        vector<vector<int>> graph(numCourses);//邻接表，用于找指向
        for(auto& p : prerequisites){
            inDegree[p[0]]++;
            graph[p[1]].push_back(p[0]);//p[1]->p[0]
        }
        queue<int> que;
        for(int i = 0; i < inDegree.size(); i++){//将入度为0的节点加入队列
            if(inDegree[i] == 0){
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
                inDegree[next]--;
                if(inDegree[next] == 0){
                    que.push(next);
                }
            }
        }
        return count == numCourses;
    }
};
