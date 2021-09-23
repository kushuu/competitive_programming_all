// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int cnt = 0, size = nums.size();
        // for(int i = 0; i < nums.size(); i++) {
        //     if(!nums[i]) {
        //         cnt++;
        //         nums.erase(nums.begin() + i);
        //         i--;
        //     }
        // }
        // while(cnt--) nums.push_back(0);
        // return ;
        for(int temp = 0, i = 0; i < nums.size(); i++) {
            if(nums[i]) swap(nums[temp++], nums[i]);
        }
    }
};