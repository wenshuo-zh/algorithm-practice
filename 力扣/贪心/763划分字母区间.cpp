class Solution {
public:
    vector<int> partitionLabels(string s) {
        int hash[27] = {0};
        for(int i = 0; i < s.size(); i++){
            hash[s[i] - 'a'] = i;
        }
        vector<int> res;
        int temp = 0;
        int far = 0;
        for(int i = 0; i < s.size(); i++){
            temp++;
            far = max(far, hash[s[i] - 'a']);
            if(i == far){
                res.push_back(temp);
                temp = 0;
            }
        }
        return res;
    }
};
