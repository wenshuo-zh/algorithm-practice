// 回溯：digits 的位数 = 树的深度，当前数字映射的字符串长度 = 该层的宽度
// digitsIndex 表示当前处理到 digits 的第几个数字；mapIndex 是字符型数字转整型后的下标
class Solution {
public:
    const string map[10]={
        "",
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz",
    };
    vector<string> res;
    string str;
    void backtracking(string digits, int digitsIndex){
        if(str.size() == digits.size()){
            res.push_back(str);
            return;
        }
        int mapIndex = digits[digitsIndex] - '0';
        for(int i = 0; i < map[mapIndex].size(); i++){
            str += map[mapIndex][i];
            backtracking(digits, digitsIndex + 1);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        // digits 为空时不能进回溯：str.size() == digits.size() 会立刻成立并放入空串
        if(digits.empty())return res;
        backtracking(digits, 0);
        return res;
    }
};
