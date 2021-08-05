// https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans = 0, size = arr.size();
        for(int i = 0; i <= size-k; i++) {
            if((double)accumulate(arr.begin()+i, arr.begin()+i+k, 0)/k >= threshold) {
                cout << i << " " ;
                ans++;
            }
        }
        return ans;
    }
};