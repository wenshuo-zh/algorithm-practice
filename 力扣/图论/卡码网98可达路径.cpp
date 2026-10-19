#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> res; vector<int> path;
void dfs(const vector<vector<int>>& g,int x,int n){ if(x==n){res.push_back(path);return;} for(int y:g[x]){path.push_back(y);dfs(g,y,n);path.pop_back();} }
int main(){int n,m;cin>>n>>m;vector<vector<int>> g(n+1);while(m--){int s,t;cin>>s>>t;g[s].push_back(t);}path.push_back(1);dfs(g,1,n);if(res.empty()){cout<<-1<<'\n';return 0;}for(auto& p:res){for(int i=0;i<(int)p.size();++i)cout<<(i?' ':'')<<p[i];cout<<'\n';}}
