// https://leetcode.com/problems/contains-duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> check;
        for(auto i : nums) {
            if(check.find(i) != check.end()) return false;
            check.insert(i);
        }
        return true;
    }
};