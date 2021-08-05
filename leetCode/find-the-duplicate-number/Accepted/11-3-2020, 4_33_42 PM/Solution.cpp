// https://leetcode.com/problems/find-the-duplicate-number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> check;
        int ans = 0;
        for(auto i : nums) {
            if(check.find(i) == check.end()) check.insert(i);
            else {
                ans = i;
                break;
            }
        }
        return ans;
    }
};