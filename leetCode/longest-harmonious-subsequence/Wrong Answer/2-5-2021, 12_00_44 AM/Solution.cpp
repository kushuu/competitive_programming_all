// https://leetcode.com/problems/longest-harmonious-subsequence

class Solution {
public:
    int findLHS(vector<int>& nums) {
        int size = nums.size(), max_ = INT_MIN, min_ = INT_MAX;
        if(size == 1) return 0;
        unordered_map<int, int> check;
        for(auto i : nums) {
            check[i]++;
            max_ = max(max_, i);
            min_ = min(min_, i);
        }
        // cout << max_;
        int ans = 0;
        for(int i = min_; i <= max_; i++) {
            if(check.find(i+1) != check.end()) {
                ans = max(ans, check[i]+check[i+1]);
            }
        }
        return ans;
    }
};