// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0], temp = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            temp = max(nums[i], temp+nums[i]);
            ans = max(ans, temp);
        }
        return ans;
    }
};