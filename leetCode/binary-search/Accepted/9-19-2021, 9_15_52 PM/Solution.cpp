// https://leetcode.com/problems/binary-search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] < target) start = mid+1;
            else end = mid-1;
        }
        return -1;
    }
};