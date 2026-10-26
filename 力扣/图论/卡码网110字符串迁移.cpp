#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
#include<queue>
using namespace std;
int main(){
    int n;
    cin >> n;
    string beginStr, endStr;
    cin >> beginStr >> endStr;
    vector<string> strList(n);
    for(int i = 0; i < n; i++){
        cin >> strList[i];
    }
    unordered_set<string> st(strList.begin(), strList.end());
    if(!st.count(endStr)){
        cout << 0;
        return 0;
    }
    queue<string> que;
    que.push(beginStr);
    int res = 1;
    while(!que.empty()){
        //分层逻辑
        int sz = que.size();
        for(int k = 0; k < sz; k++){
            string cur = que.front();
            que.pop();
            for(int i = 0; i < cur.size(); i++){
                char oldc = cur[i];
                for(char c = 'a'; c <= 'z'; c++){
                    if(c == oldc)continue;
                    cur[i] = c;
                    if(st.count(cur)){
                        st.erase(cur);
                        if(cur == endStr){
                            cout << res + 1;
                            return 0;
                        }
                        que.push(cur);
                    }
                    cur[i] = oldc;
                }
            }
        }
        res++;
    }
    cout << 0;
    return 0;
}
