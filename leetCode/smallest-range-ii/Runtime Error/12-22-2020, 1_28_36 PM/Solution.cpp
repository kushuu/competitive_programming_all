// https://leetcode.com/problems/smallest-range-ii

class Solution {
public:
    int smallestRangeII(vector<int>& A, int K) {
        int size = A.size();
        sort(A.begin(), A.end());
        if(size == 1) return 0;
        int ans = A[size-1] - A[0];
        for(int i = 0; i < size; i++) {
            int temp1 = A[i], temp2 = A[i+1];
            int hi = max(A[size-1]-K , temp1 + K);
            int lo = max(A[0] + K , temp2 - K);
            ans = min(ans , hi - lo);
        }
        return ans;
    }
};