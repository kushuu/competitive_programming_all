// https://leetcode.com/problems/happy-number

class Solution {
public:
    int fun(int n) {
        long ans = 0;
        while(n){
            int q = n%10;
            ans += q*q;
            n /= 10;
        }
        return ans;
    }
    
    bool isHappy(int n) {
        // unordered_set<long> check;
        // check.insert(n);
        // while(n != 1) {
        //     n = fun(n);
        //     if(check.find(n) != check.end())
        //         return false;
        //     check.insert(n);
        // }
        // return true;
        while(n != 1 and n != 4) n = fun(n);
        return n == 1;
    }
};