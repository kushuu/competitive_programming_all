// https://leetcode.com/problems/increasing-triplet-subsequence

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int size = nums.size();
        vector<int> check(size,1);
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < i; j++) {
                if(nums[i] > nums[j]) {
                    check[i] = 1+check[j];
                }
            }
        }
        for(auto i : check) if(i > 2) return true;
        return false;
    }
};