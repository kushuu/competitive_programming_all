// https://leetcode.com/problems/find-the-duplicate-number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int sum = 0, n = nums.size();
        for(auto i : nums) sum += i;
        return sum - (n*(n-1))/2;
    }
};