// https://leetcode.com/problems/array-nesting

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int size = nums.size();
        vector<bool> vis(size, false);
        int ans = 1;
        
        for(int i = 0; i < size; i++) {
            if(!vis[i]) {
                int start = nums[i], temp = 0;
                do {
                    temp++;
                    start = nums[start];
                    vis[start] = true;
                } while(nums[i] != start);
                ans = max(ans, temp);
            }
        }
        return ans;
    }
};