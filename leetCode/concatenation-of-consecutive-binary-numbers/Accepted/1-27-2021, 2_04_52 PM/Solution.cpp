// https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers

class Solution {
public:
    int concatenatedBinary(int n) {
        long long int res = 0;
        int temp = 0;
        
        for(int i = 1; i <= n; i++)
        {
            temp += (i == (1 << temp));
            res = ((res << temp) | i) % 1000000007;
        }
        
        return res;
    }
};