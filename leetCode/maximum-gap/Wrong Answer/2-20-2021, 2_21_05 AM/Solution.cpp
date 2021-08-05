// https://leetcode.com/problems/maximum-gap

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int size = nums.size();
        if(size <= 2) return 0;
        
        int ans = INT_MIN;
        for(int i = 1; i < size; i++) ans = max(ans, nums[i]-nums[i-1]);
        return ans;
    }
};