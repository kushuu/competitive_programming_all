// https://leetcode.com/problems/maximum-product-of-three-numbers

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int size = nums.size();
        return max({nums[0]*nums[1]*nums[2], nums[size-1]*nums[size-2]*nums[size-3], nums[0]*nums[1]*nums[size-1], nums[0]*nums[size-1]*nums[size-2]});
    }
};