// https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)    return "";
        string ans = "";
        for(int i = 0; i < int(strs[0].size()); i++) {
            char ele = strs[0][i];
            for(int j = 1; j < int(strs.size()); j++) {
                if(strs[j][i] != ele) {
                    return ans;
                }
            }
            ans += ele;
        }
        return ans;
    }
};

static int fastio = []() {
    #define endl '\n'
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(0);
    return 0;
}();