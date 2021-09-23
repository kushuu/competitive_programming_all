// https://leetcode.com/problems/search-insert-position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int start = 0, end = size-1;
        int mid = start + (end-start)/2;;
        
        while(start < end) {
            mid = start + (end-start)/2;
            // cout << start << " " << end << " " << mid << "\n" ;
            if(nums[mid] == target) return mid;
            if(nums[mid] > target) end = mid-1;
            else start = mid+1;
        }
        // cout << mid;
        if(target > nums[size-1]) return size;
        if(target > nums[size-2] and target < nums[size-1]) return size-1;
        return mid;
    }
};