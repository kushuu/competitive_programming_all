// https://leetcode.com/problems/get-maximum-in-generated-array

class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n == 0 || n == 1) return n;
        
        vector<int> check(n+1);
        int ans = INT_MIN;
        check[0] = 0, check[1] = 1;
        for(int i = 2; i <= n; i++) {
            if(i&1) check[i] = check[i/2]+check[i/2+1];
            else check[i] = check[i/2];
            ans = max(ans, check[i]);
        }
        return ans;
    }
};