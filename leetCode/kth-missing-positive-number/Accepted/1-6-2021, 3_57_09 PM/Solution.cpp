// https://leetcode.com/problems/kth-missing-positive-number

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        bool done[2001] = {0};
        for(auto i : arr) done[i] = true;
        int i,ctr = 0;
        for(i = 1; ctr != k; i++) if(!done[i]) ctr++;
        return i-1;
    }
};