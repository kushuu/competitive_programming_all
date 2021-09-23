// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();
        int start = 0, end = size-1, found = -1;
        
        while(start < end) {
            int mid = start + (end-start)/2;
            if(nums[mid] == target) { found = mid; break; }
            if(nums[mid] < target) start = mid+1;
            else end = mid-1;
        }
        if(found == -1) return {-1,-1};
        
        vector<int> ans(2, found);
        cout << ans[0] << " " << ans[1];
        int front = found-1, back = found+1;
        while(front > 0) {
            if(nums[front] == target) ans[0] = front--;
            else break;
        }
        while(back < size) {
            if(nums[back] == target) ans[1] = back++;
            else break;
        }
        return ans;
    }
};