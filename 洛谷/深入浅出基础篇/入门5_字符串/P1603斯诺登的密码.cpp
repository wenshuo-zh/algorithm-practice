#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    map<string, int> mp = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
        {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9},
        {"ten", 10}, {"eleven", 11}, {"twelve", 12}, {"thirteen", 13},
        {"fourteen", 14}, {"fifteen", 15}, {"sixteen", 16}, {"seventeen", 17},
        {"eighteen", 18}, {"nineteen", 19}, {"twenty", 20},
        {"a", 1}, {"both", 2}, {"another", 1}, {"first", 1}, {"second", 2}, {"third", 3}
    };
    vector<string> v;
    for (int i = 0; i < 6; i++) {
        string w;
        cin >> w;
        if (!w.empty() && w.back() == '.') w.pop_back();
        auto it = mp.find(w);
        if (it != mp.end()) {
            int t = (it->second * it->second) % 100;
            string s = to_string(t);
            if (t < 10) s = "0" + s;                        
            v.push_back(s);
        }
    }
    if (v.empty()) { cout << 0; return 0; }
    sort(v.begin(), v.end());                              
    string ans;
    for (auto& s : v) ans += s;
    int p = 0;
    while (p < (int)ans.size() - 1 && ans[p] == '0') p++; 
    cout << ans.substr(p);
    return 0;
}
