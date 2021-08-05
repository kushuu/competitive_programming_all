// https://leetcode.com/problems/can-place-flowers

class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        int size = nums.size();
        
        if(size == 1) {
            if(n == 0) return true;
            if(n != 1) return false;
            if(nums[0] != 0 )return false;
            return true;
        }
        
        int ans = 0;
        if(nums[0] == 0 && nums[1] == 0) ans++, nums[0] = 1;
        for(int i = 1; i < size-1; i++) {
            if(nums[i] == 0) {
                if(!nums[i-1] && !nums[i+1]) {
                    nums[i] = 1;
                    ans++;
                }
            }
        }
        if(nums[size-1] == 0 && nums[size-2] == 0) ans++;
        
        return ans >= n;
    }
};