// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = 0, temp = 0;
        for(int i = 0; i < nums.size(); i++) {
            temp += nums[i];
            temp = max(0, temp);
            ans = max(ans, temp);
        }
        return ans;
    }
};