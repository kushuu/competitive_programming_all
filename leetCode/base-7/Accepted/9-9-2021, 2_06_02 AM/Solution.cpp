// https://leetcode.com/problems/base-7

class Solution {
public:
    string convertToBase7(int num) {
        if(!num) return "0";
        
        // 0ms solution.
        string ans = "";
        bool sign = num > 0;
        num = abs(num);
        while(num) {
            ans += to_string(num%7);
            num /= 7;
        }
        reverse(ans.begin(), ans.end());
        if(sign) return ans;
        ans = '-' + ans;
        return ans;
    }
};