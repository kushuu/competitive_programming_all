// https://leetcode.com/problems/contiguous-array

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int cnt = 0, size = nums.size(), ele = 0, ans = -1;
        vector<int> check;
        for(auto i : nums) {
            ele++;
            if(i == 1) cnt++;
            else cnt--;
            if(!cnt) {
                ans = max(ans, ele);
                ele = 0;
            }
        }
        return ans;
    }
};