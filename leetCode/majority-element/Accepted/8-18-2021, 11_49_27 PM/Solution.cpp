// https://leetcode.com/problems/majority-element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> check;
        int max_ele = nums[0], max_ = 0;
        for(auto i : nums) {
            check[i]++;
            if(check[i] > max_) {
                max_ele = i;
                max_ = check[i];
            }
        }
        return max_ele;
    }
};