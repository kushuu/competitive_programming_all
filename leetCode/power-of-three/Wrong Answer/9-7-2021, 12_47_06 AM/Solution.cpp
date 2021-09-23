// https://leetcode.com/problems/power-of-three

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 1) return true;
        while(n) {
            n /= 3;
            // cout << n << " " ;
            if(!(n&1)) return false;
            if(n == 3 or n == 1) return true;
        }
        return false;
    }
};