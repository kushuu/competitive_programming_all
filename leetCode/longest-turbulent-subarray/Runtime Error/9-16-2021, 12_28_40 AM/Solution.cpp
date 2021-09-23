// https://leetcode.com/problems/longest-turbulent-subarray

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int size = arr.size();
        int ans = 0, temp = 0;
        vector<int> check;
        for(int i = 1; i < size; i++) {
            check.push_back(
                arr[i]==arr[i-1]?-1:(arr[i]>arr[i-1])?1:0
            );
        }
        if(check[0] != -1) temp++;
        for(int i = 1; i < size-1; i++) {
            if(check[i] == -1) temp = 0;
            else {
                if(check[i] != check[i-1]) temp++;
                else temp = 1;
            }
            
            ans = max(ans, temp);
            
        }
        return ans+1;
    }
};