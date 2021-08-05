// https://leetcode.com/problems/set-mismatch

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int size = nums.size();
        int first;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < size; i++) {
            if(nums[i] == nums[i-1]) {
                first = nums[i];
                return {nums[i], nums[i]+1};
            }
        }
        return {};
    }
};