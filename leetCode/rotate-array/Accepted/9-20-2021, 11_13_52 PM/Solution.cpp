// https://leetcode.com/problems/rotate-array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k %= size;
        vector<int> check(nums.begin(), nums.begin() + (size-k));
        for(int i = 0; i < k; i++) nums[i] = nums[i+(size-k)];
        for(int i = k; i < size; i++) nums[i] = check[i-k];
    }
};