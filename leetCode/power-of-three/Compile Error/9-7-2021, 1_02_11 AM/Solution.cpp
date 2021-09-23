// https://leetcode.com/problems/power-of-three

class Solution {
public:
    int base3(int n) {
        int ans = 0;
        while(n) {
            ans += n%3;
            n /= 3;
        }
        return ans;
    }
    
    bool isPowerOfThree(int n) {
        // 21ms (best)
        // if(n == 1 or n == 3) return true;
        // while(n) {
        //     if(n%3 != 0) return false;
        //     n /= 3;
        //     if(!(n&1)) return false;
        //     if(n == 3) return true;
        // }
        // return false;
        
        // 34ms
        // return base3(n) == 1;
    }
};