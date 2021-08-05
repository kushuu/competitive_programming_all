// https://leetcode.com/problems/running-sum-of-1d-array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size();
        if(!size) return {};
        
        vector<int> ans(size);
        ans[0] = nums[0];
        for(int i = 1; i < size; i++) 
            ans[i] = ans[i-1]+nums[i];
        
        return ans;
    }
};