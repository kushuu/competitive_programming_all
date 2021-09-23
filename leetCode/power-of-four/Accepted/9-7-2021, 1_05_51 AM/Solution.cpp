// https://leetcode.com/problems/power-of-four

class Solution {
public:
    int base4(int n) {
        int ans = 0;
        while(n) {
            ans += n%4;
            n /= 4;
        }
        return ans;
    }
    
    bool isPowerOfFour(int n) {
        // 0ms
        // return base4(n) == 1;
        
        int r;
        if(n==1) return true;
        if(n<=0 || n%2==1) return false;
        while(n != 0){
            r = n % 4;
            n=n/4;
            if(n==1 && r ==0) return true;   
            if(r !=0 ) return false;
        }
        return false;
    }
};