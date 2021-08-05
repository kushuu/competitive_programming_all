// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            if( find(nums.begin(), nums.end(), target -  nums[i]) != nums.end() && (find(nums.begin(), nums.end(), target -  nums[i]) - nums.begin() != i)) {
                ans.push_back(i);
                ans.push_back(find(nums.begin(), nums.end(), target-nums[i]) - nums.begin());
                break;
            }
        }
        return ans;        
    }
};