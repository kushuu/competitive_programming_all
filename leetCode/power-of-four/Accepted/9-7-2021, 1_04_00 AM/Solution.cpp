// https://leetcode.com/problems/power-of-four

class Solution {
public:
    int base4(int n) {
        int ans = 0;
        while(n) {
            ans += n%4;
            n /= 4;
        }
        return ans;
    }
    
    bool isPowerOfFour(int n) {
        return base4(n) == 1;
    }
};