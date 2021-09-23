// https://leetcode.com/problems/third-maximum-number

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> check(nums.begin(), nums.end());
        if(check.size() < 3) return *--check.end();
        
        auto itr = check.end();
        --itr; --itr; --itr;
        return *itr;
    }
};