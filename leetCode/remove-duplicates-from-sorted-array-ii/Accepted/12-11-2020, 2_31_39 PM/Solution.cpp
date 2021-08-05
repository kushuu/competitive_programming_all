// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        int size = nums.size();
        if(size <= 2) return size;
        
        for(int i = 2; i < size; i++) {
            
            if(nums[i] == nums[i-1] && nums[i] == nums[i-2]) {
                nums.erase(nums.begin()+i);
                size--;
                int x = i;
                while(nums[x]==nums[i-1] && x < size) {
                    nums.erase(nums.begin()+x);
                    size--;
                }
                i = x;
            }
            
        }
        return nums.size();
    }
};