// https://leetcode.com/problems/3sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();
        if(size < 3) return {};
        
        set<vector<int>> check;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < size; i++) {
            int j = i+1, k = size-1;
            while(j < k) {
                if(nums[i]+nums[j] == -1*nums[k]) {
                    check.insert({nums[i], nums[j], nums[k]});
                    j++,k--;
                }
                else if(nums[i]+nums[j] < -1*nums[k]) j++;
                else k--;
            }
        }
        vector<vector<int>> ans(check.begin(), check.end());
        return ans;
    }
};


// -4 -1 -1 0 1 2