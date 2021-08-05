// https://leetcode.com/problems/kth-missing-positive-number

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        bool done[1001] = {0};
        for(auto i : arr) done[i] = true;
        
        // for(int i = 0; i < 15; i++) cout << i << " " << done[i] << endl;
        
        int i,ctr = 0;
        for(i = 1; ctr != k; i++) {
            if(!done[i]) {
                // cout << "here ";
                ctr++;
            }
        }
        return i-1;
    }
};