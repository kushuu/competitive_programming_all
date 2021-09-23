// https://leetcode.com/problems/intersection-of-two-arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        unordered_set<int> s3;
        for(auto i : s1) if(s2.find(i) != s2.end()) s3.insert(i);
        vector<int> ans(s3.begin(), s3.end());
        return ans;
    }
};