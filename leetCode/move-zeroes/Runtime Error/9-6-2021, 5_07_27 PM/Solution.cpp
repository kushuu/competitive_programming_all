// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        bool ok = false;
        for(auto i : nums) if(i) ok = true;
        if(ok) {
            int cnt = 0, size = nums.size();
            for(int i = 0; i < size; i++) {
                if(!nums[i]) {
                    cnt++;
                    nums.erase(nums.begin() + i);
                }
            }
            while(cnt--) nums.push_back(0);
        }
        return ;
    }
};