// https://leetcode.com/problems/intersection-of-two-arrays-ii

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> a, b;
        for(auto i : nums1) a[i]++;
        for(auto i : nums2) b[i]++;
        
        vector<int> ans;
        for(auto i : a) {
            if(b.find(i.first) != b.end()) {
                int temp = min(i.second, b[i.first]);
                while(temp--) ans.push_back(i.second);
            }
        }
        return ans;
    }
};