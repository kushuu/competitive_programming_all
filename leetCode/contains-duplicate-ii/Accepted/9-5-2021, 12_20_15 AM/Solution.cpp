// https://leetcode.com/problems/contains-duplicate-ii

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.empty() || !k) return false;
        int size = nums.size();
        
        vector<pair<int, int>> check;
        for(int i = 0; i < size; i++) check.push_back({nums[i], i});
        sort(check.begin(), check.end());
        
        for(int i = 0; i < size - 1; i++) {
            if(check[i+1].second - check[i].second <= k and check[i].first == check[i+1].first) return true;
        }
        return false;
    }
};