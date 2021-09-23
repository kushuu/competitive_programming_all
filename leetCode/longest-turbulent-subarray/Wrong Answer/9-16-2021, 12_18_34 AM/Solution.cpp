// https://leetcode.com/problems/longest-turbulent-subarray

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int size = arr.size();
        if(size == 1) return 1;
        if(size == 2) {
            if(arr[0] == arr[1]) return 1;
            return 2;
        }
        
        int ans = 2, i=1, temp = 2;
        while(arr[i] == arr[i-1]) i++;
        if(i == size-1) return 2;
        if(i == size) return 1;
        
        bool dir = arr[i] > arr[i-1];
        
        for(; i < size; i++) {
            // cout << i << " " ;
            if(dir) {
                if(arr[i] < arr[i-1]) {
                    temp++;
                    dir = !dir;
                }
                else {
                    ans = max(ans, temp);
                    while(arr[i] == arr[i-1]) i++;
                    dir = arr[i] > arr[i-1];
                }
            }
            else {
                if(arr[i] > arr[i-1]) {
                    temp++;
                    dir = !dir;
                }
                else {
                    ans = max(ans, temp);
                    while(arr[i] == arr[i-1]) i++;
                    dir = arr[i] > arr[i-1];
                }
            }
        }
        
        return ans;
    }
};