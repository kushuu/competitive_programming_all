// https://leetcode.com/problems/merge-sorted-array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(!n) return;
        if(!m) {
            nums1 = nums2;
            return;
        }
        vector<int> ans(nums1.begin(), nums1.end());
        ans.insert(ans.end(), nums2.begin(), nums2.end());
        sort(ans.begin(), ans.end());
        nums1 = ans;
        int t = 1;
        while(t <= nums1.size()-m) {
            nums1.erase(nums1.begin());
            t++;
        }
    }
};