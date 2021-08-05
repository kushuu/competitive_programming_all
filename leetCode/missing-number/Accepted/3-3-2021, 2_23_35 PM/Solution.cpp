// https://leetcode.com/problems/missing-number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum_nums = accumulate(nums.begin(), nums.end(), 0), size = nums.size();
        int should_be = (size*(size+1))/2;
        return should_be-sum_nums;
    }
};