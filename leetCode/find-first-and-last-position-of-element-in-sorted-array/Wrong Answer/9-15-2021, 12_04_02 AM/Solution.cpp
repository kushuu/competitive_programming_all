// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();
        if(!size) return  {-1,-1};
        int start = 0, end = size-1;
        
        if(target > nums[end] or target < nums[start])  return {-1,-1};
        if(nums[start] == target) end = start;
        while(start < end) {
            int mid = start + (end-start)/2;
            if(nums[mid] >= target) end = mid-1;
            else start = mid+1;
        }
        vector<int> ans(2, end);
        int idx = end+1;
        if(nums[end] != target) return {-1,-1};
        while(idx < size) {
            if(nums[idx] == target) ans[1] = idx++;
            else break;
        }
        return ans;
    }
};