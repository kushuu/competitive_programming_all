// https://leetcode.com/problems/power-of-two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 0) return false;
        if(n == 1 || n == 2)return true;
        if(n&1) return false;
        while(n > 1) {
            n/= 2;
            if(n&1) return false;
            if(n == 2) return true;
        }
        return n == 1;
    }
};