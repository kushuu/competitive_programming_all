// https://leetcode.com/problems/contains-duplicate-ii

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.empty()) return false;
        int size = nums.size();
        for(int i = 0; i <= size-k-1; i++) {
            unordered_set<int> check(nums.begin()+i, nums.begin()+i+k+1);
            // for(auto i : check) cout << i << " " ; cout << endl;
            if(check.size() != k+1) return true;
        }
        return false;
    }
};