// https://leetcode.com/problems/decode-ways

class Solution {
public:
    int numDecodings(string s) {
        if(s.find('0') != string::npos) return 0;
        
        int ans = 1, size = s.size();
        for(int i = 1; i < size; i++) {
            if((s[i] <= '6' && s[i] > '0') && (s[i-1] <= '2' && s[i-1] > '0')) ans++;
        }
        return ans;
    }
};