// https://leetcode.com/problems/intersection-of-two-arrays-ii

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        
        vector<int> ans;
        for(auto i : s1) {
            if(s2.find(i) != s2.end()) {
                int t1 = 0, t2 = 0;
                for(auto j : nums1) if(i == j) t1++;
                for(auto j : nums2) if(i == j) t2++;
                int t = min(t1, t2);
                while(t--) ans.push_back(i);
            }
        }
        return ans;
    }
};