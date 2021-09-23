// https://leetcode.com/problems/base-7

class Solution {
public:
    string convertToBase7(int num) {
        string ans = "";
        while(num) {
            ans += to_string(num%7);
            num /= 7;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};