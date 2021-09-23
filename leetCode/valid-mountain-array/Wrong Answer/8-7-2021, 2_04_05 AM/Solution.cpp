// https://leetcode.com/problems/valid-mountain-array

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int size = arr.size();
        if(size < 3) return false;
        
        int idx = -1, max_ele = arr[0];
        for(int i = 0; i < size; i++) {
            if(arr[i] > max_ele) {
                max_ele = arr[i];
                idx = i;
            }
        }
        if(idx == 0) return false;
        for(int i = 1; i < idx; i++) {
            if(arr[i] >= arr[i-1]) return false;
        }
        for(int i = idx+1; i < size; i++) {
            if(arr[i] <= arr[i-1]) return false;
        }
        return true;
    }
};