// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) {
        signed int ans = 0;
        bool sign = (x<0)?false: true;
        x = abs(x);
                
        while(x) {
            ans = ans*10 + x%10;
            x /= 10;
        }
        if(sign)    return ans;
        else    return -1*ans;
    }
};