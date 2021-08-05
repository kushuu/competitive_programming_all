// https://leetcode.com/problems/decode-ways

class Solution {
public:
    int numDecodings(string s) {
        if(s.find("00") != string::npos) return 0;
        bool found = false;
        int zeroCnt = 0;
        for(auto i : s) {
            if(i != '0') found = true;
            else zeroCnt++;
        }
        if(!found) return 0;
        
        int ans = 1, size = s.size();
        if(zeroCnt) {
            return count(s.begin(), s.end(), '0'); //+ count(s.begin(), s.end(), "20");
        }
        for(int i = 1; i < size; i++) {
            if(s[i] == '0' && (s[i-1] == '1' || s[i-1] == '2')) {
                ans++;
                continue;
            }
            if((s[i] <= '6' && s[i] > '0') && (s[i-1] <= '2' && s[i-1] > '0')) ans++;
        }
        return ans;
    }
};