// https://leetcode.com/problems/kth-largest-element-in-an-array

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int size = nums.size();
        if(!size) return 0;
        sort(nums.begin(), nums.end());
        // for(auto i : nums) cout << i << " " ;
        return nums[size-k];
    }
};