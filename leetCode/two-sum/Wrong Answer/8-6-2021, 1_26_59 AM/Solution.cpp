// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;
        sort(nums.begin(), nums.end());
        while(start < end) {
            if(nums[start]+nums[end] == target) return {start, end};
            if(nums[start]+nums[end] < target) start++;
            else end--;
        }
        return {};
    }
};