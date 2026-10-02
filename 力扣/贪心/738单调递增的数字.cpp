class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string sn = to_string(n);
        int flag = sn.size();
        for(int i = sn.size() - 1; i > 0; i--){
            if(sn[i-1] > sn[i]){
                flag = i;
                sn[i-1]--;
            }
        }
        for(int i = flag; i < sn.size(); i++){
            sn[i] = '9';
        }
        return stoi(sn);
    }
};
