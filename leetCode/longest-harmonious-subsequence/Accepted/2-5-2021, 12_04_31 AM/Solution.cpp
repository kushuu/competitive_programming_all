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
        // cout << min_ << " " << max_ << endl;
        int ans = 0;
        for(auto i : nums) {
            if(check.find(i+1) != check.end()) {
                // cout << i << " " << check[i] << endl;
                ans = max(ans, check[i]+check[i+1]);
            }
            // cout << i << " " << ans << endl;
        }
        return ans;
    }
};