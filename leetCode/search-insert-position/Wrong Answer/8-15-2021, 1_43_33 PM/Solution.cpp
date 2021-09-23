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
        if(mid == size-2)
            return mid+1;
        else if(mid == size-1)
            return mid+2;
        return mid;
    }
};