// https://leetcode.com/problems/shuffle-the-array

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int mid = n;
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
            ans.push_back(nums[mid]);
            mid++;
        }
        return ans;
    }
};