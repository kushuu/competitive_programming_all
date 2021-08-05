// https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans = 0; 
        int sum = accumulate(arr.begin(), arr.begin()+k-1, 0);
        for(int i = 0; i <= arr.size()-k; i++) {
            sum += arr[i+k-1];
            if((double)sum/k >= threshold) ans++;
            sum -= arr[i];
        }
        return ans;
    }
};