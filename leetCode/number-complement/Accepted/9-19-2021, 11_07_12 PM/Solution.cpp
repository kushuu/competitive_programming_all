// https://leetcode.com/problems/number-complement

class Solution {
public:
    
    int findComplement(int n) {
        unsigned int pow = 1, ans = 0;
        while(n) {
            if(n%2 == 0) ans += pow;
            n /= 2;
            pow *= 2;
        }
        return ans;
    }
};