// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> check;
        for(int i = 1; i <= nums.size(); i++) check.insert(i);
        for(auto i : nums) if(check.find(i) != check.end()) check.erase(i);
        vector<int> ans(check.begin(), check.end());
        return ans;
    }
};