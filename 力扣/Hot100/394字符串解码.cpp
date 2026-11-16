class Solution {
public:
    string decodeString(string s) {
        stack<string> strSt;
        stack<int> numSt;
        string curStr = "";
        int num = 0;
        for(auto c : s){
            if(c == '['){
                //保存并重置状态
                strSt.push(curStr);
                numSt.push(num);
                curStr = "";
                num = 0;
            }else if(c == ']'){
                string prev = strSt.top();
                strSt.pop();
                int cnt = numSt.top();
                numSt.pop();

                while(cnt--){
                    prev += curStr;
                }
                curStr = prev;
            }
            else if(c <= '9' && c >= '0'){
                 num = num * 10 + (c - '0');
            }else{
                curStr += c;
            }
        }
        return curStr;
    }
};
