// https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans = 0, size = arr.size();
        int sum = accumulate(arr.begin(), arr.begin()+k-1, 0);
        for(int i = 0; i <= size-k; i++) {
            sum += arr[i+k-1];
            // cout << i << " " << sum << endl;
            if((double)sum/k >= threshold) {
                // cout << i << " " ;
                ans++;
            }
            sum -= arr[i];
        }
        return ans;
    }
};