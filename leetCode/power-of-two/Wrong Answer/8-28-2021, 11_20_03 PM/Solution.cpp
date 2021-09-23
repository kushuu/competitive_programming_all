// https://leetcode.com/problems/power-of-two

class Solution {
public:
    int log2(int n) {
        return log10(n)/log10(2);
    }
    
    bool isPowerOfTwo(int n) {
        if(n < 0) return false;
        if(n == 1) return true;
        if(n&1) return false;
        // cout << log2(1);
        return floor(log2(n)) == ceil(log2(n));
    }
};