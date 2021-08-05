// https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int check = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != nums[check]){
                ++check;
                nums[check] = nums[i];
            }
                
        }
        return check+1;
    }
};