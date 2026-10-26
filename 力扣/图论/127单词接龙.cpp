class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st(wordList.begin(), wordList.end());
        if (!st.count(endWord)) return 0; // 特判终点不存在
        queue<string> que;
        que.push(beginWord);
        st.erase(beginWord);
        int res = 1;

        while(!que.empty()){
            int sz = que.size(); // 当前这一层一共有多少节点
            for(int k = 0; k < sz; k++){ // 把这一层全部处理完
                string cur = que.front();
                que.pop();
                for(int i = 0; i < cur.size(); i++){
                    char old = cur[i];
                    for(char c = 'a'; c <= 'z'; c++){
                        if(c == old) continue;
                        cur[i] = c;
                        if(cur == endWord){
                            return res + 1;
                        }
                        if(st.count(cur)){
                            st.erase(cur);
                            que.push(cur);
                        }
                    }
                    cur[i] = old;
                }
            }
            res++; //  一层全部处理结束，步数+1
        }
        return 0;
    }
};
