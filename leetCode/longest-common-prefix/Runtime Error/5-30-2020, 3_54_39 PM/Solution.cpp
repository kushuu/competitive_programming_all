// https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        bool flag = true;
        for(int i = 0; i < int(strs[0].size()); i++) {
            char ele = strs[0][i];
            for(int j = 1; j < int(strs.size()); j++) {
                if(strs[j][i] != ele) {
                    flag = false;
                    break;
                }
            }
            if(flag)
                ans += ele;
        }
        return ans;
    }
};