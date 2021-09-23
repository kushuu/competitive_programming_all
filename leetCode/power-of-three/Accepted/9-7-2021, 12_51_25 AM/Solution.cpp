// https://leetcode.com/problems/power-of-three

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 1 or n == 3) return true;
        while(n) {
            if(n%3 != 0) return false;
            n /= 3;
            if(!(n&1)) return false;
            if(n == 3) return true;
        }
        return false;
    }
};