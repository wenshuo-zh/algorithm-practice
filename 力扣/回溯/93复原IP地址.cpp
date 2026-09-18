// 回溯（切割问题）：和 131 分割回文串同类，区别是只能切三刀，
// 直接在原串的切点后插入 '.'，回溯时删掉，pointNums 记录已切刀数
// 注意 pointNums == 3 时要无条件 return，否则还会继续切出 4 段以上的无效分支
class Solution {
public:
    vector<string> res;
    bool isValid(const string& s, int i, int j){
        if(i > j)return false;
        if(j > i && s[i] == '0')return false;   // 前导零，但单个 "0" 合法
        int num = 0;
        for(int index = i; index <= j; index++){
            if(s[index] > '9' || s[index] < '0')return false;
            num = num * 10 + (s[index] - '0');
            if(num > 255)return false;
        }
        return true;
    }
    void backtracking(string &s, int startIndex, int pointNums){
        if(pointNums == 3){
            if(isValid(s, startIndex, s.size() - 1))res.push_back(s);
            return;
        }
        for(int i = startIndex; i < s.size(); i++){
            if(isValid(s, startIndex, i)){
                s.insert(s.begin() + i + 1, '.');
                backtracking(s, i + 2, pointNums + 1);
                s.erase(s.begin() + i + 1);
            }
            else break;
        }
    }
    vector<string> restoreIpAddresses(string s) {
        backtracking(s, 0, 0);
        return res;
    }
};
