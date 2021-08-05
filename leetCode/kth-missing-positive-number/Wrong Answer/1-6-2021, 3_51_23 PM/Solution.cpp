// https://leetcode.com/problems/kth-missing-positive-number

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        bool done[1001] = {0};
        for(auto i : arr) done[i] = true;
        
        int i,ctr = 1;
        for(i = 1; ctr != k; i++) {
            if(!done[i]) {
                ctr++;
            }
        }
        return i;
    }
};