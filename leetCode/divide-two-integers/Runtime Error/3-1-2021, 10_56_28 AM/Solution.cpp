// https://leetcode.com/problems/divide-two-integers

class Solution {
public:
    int divide(int dividend, int divisor) {
        int ans = 0;
        bool sign = (divisor*dividend < 0)? false: true;
        
        dividend = abs(dividend);
        divisor = abs(divisor);
        int og = divisor;
        
        // cout << divisor << " " << dividend;
        
        while(divisor <= dividend) {
            ans++;
            divisor += og;
            // cout << divisor << " " ;
        }
        
        if(sign) return ans;
        return -1*ans;
    }
};