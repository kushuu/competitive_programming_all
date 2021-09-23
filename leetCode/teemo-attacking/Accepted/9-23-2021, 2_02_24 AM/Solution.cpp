// https://leetcode.com/problems/teemo-attacking

class Solution {
public:
    int findPoisonedDuration(vector<int>& arr, int dur) {
        int end, ans = dur, size = arr.size();
        
        for(int i = 0; i < size-1; i++) {
            end = arr[i]+dur-1;
            if(arr[i+1] <= end) ans += arr[i+1]-arr[i];
            else ans += dur;
        }
        return ans;
    }
};