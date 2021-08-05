// https://leetcode.com/problems/zigzag-conversion

class Solution {
public:
    string convert(string s, int r) {
        if(s.size() < r || r <= 1)    return s;
        
        int len = s.size(), count = 0, interval = 2*r-2;
        string ans = "";
        
        for(int i = 0; i < r; i++) {
            int step = interval - 2*i;
            for(int j = 0; j+i < len; j += interval) {
                ans += s[j+i];
                if(i != 0 && i != r-1 && interval + j - i < len)
                    ans += s[j+interval - i];
            }
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