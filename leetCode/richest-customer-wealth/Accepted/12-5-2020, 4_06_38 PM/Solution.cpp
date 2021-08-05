// https://leetcode.com/problems/richest-customer-wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = -1;
        for(auto i : accounts) {
            ans = max(ans, accumulate(i.begin(), i.end(), 0));
        }
        return ans;                      
    }
};