// https://leetcode.com/problems/max-consecutive-ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, size = nums.size(), temp = 0;
        for(int i = 0; i < size; i++) {
            if(nums[i] == 1) temp++;
            else {
                ans = max(ans, temp);
                temp = 0;
            }
        }
        ans = max(ans, temp);
        return ans;
    }
};