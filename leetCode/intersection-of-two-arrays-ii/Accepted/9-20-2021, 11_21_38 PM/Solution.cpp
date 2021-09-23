// https://leetcode.com/problems/intersection-of-two-arrays-ii

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m1;
        unordered_map<int, int> m2;
        for(auto i : nums1) m1[i]++;
        for(auto i : nums2) m2[i]++;

        vector<int> ans;
        for(auto i : m1) {
            if(m2.find(i.first) != m2.end()) {
                int temp = min(i.second, m2[i.first]);
                while(temp--) ans.push_back(i.first);
            }
        }
        return ans;
    }
};