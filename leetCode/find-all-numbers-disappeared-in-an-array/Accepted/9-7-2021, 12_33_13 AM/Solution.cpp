// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // 460ms
        // set<int> check;
        // for(int i = 1; i <= nums.size(); i++) check.insert(i);
        // for(auto i : nums) if(check.find(i) != check.end()) check.erase(i);
        // vector<int> ans(check.begin(), check.end());
        // return ans;
        
        // 260ms
        // set<int> check(nums.begin(), nums.end());
        // vector<int> ans;
        // for(int i = 1; i <= nums.size(); i++) if(check.find(i) == check.end()) ans.push_back(i);
        // return ans;
        
        unordered_set<int> check(nums.begin(), nums.end());
        vector<int> ans;
        for(int i = 1; i <= nums.size(); i++) if(check.find(i) == check.end()) ans.push_back(i);
        return ans;
        
        
    }
};