// https://leetcode.com/problems/merge-sorted-array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(!n) return;
        if(!m) {
            nums1 = nums2;
            return;
        }
        for(int i = m, j = 0; i < m+n && j < n; i++, j++) {
            nums1[i] = nums2[j];
        }
        sort(nums1.begin(), nums1.end());
    }
};