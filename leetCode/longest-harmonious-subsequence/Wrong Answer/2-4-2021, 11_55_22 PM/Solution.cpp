// https://leetcode.com/problems/longest-harmonious-subsequence

class Solution {
public:
    int findLHS(vector<int>& nums) {
        int size = nums.size(), max_ = 0;
        unordered_map<int, int> check;
        for(auto i : nums) {
            check[i]++;
            max_ = max(max_, check[i]);
        }
        
        int ans = 0;
        for(int i = 1; i <= max_; i++) {
            if(check.find(i+1) != check.end()) {
                ans = max(ans, check[i]+check[i+1]);
            }
        }
        return ans;
    }
};