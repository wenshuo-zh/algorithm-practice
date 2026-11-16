class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.empty())return true;
        st.push(s[0]);
        for(int i = 1; i < s.size(); i++){
            char tar;
            if(s[i] == ')') tar = '(';
            else if(s[i] == '}') tar = '{';
            else if(s[i] == ']') tar = '[';
            else tar = ' ';
            if(!st.empty() && st.top() == tar){
                st.pop();
            }else st.push(s[i]);
        }
        if(st.empty())return true;
        else return false;
    }
};
