// https://leetcode.com/problems/find-the-most-competitive-subsequence

class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> ans;
        int toDel = size-k;
        
        for(int i = 0; i < size; i++) {
            while(!ans.empty() && toDel && nums[i] < ans.back()) {
                ans.pop_back();
                toDel--;
            }
            ans.push_back(nums[i]);
        }
        while(ans.size() != k) ans.pop_back();
        return ans;
    }
};