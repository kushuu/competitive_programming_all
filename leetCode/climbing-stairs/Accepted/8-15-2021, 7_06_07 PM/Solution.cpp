// https://leetcode.com/problems/climbing-stairs

class Solution {
public:
    int climbStairs(int n) {
        if(n <= 3) return n;
        int dp[n+1];
        n--;
        dp[0] = 1;
        dp[1] = 2;
        for(int i = 2; i <= n; i++) dp[i] = dp[i-1]+dp[i-2];
        return dp[n];
    }
};