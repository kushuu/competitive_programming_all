// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& nums) {
        int size = nums.size();
        int start = 0, end = size-1, ans = 0;
        
        while(start < end) {
            ans = max(ans, (end-start)*min(nums[start], nums[end]));
            if(nums[start] < nums[end])  start++;
            else end--;
        }
        return ans;
    }
};