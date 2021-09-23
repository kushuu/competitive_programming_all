// https://leetcode.com/problems/number-complement

class Solution {
public:
    int f(int n) {
        int ans = 0;
        long int pow = 1;
        while(n) {
            if(n%2 == 1) ans += 0;
            else ans += pow;
            n /= 2;
            pow *= 2;
        }
        return ans;
    }
    
    int findComplement(int num) {
        return f(num);
    }
};